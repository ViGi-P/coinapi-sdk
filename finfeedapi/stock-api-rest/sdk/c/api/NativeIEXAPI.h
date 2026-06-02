#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/iex_price_level_update_price_level_update_model.h"
#include "../model/iex_quote_update_quote_update_model.h"
#include "../model/iex_system_event_system_event_model.h"
#include "../model/iex_trade_trade_model.h"
#include "../model/models_admin_message_model.h"
#include "../model/models_order_book_model.h"


// Get Admin Messages
//
// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
//
list_t*
NativeIEXAPI_v1NativeIexAdminMessagesSymbolGet(apiClient_t *apiClient, char *symbol, char date, int *limit);


// Get System Events
//
// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
//
list_t*
NativeIEXAPI_v1NativeIexAdminSystemEventGet(apiClient_t *apiClient, char date, int *limit);


// Get Level-1 Quotes
//
// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
//
list_t*
NativeIEXAPI_v1NativeIexLevel1QuoteSymbolGet(apiClient_t *apiClient, char *symbol, char date, int *limit);


// Get Level-2 Price Level Book
//
// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
//
list_t*
NativeIEXAPI_v1NativeIexLevel2PriceLevelUpdateSymbolGet(apiClient_t *apiClient, char *symbol, char date, int *limit);


// Get Level-3 Order Book
//
// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
//
list_t*
NativeIEXAPI_v1NativeIexLevel3OrderBookSymbolGet(apiClient_t *apiClient, char *symbol, char date, int *limit);


// Get Trades
//
// Streaming endpoint. Use `limit` to cap the number of trade records returned (default 100, max 10000).
//
list_t*
NativeIEXAPI_v1NativeIexTradeSymbolGet(apiClient_t *apiClient, char *symbol, char date, int *limit);


