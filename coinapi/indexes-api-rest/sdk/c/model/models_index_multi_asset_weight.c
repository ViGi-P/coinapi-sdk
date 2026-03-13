#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_index_multi_asset_weight.h"



static models_index_multi_asset_weight_t *models_index_multi_asset_weight_create_internal(
    char *index_id,
    char *asset_id,
    double weight
    ) {
    models_index_multi_asset_weight_t *models_index_multi_asset_weight_local_var = malloc(sizeof(models_index_multi_asset_weight_t));
    if (!models_index_multi_asset_weight_local_var) {
        return NULL;
    }
    models_index_multi_asset_weight_local_var->index_id = index_id;
    models_index_multi_asset_weight_local_var->asset_id = asset_id;
    models_index_multi_asset_weight_local_var->weight = weight;

    models_index_multi_asset_weight_local_var->_library_owned = 1;
    return models_index_multi_asset_weight_local_var;
}

__attribute__((deprecated)) models_index_multi_asset_weight_t *models_index_multi_asset_weight_create(
    char *index_id,
    char *asset_id,
    double weight
    ) {
    return models_index_multi_asset_weight_create_internal (
        index_id,
        asset_id,
        weight
        );
}

void models_index_multi_asset_weight_free(models_index_multi_asset_weight_t *models_index_multi_asset_weight) {
    if(NULL == models_index_multi_asset_weight){
        return ;
    }
    if(models_index_multi_asset_weight->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_index_multi_asset_weight_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_index_multi_asset_weight->index_id) {
        free(models_index_multi_asset_weight->index_id);
        models_index_multi_asset_weight->index_id = NULL;
    }
    if (models_index_multi_asset_weight->asset_id) {
        free(models_index_multi_asset_weight->asset_id);
        models_index_multi_asset_weight->asset_id = NULL;
    }
    free(models_index_multi_asset_weight);
}

cJSON *models_index_multi_asset_weight_convertToJSON(models_index_multi_asset_weight_t *models_index_multi_asset_weight) {
    cJSON *item = cJSON_CreateObject();

    // models_index_multi_asset_weight->index_id
    if(models_index_multi_asset_weight->index_id) {
    if(cJSON_AddStringToObject(item, "indexId", models_index_multi_asset_weight->index_id) == NULL) {
    goto fail; //String
    }
    }


    // models_index_multi_asset_weight->asset_id
    if(models_index_multi_asset_weight->asset_id) {
    if(cJSON_AddStringToObject(item, "assetId", models_index_multi_asset_weight->asset_id) == NULL) {
    goto fail; //String
    }
    }


    // models_index_multi_asset_weight->weight
    if(models_index_multi_asset_weight->weight) {
    if(cJSON_AddNumberToObject(item, "weight", models_index_multi_asset_weight->weight) == NULL) {
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

models_index_multi_asset_weight_t *models_index_multi_asset_weight_parseFromJSON(cJSON *models_index_multi_asset_weightJSON){

    models_index_multi_asset_weight_t *models_index_multi_asset_weight_local_var = NULL;

    // models_index_multi_asset_weight->index_id
    cJSON *index_id = cJSON_GetObjectItemCaseSensitive(models_index_multi_asset_weightJSON, "indexId");
    if (cJSON_IsNull(index_id)) {
        index_id = NULL;
    }
    if (index_id) { 
    if(!cJSON_IsString(index_id) && !cJSON_IsNull(index_id))
    {
    goto end; //String
    }
    }

    // models_index_multi_asset_weight->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(models_index_multi_asset_weightJSON, "assetId");
    if (cJSON_IsNull(asset_id)) {
        asset_id = NULL;
    }
    if (asset_id) { 
    if(!cJSON_IsString(asset_id) && !cJSON_IsNull(asset_id))
    {
    goto end; //String
    }
    }

    // models_index_multi_asset_weight->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(models_index_multi_asset_weightJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }


    models_index_multi_asset_weight_local_var = models_index_multi_asset_weight_create_internal (
        index_id && !cJSON_IsNull(index_id) ? strdup(index_id->valuestring) : NULL,
        asset_id && !cJSON_IsNull(asset_id) ? strdup(asset_id->valuestring) : NULL,
        weight ? weight->valuedouble : 0
        );

    return models_index_multi_asset_weight_local_var;
end:
    return NULL;

}
