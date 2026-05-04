/*
 * models_security_directory_model.h
 *
 * Represents the response DTO for security directory information
 */

#ifndef _models_security_directory_model_H_
#define _models_security_directory_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_security_directory_model_t models_security_directory_model_t;




typedef struct models_security_directory_model_t {
    char *symbol; // string
    long *timestamp_nanos; //numeric
    char *timestamp; //date time
    int *flags; //numeric
    int *round_lot_size; //numeric
    double *adjusted_poc_price; //numeric
    int *luld_tier; //numeric
    char *luld_tier_code; // string
    char *luld_tier_text; // string
    int *is_luld_tier_not_applicable; //boolean
    int *is_luld_tier1; //boolean
    int *is_luld_tier2; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} models_security_directory_model_t;

__attribute__((deprecated)) models_security_directory_model_t *models_security_directory_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *flags,
    int *round_lot_size,
    double *adjusted_poc_price,
    int *luld_tier,
    char *luld_tier_code,
    char *luld_tier_text,
    int *is_luld_tier_not_applicable,
    int *is_luld_tier1,
    int *is_luld_tier2
);

void models_security_directory_model_free(models_security_directory_model_t *models_security_directory_model);

models_security_directory_model_t *models_security_directory_model_parseFromJSON(cJSON *models_security_directory_modelJSON);

cJSON *models_security_directory_model_convertToJSON(models_security_directory_model_t *models_security_directory_model);

#endif /* _models_security_directory_model_H_ */

