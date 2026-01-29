#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/v1_order_book.h"
#include "../model/v1_order_book_base.h"
#include "../model/v1_order_book_depth.h"


// Get current order book
//
// Retrieves the current order book for the specified symbol.
//
v1_order_book_base_t*
OrderBookAPI_v1OrderbooksSymbolIdCurrentGet(apiClient_t *apiClient, char *symbol_id, int *limit_levels);


// Current depth of the order book
//
// Retrieves the current depth of the order book for the specified symbol.
//
v1_order_book_depth_t*
OrderBookAPI_v1OrderbooksSymbolIdDepthCurrentGet(apiClient_t *apiClient, char *symbol_id, int *limit_levels);


// Historical data
//
// Get historical order book snapshots for a specific symbol within time range, returned in time ascending order.              :::info The historical order book data via the REST API is currently limited by a number of updates and to the maximum number of 20 levels. :::              This endpoint supports hourly granularity for APITP data with automatic fallback to daily data for older records. Timestamps are normalized to hour boundaries, and data is fetched per hour with precise filtering to your exact time range.              :::tip For querying a full day of data, use the 'date' parameter. For specific time ranges (including cross-day or multi-hour queries), use 'time_start' and 'time_end'. :::
//
list_t*
OrderBookAPI_v1OrderbooksSymbolIdHistoryGet(apiClient_t *apiClient, char *symbol_id, char *date, char *time_start, char *time_end, int *limit, int *limit_levels);


