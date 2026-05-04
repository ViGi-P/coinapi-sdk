/*
 * models_clear_book_model.h
 *
 * Represents the response DTO for clear book information
 */

#ifndef _models_clear_book_model_H_
#define _models_clear_book_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_clear_book_model_t models_clear_book_model_t;




typedef struct models_clear_book_model_t {
    char *symbol; // string
    long *timestamp_nanos; //numeric
    char *timestamp; //date time

    int _library_owned; // Is the library responsible for freeing this object?
} models_clear_book_model_t;

__attribute__((deprecated)) models_clear_book_model_t *models_clear_book_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp
);

void models_clear_book_model_free(models_clear_book_model_t *models_clear_book_model);

models_clear_book_model_t *models_clear_book_model_parseFromJSON(cJSON *models_clear_book_modelJSON);

cJSON *models_clear_book_model_convertToJSON(models_clear_book_model_t *models_clear_book_model);

#endif /* _models_clear_book_model_H_ */

