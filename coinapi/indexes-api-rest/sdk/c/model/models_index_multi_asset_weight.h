/*
 * models_index_multi_asset_weight.h
 *
 * 
 */

#ifndef _models_index_multi_asset_weight_H_
#define _models_index_multi_asset_weight_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_index_multi_asset_weight_t models_index_multi_asset_weight_t;




typedef struct models_index_multi_asset_weight_t {
    char *index_id; // string
    char *asset_id; // string
    double *weight; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} models_index_multi_asset_weight_t;

__attribute__((deprecated)) models_index_multi_asset_weight_t *models_index_multi_asset_weight_create(
    char *index_id,
    char *asset_id,
    double *weight
);

void models_index_multi_asset_weight_free(models_index_multi_asset_weight_t *models_index_multi_asset_weight);

models_index_multi_asset_weight_t *models_index_multi_asset_weight_parseFromJSON(cJSON *models_index_multi_asset_weightJSON);

cJSON *models_index_multi_asset_weight_convertToJSON(models_index_multi_asset_weight_t *models_index_multi_asset_weight);

#endif /* _models_index_multi_asset_weight_H_ */

