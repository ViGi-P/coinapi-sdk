/*
 * models_index_value_component.h
 *
 * 
 */

#ifndef _models_index_value_component_H_
#define _models_index_value_component_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_index_value_component_t models_index_value_component_t;




typedef struct models_index_value_component_t {
    char *component_id; // string
    double *component_value; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} models_index_value_component_t;

__attribute__((deprecated)) models_index_value_component_t *models_index_value_component_create(
    char *component_id,
    double *component_value
);

void models_index_value_component_free(models_index_value_component_t *models_index_value_component);

models_index_value_component_t *models_index_value_component_parseFromJSON(cJSON *models_index_value_componentJSON);

cJSON *models_index_value_component_convertToJSON(models_index_value_component_t *models_index_value_component);

#endif /* _models_index_value_component_H_ */

