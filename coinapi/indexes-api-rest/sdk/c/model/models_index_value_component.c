#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_index_value_component.h"



static models_index_value_component_t *models_index_value_component_create_internal(
    char *component_id,
    double component_value
    ) {
    models_index_value_component_t *models_index_value_component_local_var = malloc(sizeof(models_index_value_component_t));
    if (!models_index_value_component_local_var) {
        return NULL;
    }
    models_index_value_component_local_var->component_id = component_id;
    models_index_value_component_local_var->component_value = component_value;

    models_index_value_component_local_var->_library_owned = 1;
    return models_index_value_component_local_var;
}

__attribute__((deprecated)) models_index_value_component_t *models_index_value_component_create(
    char *component_id,
    double component_value
    ) {
    return models_index_value_component_create_internal (
        component_id,
        component_value
        );
}

void models_index_value_component_free(models_index_value_component_t *models_index_value_component) {
    if(NULL == models_index_value_component){
        return ;
    }
    if(models_index_value_component->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_index_value_component_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_index_value_component->component_id) {
        free(models_index_value_component->component_id);
        models_index_value_component->component_id = NULL;
    }
    free(models_index_value_component);
}

cJSON *models_index_value_component_convertToJSON(models_index_value_component_t *models_index_value_component) {
    cJSON *item = cJSON_CreateObject();

    // models_index_value_component->component_id
    if(models_index_value_component->component_id) {
    if(cJSON_AddStringToObject(item, "component_id", models_index_value_component->component_id) == NULL) {
    goto fail; //String
    }
    }


    // models_index_value_component->component_value
    if(models_index_value_component->component_value) {
    if(cJSON_AddNumberToObject(item, "component_value", models_index_value_component->component_value) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

models_index_value_component_t *models_index_value_component_parseFromJSON(cJSON *models_index_value_componentJSON){

    models_index_value_component_t *models_index_value_component_local_var = NULL;

    // models_index_value_component->component_id
    cJSON *component_id = cJSON_GetObjectItemCaseSensitive(models_index_value_componentJSON, "component_id");
    if (cJSON_IsNull(component_id)) {
        component_id = NULL;
    }
    if (component_id) { 
    if(!cJSON_IsString(component_id) && !cJSON_IsNull(component_id))
    {
    goto end; //String
    }
    }

    // models_index_value_component->component_value
    cJSON *component_value = cJSON_GetObjectItemCaseSensitive(models_index_value_componentJSON, "component_value");
    if (cJSON_IsNull(component_value)) {
        component_value = NULL;
    }
    if (component_value) { 
    if(!cJSON_IsNumber(component_value))
    {
    goto end; //Numeric
    }
    }


    models_index_value_component_local_var = models_index_value_component_create_internal (
        component_id && !cJSON_IsNull(component_id) ? strdup(component_id->valuestring) : NULL,
        component_value ? component_value->valuedouble : 0
        );

    return models_index_value_component_local_var;
end:
    return NULL;

}
