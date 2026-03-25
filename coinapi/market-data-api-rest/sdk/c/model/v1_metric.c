#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_metric.h"



static v1_metric_t *v1_metric_create_internal(
    char *metric_id,
    char *description
    ) {
    v1_metric_t *v1_metric_local_var = malloc(sizeof(v1_metric_t));
    if (!v1_metric_local_var) {
        return NULL;
    }
    memset(v1_metric_local_var, 0, sizeof(v1_metric_t));
    v1_metric_local_var->_library_owned = 1;
    v1_metric_local_var->metric_id = metric_id;
    v1_metric_local_var->description = description;
    return v1_metric_local_var;
}

__attribute__((deprecated)) v1_metric_t *v1_metric_create(
    char *metric_id,
    char *description
    ) {
    v1_metric_t *result = v1_metric_create_internal (
        metric_id,
        description
        );
    if (!result) {
    }
    return result;
}

void v1_metric_free(v1_metric_t *v1_metric) {
    if(NULL == v1_metric){
        return ;
    }
    if(v1_metric->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_metric_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_metric->metric_id) {
        free(v1_metric->metric_id);
        v1_metric->metric_id = NULL;
    }
    if (v1_metric->description) {
        free(v1_metric->description);
        v1_metric->description = NULL;
    }
    free(v1_metric);
}

cJSON *v1_metric_convertToJSON(v1_metric_t *v1_metric) {
    cJSON *item = cJSON_CreateObject();

    // v1_metric->metric_id
    if(v1_metric->metric_id) {
    if(cJSON_AddStringToObject(item, "metric_id", v1_metric->metric_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_metric->description
    if(v1_metric->description) {
    if(cJSON_AddStringToObject(item, "description", v1_metric->description) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v1_metric_t *v1_metric_parseFromJSON(cJSON *v1_metricJSON){

    v1_metric_t *v1_metric_local_var = NULL;

    char *metric_id_local_str = NULL;

    char *description_local_str = NULL;

    // v1_metric->metric_id
    cJSON *metric_id = cJSON_GetObjectItemCaseSensitive(v1_metricJSON, "metric_id");
    if (cJSON_IsNull(metric_id)) {
        metric_id = NULL;
    }
    if (metric_id) { 
    if(!cJSON_IsString(metric_id) && !cJSON_IsNull(metric_id))
    {
    goto end; //String
    }
    }

    // v1_metric->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(v1_metricJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    if (metric_id && !cJSON_IsNull(metric_id)) metric_id_local_str = strdup(metric_id->valuestring);
    if (description && !cJSON_IsNull(description)) description_local_str = strdup(description->valuestring);

    v1_metric_local_var = v1_metric_create_internal (
        metric_id_local_str,
        description_local_str
        );

    if (!v1_metric_local_var) {
        goto end;
    }

    return v1_metric_local_var;
end:
    if (metric_id_local_str) {
        free(metric_id_local_str);
        metric_id_local_str = NULL;
    }
    if (description_local_str) {
        free(description_local_str);
        description_local_str = NULL;
    }
    return NULL;

}
