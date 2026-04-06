#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/models_index_multi_asset_weight.h"


// Get all multi-asset weights
//
list_t*
MultiAssetWeightsAPI_v1IndexdefMultiassetGet(apiClient_t *apiClient);


// Get multi-asset weights for specific index
//
list_t*
MultiAssetWeightsAPI_v1IndexdefMultiassetIndexIdGet(apiClient_t *apiClient, char *index_id);


