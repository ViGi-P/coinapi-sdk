/*
 * iex_system_event_system_event_model.h
 *
 * Represents the response DTO for system event information
 */

#ifndef _iex_system_event_system_event_model_H_
#define _iex_system_event_system_event_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct iex_system_event_system_event_model_t iex_system_event_system_event_model_t;




typedef struct iex_system_event_system_event_model_t {
    long *timestamp_nanos; //numeric
    char *timestamp; //date time
    int *system_event; //numeric
    char *system_event_code; // string
    char *system_event_text; // string
    int *is_system_event_start_of_messages; //boolean
    int *is_system_event_start_of_system_hours; //boolean
    int *is_system_event_start_of_regular_market_hours; //boolean
    int *is_system_event_end_of_regular_market_hours; //boolean
    int *is_system_event_end_of_system_hours; //boolean
    int *is_system_event_end_of_messages; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} iex_system_event_system_event_model_t;

__attribute__((deprecated)) iex_system_event_system_event_model_t *iex_system_event_system_event_model_create(
    long *timestamp_nanos,
    char *timestamp,
    int *system_event,
    char *system_event_code,
    char *system_event_text,
    int *is_system_event_start_of_messages,
    int *is_system_event_start_of_system_hours,
    int *is_system_event_start_of_regular_market_hours,
    int *is_system_event_end_of_regular_market_hours,
    int *is_system_event_end_of_system_hours,
    int *is_system_event_end_of_messages
);

void iex_system_event_system_event_model_free(iex_system_event_system_event_model_t *iex_system_event_system_event_model);

iex_system_event_system_event_model_t *iex_system_event_system_event_model_parseFromJSON(cJSON *iex_system_event_system_event_modelJSON);

cJSON *iex_system_event_system_event_model_convertToJSON(iex_system_event_system_event_model_t *iex_system_event_system_event_model);

#endif /* _iex_system_event_system_event_model_H_ */

