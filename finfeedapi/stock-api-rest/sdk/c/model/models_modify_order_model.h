/*
 * models_modify_order_model.h
 *
 * Represents the response DTO for order modify information
 */

#ifndef _models_modify_order_model_H_
#define _models_modify_order_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_modify_order_model_t models_modify_order_model_t;




typedef struct models_modify_order_model_t {
    char *symbol; // string
    long *timestamp_nanos; //numeric
    char *timestamp; //date time
    long *order_id_reference; //numeric
    int *is_priority_reset; //boolean
    int *size; //numeric
    double *price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} models_modify_order_model_t;

__attribute__((deprecated)) models_modify_order_model_t *models_modify_order_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    long *order_id_reference,
    int *is_priority_reset,
    int *size,
    double *price
);

void models_modify_order_model_free(models_modify_order_model_t *models_modify_order_model);

models_modify_order_model_t *models_modify_order_model_parseFromJSON(cJSON *models_modify_order_modelJSON);

cJSON *models_modify_order_model_convertToJSON(models_modify_order_model_t *models_modify_order_model);

#endif /* _models_modify_order_model_H_ */

