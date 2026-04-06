-module(openapi_multi_asset_weights_api).

-export([v1_indexdef_multiasset_get/1, v1_indexdef_multiasset_get/2,
         v1_indexdef_multiasset_index_id_get/2, v1_indexdef_multiasset_index_id_get/3]).

-define(BASE_URL, <<"">>).

%% @doc Get all multi-asset weights
%% 
-spec v1_indexdef_multiasset_get(ctx:ctx()) -> {ok, [openapi_models_index_multi_asset_weight:openapi_models_index_multi_asset_weight()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
v1_indexdef_multiasset_get(Ctx) ->
    v1_indexdef_multiasset_get(Ctx, #{}).

-spec v1_indexdef_multiasset_get(ctx:ctx(), maps:map()) -> {ok, [openapi_models_index_multi_asset_weight:openapi_models_index_multi_asset_weight()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
v1_indexdef_multiasset_get(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v1/indexdef/multiasset"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Get multi-asset weights for specific index
%% 
-spec v1_indexdef_multiasset_index_id_get(ctx:ctx(), binary()) -> {ok, [openapi_models_index_multi_asset_weight:openapi_models_index_multi_asset_weight()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
v1_indexdef_multiasset_index_id_get(Ctx, IndexId) ->
    v1_indexdef_multiasset_index_id_get(Ctx, IndexId, #{}).

-spec v1_indexdef_multiasset_index_id_get(ctx:ctx(), binary(), maps:map()) -> {ok, [openapi_models_index_multi_asset_weight:openapi_models_index_multi_asset_weight()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
v1_indexdef_multiasset_index_id_get(Ctx, IndexId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v1/indexdef/multiasset/", IndexId, ""],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


