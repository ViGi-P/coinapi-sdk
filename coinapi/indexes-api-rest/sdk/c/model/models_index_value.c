#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_index_value.h"



static models_index_value_t *models_index_value_create_internal(
    char *timestamp,
    double *value,
    list_t *composition
    ) {
    models_index_value_t *models_index_value_local_var = malloc(sizeof(models_index_value_t));
    if (!models_index_value_local_var) {
        return NULL;
    }
    memset(models_index_value_local_var, 0, sizeof(models_index_value_t));
    models_index_value_local_var->_library_owned = 1;
    models_index_value_local_var->timestamp = timestamp;
    models_index_value_local_var->value = value;
    models_index_value_local_var->composition = composition;
    return models_index_value_local_var;
}

__attribute__((deprecated)) models_index_value_t *models_index_value_create(
    char *timestamp,
    double *value,
    list_t *composition
    ) {
    double *value_copy = NULL;
    if (value) {
        value_copy = malloc(sizeof(double));
        if (value_copy) *value_copy = *value;
    }
    models_index_value_t *result = models_index_value_create_internal (
        timestamp,
        value_copy,
        composition
        );
    if (!result) {
        free(value_copy);
    }
    return result;
}

void models_index_value_free(models_index_value_t *models_index_value) {
    if(NULL == models_index_value){
        return ;
    }
    if(models_index_value->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_index_value_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_index_value->timestamp) {
        free(models_index_value->timestamp);
        models_index_value->timestamp = NULL;
    }
    if (models_index_value->value) {
        free(models_index_value->value);
        models_index_value->value = NULL;
    }
    if (models_index_value->composition) {
        list_ForEach(listEntry, models_index_value->composition) {
            models_index_value_component_free(listEntry->data);
        }
        list_freeList(models_index_value->composition);
        models_index_value->composition = NULL;
    }
    free(models_index_value);
}

cJSON *models_index_value_convertToJSON(models_index_value_t *models_index_value) {
    cJSON *item = cJSON_CreateObject();

    // models_index_value->timestamp
    if(models_index_value->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", models_index_value->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_index_value->value
    if(models_index_value->value) {
    if(cJSON_AddNumberToObject(item, "value", *models_index_value->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_index_value->composition
    if(models_index_value->composition) {
    cJSON *composition = cJSON_AddArrayToObject(item, "composition");
    if(composition == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *compositionListEntry;
    if (models_index_value->composition) {
    list_ForEach(compositionListEntry, models_index_value->composition) {
    cJSON *itemLocal = models_index_value_component_convertToJSON(compositionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(composition, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

models_index_value_t *models_index_value_parseFromJSON(cJSON *models_index_valueJSON){

    models_index_value_t *models_index_value_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for models_index_value->value
    double *value_local_var = NULL;

    // define the local list for models_index_value->composition
    list_t *compositionList = NULL;

    // models_index_value->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(models_index_valueJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // models_index_value->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(models_index_valueJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    value_local_var = malloc(sizeof(double));
    if(!value_local_var)
    {
        goto end;
    }
    *value_local_var = value->valuedouble;
    }

    // models_index_value->composition
    cJSON *composition = cJSON_GetObjectItemCaseSensitive(models_index_valueJSON, "composition");
    if (cJSON_IsNull(composition)) {
        composition = NULL;
    }
    if (composition) { 
    cJSON *composition_local_nonprimitive = NULL;
    if(!cJSON_IsArray(composition)){
        goto end; //nonprimitive container
    }

    compositionList = list_createList();

    cJSON_ArrayForEach(composition_local_nonprimitive,composition )
    {
        if(!cJSON_IsObject(composition_local_nonprimitive)){
            goto end;
        }
        models_index_value_component_t *compositionItem = models_index_value_component_parseFromJSON(composition_local_nonprimitive);

        list_addElement(compositionList, compositionItem);
    }
    }


    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);

    models_index_value_local_var = models_index_value_create_internal (
        timestamp_local_str,
        value_local_var,
        composition ? compositionList : NULL
        );

    if (!models_index_value_local_var) {
        goto end;
    }

    return models_index_value_local_var;
end:
    if (timestamp_local_str) {
        free(timestamp_local_str);
        timestamp_local_str = NULL;
    }
    if (value_local_var) {
        free(value_local_var);
        value_local_var = NULL;
    }
    if (compositionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, compositionList) {
            models_index_value_component_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(compositionList);
        compositionList = NULL;
    }
    return NULL;

}
