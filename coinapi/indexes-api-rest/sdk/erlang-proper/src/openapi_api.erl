-module(openapi_api).

-export([ v1_indexdef_multiasset_get/0
        , v1_indexdef_multiasset_index_id_get/1
        , v1_indexes_get/0
        , v1_indexes_index_definition_id_current_snapshot_get/1
        , v1_indexes_index_definition_id_history_snapshot_get/1
        , v1_indexes_index_id_current_get/1
        , v1_indexes_index_id_history_get/1
        , v1_indexes_index_id_timeseries_get/4
        ]).

-define(BASE_URL, "").

%% @doc Get all multi-asset weights
%% 
-spec v1_indexdef_multiasset_get() ->
  openapi_utils:response().
v1_indexdef_multiasset_get() ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/indexdef/multiasset"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Get multi-asset weights for specific index
%% 
-spec v1_indexdef_multiasset_index_id_get(binary()) ->
  openapi_utils:response().
v1_indexdef_multiasset_index_id_get(IndexId) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/indexdef/multiasset/", IndexId, ""],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc List indexes
%% 
-spec v1_indexes_get() ->
  openapi_utils:response().
v1_indexes_get() ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/indexes"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Current Index Values for index definition
%% 
-spec v1_indexes_index_definition_id_current_snapshot_get(binary()) ->
  openapi_utils:response().
v1_indexes_index_definition_id_current_snapshot_get(IndexDefinitionId) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/indexes/", IndexDefinitionId, "/currentSnapshot"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Historical Index Values for index definition
%% 
-spec v1_indexes_index_definition_id_history_snapshot_get(binary()) ->
  openapi_utils:response().
v1_indexes_index_definition_id_history_snapshot_get(IndexDefinitionId) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/indexes/", IndexDefinitionId, "/historySnapshot"],
  QueryString = [<<"time=">>, Time, <<"&">>],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path, <<"?">>, QueryString]).

%% @doc Current Index Value
%% 
-spec v1_indexes_index_id_current_get(binary()) ->
  openapi_utils:response().
v1_indexes_index_id_current_get(IndexId) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/indexes/", IndexId, "/current"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc Historical Index Value w/Composition
%% 
-spec v1_indexes_index_id_history_get(binary()) ->
  openapi_utils:response().
v1_indexes_index_id_history_get(IndexId) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/indexes/", IndexId, "/history"],
  QueryString = [<<"time_start=">>, TimeStart, <<"&">>, <<"time_end=">>, TimeEnd, <<"&">>, <<"limit=">>, Limit, <<"&">>],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path, <<"?">>, QueryString]).

%% @doc Timeseries Index Value
%% 
-spec v1_indexes_index_id_timeseries_get(binary(), binary(), binary(), binary()) ->
  openapi_utils:response().
v1_indexes_index_id_timeseries_get(IndexId, PeriodId, TimeStart, TimeEnd) ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/v1/indexes/", IndexId, "/timeseries"],
  QueryString = [<<"period_id=">>, PeriodId, <<"&">>, <<"time_start=">>, TimeStart, <<"&">>, <<"time_end=">>, TimeEnd, <<"&">>, <<"limit=">>, Limit, <<"&">>],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path, <<"?">>, QueryString]).

