/*
 * models_operational_halt_status_model.h
 *
 * Represents the response DTO for operational halt status information
 */

#ifndef _models_operational_halt_status_model_H_
#define _models_operational_halt_status_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_operational_halt_status_model_t models_operational_halt_status_model_t;




typedef struct models_operational_halt_status_model_t {
    char *symbol; // string
    long *timestamp_nanos; //numeric
    char *timestamp; //date time
    int *operational_halt_status; //numeric
    char *operational_halt_status_code; // string
    char *operational_halt_status_text; // string
    int *is_operationally_halted; //boolean
    int *is_not_operationally_halted; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} models_operational_halt_status_model_t;

__attribute__((deprecated)) models_operational_halt_status_model_t *models_operational_halt_status_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *operational_halt_status,
    char *operational_halt_status_code,
    char *operational_halt_status_text,
    int *is_operationally_halted,
    int *is_not_operationally_halted
);

void models_operational_halt_status_model_free(models_operational_halt_status_model_t *models_operational_halt_status_model);

models_operational_halt_status_model_t *models_operational_halt_status_model_parseFromJSON(cJSON *models_operational_halt_status_modelJSON);

cJSON *models_operational_halt_status_model_convertToJSON(models_operational_halt_status_model_t *models_operational_halt_status_model);

#endif /* _models_operational_halt_status_model_H_ */

