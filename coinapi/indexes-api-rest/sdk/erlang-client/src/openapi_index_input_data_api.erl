-module(openapi_index_input_data_api).

-export([v1_indexdef_input_data_index_definition_id_all_get/2, v1_indexdef_input_data_index_definition_id_all_get/3,
         v1_indexdef_input_data_index_definition_id_get/2, v1_indexdef_input_data_index_definition_id_get/3]).

-define(BASE_URL, <<"">>).

%% @doc Returns all data inputs for a specific index definition
%% 
-spec v1_indexdef_input_data_index_definition_id_all_get(ctx:ctx(), binary()) -> {ok, [openapi_models_index_definition_input_data:openapi_models_index_definition_input_data()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
v1_indexdef_input_data_index_definition_id_all_get(Ctx, IndexDefinitionId) ->
    v1_indexdef_input_data_index_definition_id_all_get(Ctx, IndexDefinitionId, #{}).

-spec v1_indexdef_input_data_index_definition_id_all_get(ctx:ctx(), binary(), maps:map()) -> {ok, [openapi_models_index_definition_input_data:openapi_models_index_definition_input_data()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
v1_indexdef_input_data_index_definition_id_all_get(Ctx, IndexDefinitionId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v1/indexdef/input-data/", IndexDefinitionId, "/all"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Returns data inputs for certain index definition and time
%% 
-spec v1_indexdef_input_data_index_definition_id_get(ctx:ctx(), binary()) -> {ok, [openapi_models_index_definition_snapshot_entry:openapi_models_index_definition_snapshot_entry()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
v1_indexdef_input_data_index_definition_id_get(Ctx, IndexDefinitionId) ->
    v1_indexdef_input_data_index_definition_id_get(Ctx, IndexDefinitionId, #{}).

-spec v1_indexdef_input_data_index_definition_id_get(ctx:ctx(), binary(), maps:map()) -> {ok, [openapi_models_index_definition_snapshot_entry:openapi_models_index_definition_snapshot_entry()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
v1_indexdef_input_data_index_definition_id_get(Ctx, IndexDefinitionId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v1/indexdef/input-data/", IndexDefinitionId, ""],
    QS = lists:flatten([])++openapi_utils:optional_params(['time', 'enabled_only', 'pending_only', 'filter_asset_id', 'with_status_info'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


