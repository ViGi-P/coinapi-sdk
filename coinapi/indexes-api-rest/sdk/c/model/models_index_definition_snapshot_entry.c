#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_index_definition_snapshot_entry.h"



static models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry_create_internal(
    char *index_id,
    char *timestamp,
    double value
    ) {
    models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry_local_var = malloc(sizeof(models_index_definition_snapshot_entry_t));
    if (!models_index_definition_snapshot_entry_local_var) {
        return NULL;
    }
    models_index_definition_snapshot_entry_local_var->index_id = index_id;
    models_index_definition_snapshot_entry_local_var->timestamp = timestamp;
    models_index_definition_snapshot_entry_local_var->value = value;

    models_index_definition_snapshot_entry_local_var->_library_owned = 1;
    return models_index_definition_snapshot_entry_local_var;
}

__attribute__((deprecated)) models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry_create(
    char *index_id,
    char *timestamp,
    double value
    ) {
    return models_index_definition_snapshot_entry_create_internal (
        index_id,
        timestamp,
        value
        );
}

void models_index_definition_snapshot_entry_free(models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry) {
    if(NULL == models_index_definition_snapshot_entry){
        return ;
    }
    if(models_index_definition_snapshot_entry->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_index_definition_snapshot_entry_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_index_definition_snapshot_entry->index_id) {
        free(models_index_definition_snapshot_entry->index_id);
        models_index_definition_snapshot_entry->index_id = NULL;
    }
    if (models_index_definition_snapshot_entry->timestamp) {
        free(models_index_definition_snapshot_entry->timestamp);
        models_index_definition_snapshot_entry->timestamp = NULL;
    }
    free(models_index_definition_snapshot_entry);
}

cJSON *models_index_definition_snapshot_entry_convertToJSON(models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry) {
    cJSON *item = cJSON_CreateObject();

    // models_index_definition_snapshot_entry->index_id
    if(models_index_definition_snapshot_entry->index_id) {
    if(cJSON_AddStringToObject(item, "index_id", models_index_definition_snapshot_entry->index_id) == NULL) {
    goto fail; //String
    }
    }


    // models_index_definition_snapshot_entry->timestamp
    if(models_index_definition_snapshot_entry->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", models_index_definition_snapshot_entry->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_index_definition_snapshot_entry->value
    if(models_index_definition_snapshot_entry->value) {
    if(cJSON_AddNumberToObject(item, "value", models_index_definition_snapshot_entry->value) == NULL) {
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

models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry_parseFromJSON(cJSON *models_index_definition_snapshot_entryJSON){

    models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry_local_var = NULL;

    // models_index_definition_snapshot_entry->index_id
    cJSON *index_id = cJSON_GetObjectItemCaseSensitive(models_index_definition_snapshot_entryJSON, "index_id");
    if (cJSON_IsNull(index_id)) {
        index_id = NULL;
    }
    if (index_id) { 
    if(!cJSON_IsString(index_id) && !cJSON_IsNull(index_id))
    {
    goto end; //String
    }
    }

    // models_index_definition_snapshot_entry->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(models_index_definition_snapshot_entryJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // models_index_definition_snapshot_entry->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(models_index_definition_snapshot_entryJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }


    models_index_definition_snapshot_entry_local_var = models_index_definition_snapshot_entry_create_internal (
        index_id && !cJSON_IsNull(index_id) ? strdup(index_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        value ? value->valuedouble : 0
        );

    return models_index_definition_snapshot_entry_local_var;
end:
    return NULL;

}
