#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/models_index_definition_input_data.h"
#include "../model/models_index_definition_snapshot_entry.h"


// Returns all data inputs for a specific index definition
//
list_t*
IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdAllGet(apiClient_t *apiClient, char *index_definition_id);


// Returns data inputs for certain index definition and time
//
list_t*
IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdGet(apiClient_t *apiClient, char *index_definition_id, char time, int *enabled_only, int *pending_only, char *filter_asset_id, int *with_status_info);


