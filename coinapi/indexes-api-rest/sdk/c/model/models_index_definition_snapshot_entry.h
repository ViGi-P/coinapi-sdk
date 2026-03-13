/*
 * models_index_definition_snapshot_entry.h
 *
 * 
 */

#ifndef _models_index_definition_snapshot_entry_H_
#define _models_index_definition_snapshot_entry_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_index_definition_snapshot_entry_t models_index_definition_snapshot_entry_t;




typedef struct models_index_definition_snapshot_entry_t {
    char *index_id; // string
    char *timestamp; //date time
    double value; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} models_index_definition_snapshot_entry_t;

__attribute__((deprecated)) models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry_create(
    char *index_id,
    char *timestamp,
    double value
);

void models_index_definition_snapshot_entry_free(models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry);

models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry_parseFromJSON(cJSON *models_index_definition_snapshot_entryJSON);

cJSON *models_index_definition_snapshot_entry_convertToJSON(models_index_definition_snapshot_entry_t *models_index_definition_snapshot_entry);

#endif /* _models_index_definition_snapshot_entry_H_ */

