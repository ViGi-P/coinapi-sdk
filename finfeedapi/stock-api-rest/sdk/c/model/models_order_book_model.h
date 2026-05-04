/*
 * models_order_book_model.h
 *
 * Represents the response DTO for Level-3 order book information
 */

#ifndef _models_order_book_model_H_
#define _models_order_book_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_order_book_model_t models_order_book_model_t;

#include "models_add_order_model.h"
#include "models_clear_book_model.h"
#include "models_delete_order_model.h"
#include "models_executed_order_model.h"
#include "models_modify_order_model.h"



typedef struct models_order_book_model_t {
    struct models_add_order_model_t *add_order; //model
    struct models_delete_order_model_t *delete_order; //model
    struct models_modify_order_model_t *modify_order; //model
    struct models_executed_order_model_t *executed_order; //model
    struct models_clear_book_model_t *clear_book; //model

    int _library_owned; // Is the library responsible for freeing this object?
} models_order_book_model_t;

__attribute__((deprecated)) models_order_book_model_t *models_order_book_model_create(
    models_add_order_model_t *add_order,
    models_delete_order_model_t *delete_order,
    models_modify_order_model_t *modify_order,
    models_executed_order_model_t *executed_order,
    models_clear_book_model_t *clear_book
);

void models_order_book_model_free(models_order_book_model_t *models_order_book_model);

models_order_book_model_t *models_order_book_model_parseFromJSON(cJSON *models_order_book_modelJSON);

cJSON *models_order_book_model_convertToJSON(models_order_book_model_t *models_order_book_model);

#endif /* _models_order_book_model_H_ */

