/*
 * models_timeseries_period.h
 *
 * Represents a timeseries period used in exchange rate data.
 */

#ifndef _models_timeseries_period_H_
#define _models_timeseries_period_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_timeseries_period_t models_timeseries_period_t;




typedef struct models_timeseries_period_t {
    char *period_id; // string
    int *length_seconds; //numeric
    int *length_months; //numeric
    int *unit_count; //numeric
    char *unit_name; // string
    char *display_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} models_timeseries_period_t;

__attribute__((deprecated)) models_timeseries_period_t *models_timeseries_period_create(
    char *period_id,
    int *length_seconds,
    int *length_months,
    int *unit_count,
    char *unit_name,
    char *display_name
);

void models_timeseries_period_free(models_timeseries_period_t *models_timeseries_period);

models_timeseries_period_t *models_timeseries_period_parseFromJSON(cJSON *models_timeseries_periodJSON);

cJSON *models_timeseries_period_convertToJSON(models_timeseries_period_t *models_timeseries_period);

#endif /* _models_timeseries_period_H_ */

