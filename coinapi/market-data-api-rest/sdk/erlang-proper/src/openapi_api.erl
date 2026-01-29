-module(openapi_api).

-export([ v1_trades_latest_get/0
        , v1_trades_symbol_id_history_get/1
        , v1_trades_symbol_id_latest_get/1
        ]).

-define(BASE_URL, "").

%% @doc Latest data
%% Get latest trades executed up to 1 minute ago. Latest data is always returned in time descending order.
-spec v1_trades_latest_get() ->
  openapi_utils:response().
v1_trades_latest_get() ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/trades/latest"],
  QueryString = [<<"filter_symbol_id=">>, FilterSymbolId, <<"&">>, <<"include_id=">>, IncludeId, <<"&">>, <<"limit=">>, Limit, <<"&">>],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path, <<"?">>, QueryString]).

%% @doc Historical data
%% Get history transactions from specific symbol, returned in time ascending order.              This endpoint supports hourly granularity for APITP data with automatic fallback to daily data for older records. Timestamps are normalized to hour boundaries, and data is fetched per hour with precise filtering to your exact time range.              :::tip For querying a full day of data, use the 'date' parameter. For specific time ranges (including cross-day or multi-hour queries), use 'time_start' and 'time_end'. :::
-spec v1_trades_symbol_id_history_get(binary()) ->
  openapi_utils:response().
v1_trades_symbol_id_history_get(SymbolId) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/trades/", SymbolId, "/history"],
  QueryString = [<<"date=">>, Date, <<"&">>, <<"time_start=">>, TimeStart, <<"&">>, <<"time_end=">>, TimeEnd, <<"&">>, <<"limit=">>, Limit, <<"&">>, <<"include_id=">>, IncludeId, <<"&">>],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path, <<"?">>, QueryString]).

%% @doc Latest data by symbol_id
%% Get latest trades executed up to 1 minute ago. Latest data is always returned in time descending order.
-spec v1_trades_symbol_id_latest_get(binary()) ->
  openapi_utils:response().
v1_trades_symbol_id_latest_get(SymbolId) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/trades/", SymbolId, "/latest"],
  QueryString = [<<"limit=">>, Limit, <<"&">>, <<"include_id=">>, IncludeId, <<"&">>],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path, <<"?">>, QueryString]).

