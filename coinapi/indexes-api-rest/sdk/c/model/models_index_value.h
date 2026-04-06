/*
 * models_index_value.h
 *
 * 
 */

#ifndef _models_index_value_H_
#define _models_index_value_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_index_value_t models_index_value_t;

#include "models_index_value_component.h"



typedef struct models_index_value_t {
    char *timestamp; //date time
    double *value; //numeric
    list_t *composition; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} models_index_value_t;

__attribute__((deprecated)) models_index_value_t *models_index_value_create(
    char *timestamp,
    double *value,
    list_t *composition
);

void models_index_value_free(models_index_value_t *models_index_value);

models_index_value_t *models_index_value_parseFromJSON(cJSON *models_index_valueJSON);

cJSON *models_index_value_convertToJSON(models_index_value_t *models_index_value);

#endif /* _models_index_value_H_ */

