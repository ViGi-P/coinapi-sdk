/*
 * models_index_identifier.h
 *
 * Represents an index id
 */

#ifndef _models_index_identifier_H_
#define _models_index_identifier_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_index_identifier_t models_index_identifier_t;




typedef struct models_index_identifier_t {
    char *id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} models_index_identifier_t;

__attribute__((deprecated)) models_index_identifier_t *models_index_identifier_create(
    char *id
);

void models_index_identifier_free(models_index_identifier_t *models_index_identifier);

models_index_identifier_t *models_index_identifier_parseFromJSON(cJSON *models_index_identifierJSON);

cJSON *models_index_identifier_convertToJSON(models_index_identifier_t *models_index_identifier);

#endif /* _models_index_identifier_H_ */

