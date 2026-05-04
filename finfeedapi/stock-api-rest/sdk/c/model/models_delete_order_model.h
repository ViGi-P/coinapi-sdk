/*
 * models_delete_order_model.h
 *
 * Represents the response DTO for order delete information
 */

#ifndef _models_delete_order_model_H_
#define _models_delete_order_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_delete_order_model_t models_delete_order_model_t;




typedef struct models_delete_order_model_t {
    char *symbol; // string
    long *timestamp_nanos; //numeric
    char *timestamp; //date time
    long *order_id_reference; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} models_delete_order_model_t;

__attribute__((deprecated)) models_delete_order_model_t *models_delete_order_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    long *order_id_reference
);

void models_delete_order_model_free(models_delete_order_model_t *models_delete_order_model);

models_delete_order_model_t *models_delete_order_model_parseFromJSON(cJSON *models_delete_order_modelJSON);

cJSON *models_delete_order_model_convertToJSON(models_delete_order_model_t *models_delete_order_model);

#endif /* _models_delete_order_model_H_ */

