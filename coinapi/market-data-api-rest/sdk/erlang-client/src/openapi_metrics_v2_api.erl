-module(openapi_metrics_v2_api).

-export([marketdata_list_metrics_v2_asset_history/3, marketdata_list_metrics_v2_asset_history/4,
         marketdata_list_metrics_v2_asset_listing/2, marketdata_list_metrics_v2_asset_listing/3,
         marketdata_list_metrics_v2_chain_history/3, marketdata_list_metrics_v2_chain_history/4,
         marketdata_list_metrics_v2_chain_listing/2, marketdata_list_metrics_v2_chain_listing/3,
         marketdata_list_metrics_v2_exchange_history/3, marketdata_list_metrics_v2_exchange_history/4,
         marketdata_list_metrics_v2_exchange_listing/2, marketdata_list_metrics_v2_exchange_listing/3,
         marketdata_list_metrics_v2_listing/1, marketdata_list_metrics_v2_listing/2]).

-define(BASE_URL, <<"">>).

%% @doc Historical metrics for the asset
%% Get asset metrics history.
-spec marketdata_list_metrics_v2_asset_history(ctx:ctx(), binary(), binary()) -> {ok, [maps:map()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_asset_history(Ctx, MetricId, AssetId) ->
    marketdata_list_metrics_v2_asset_history(Ctx, MetricId, AssetId, #{}).

-spec marketdata_list_metrics_v2_asset_history(ctx:ctx(), binary(), binary(), maps:map()) -> {ok, [maps:map()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_asset_history(Ctx, MetricId, AssetId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v2/metrics/asset/history"],
    QS = lists:flatten([{<<"metric_id">>, MetricId}, {<<"asset_id">>, AssetId}])++openapi_utils:optional_params(['time_start', 'time_end', 'time_format', 'period_id', 'limit'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Listing of metrics available for specific asset
%% Get all metrics that are actually available for the specified asset.
-spec marketdata_list_metrics_v2_asset_listing(ctx:ctx(), binary()) -> {ok, [openapi_v1_metric_info:openapi_v1_metric_info()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_asset_listing(Ctx, AssetId) ->
    marketdata_list_metrics_v2_asset_listing(Ctx, AssetId, #{}).

-spec marketdata_list_metrics_v2_asset_listing(ctx:ctx(), binary(), maps:map()) -> {ok, [openapi_v1_metric_info:openapi_v1_metric_info()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_asset_listing(Ctx, AssetId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v2/metrics/asset/listing"],
    QS = lists:flatten([{<<"asset_id">>, AssetId}])++openapi_utils:optional_params([], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Historical metrics for the chain
%% Get chain metrics history.
-spec marketdata_list_metrics_v2_chain_history(ctx:ctx(), binary(), binary()) -> {ok, [maps:map()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_chain_history(Ctx, MetricId, ChainId) ->
    marketdata_list_metrics_v2_chain_history(Ctx, MetricId, ChainId, #{}).

-spec marketdata_list_metrics_v2_chain_history(ctx:ctx(), binary(), binary(), maps:map()) -> {ok, [maps:map()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_chain_history(Ctx, MetricId, ChainId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v2/metrics/chain/history"],
    QS = lists:flatten([{<<"metric_id">>, MetricId}, {<<"chain_id">>, ChainId}])++openapi_utils:optional_params(['time_start', 'time_end', 'time_format', 'period_id', 'limit'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Listing of metrics available for specific chain
%% Get all metrics that are actually available for the specified blockchain chain.
-spec marketdata_list_metrics_v2_chain_listing(ctx:ctx(), binary()) -> {ok, [openapi_v1_metric_info:openapi_v1_metric_info()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_chain_listing(Ctx, ChainId) ->
    marketdata_list_metrics_v2_chain_listing(Ctx, ChainId, #{}).

-spec marketdata_list_metrics_v2_chain_listing(ctx:ctx(), binary(), maps:map()) -> {ok, [openapi_v1_metric_info:openapi_v1_metric_info()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_chain_listing(Ctx, ChainId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v2/metrics/chain/listing"],
    QS = lists:flatten([{<<"chain_id">>, ChainId}])++openapi_utils:optional_params([], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Historical metrics for the exchange
%% Get exchange metrics history.
-spec marketdata_list_metrics_v2_exchange_history(ctx:ctx(), binary(), binary()) -> {ok, [maps:map()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_exchange_history(Ctx, MetricId, ExchangeId) ->
    marketdata_list_metrics_v2_exchange_history(Ctx, MetricId, ExchangeId, #{}).

-spec marketdata_list_metrics_v2_exchange_history(ctx:ctx(), binary(), binary(), maps:map()) -> {ok, [maps:map()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_exchange_history(Ctx, MetricId, ExchangeId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v2/metrics/exchange/history"],
    QS = lists:flatten([{<<"metric_id">>, MetricId}, {<<"exchange_id">>, ExchangeId}])++openapi_utils:optional_params(['time_start', 'time_end', 'time_format', 'period_id', 'limit'], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Listing of metrics available for specific exchange
%% Get all metrics that are actually available for the specified exchange.
-spec marketdata_list_metrics_v2_exchange_listing(ctx:ctx(), binary()) -> {ok, [openapi_v1_metric_info:openapi_v1_metric_info()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_exchange_listing(Ctx, ExchangeId) ->
    marketdata_list_metrics_v2_exchange_listing(Ctx, ExchangeId, #{}).

-spec marketdata_list_metrics_v2_exchange_listing(ctx:ctx(), binary(), maps:map()) -> {ok, [openapi_v1_metric_info:openapi_v1_metric_info()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_exchange_listing(Ctx, ExchangeId, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v2/metrics/exchange/listing"],
    QS = lists:flatten([{<<"exchange_id">>, ExchangeId}])++openapi_utils:optional_params([], _OptionalParams),
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc Listing of all supported metrics
%% Get all metrics available in the system.
-spec marketdata_list_metrics_v2_listing(ctx:ctx()) -> {ok, [openapi_v1_metric_info:openapi_v1_metric_info()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_listing(Ctx) ->
    marketdata_list_metrics_v2_listing(Ctx, #{}).

-spec marketdata_list_metrics_v2_listing(ctx:ctx(), maps:map()) -> {ok, [openapi_v1_metric_info:openapi_v1_metric_info()], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
marketdata_list_metrics_v2_listing(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/v2/metrics/listing"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


