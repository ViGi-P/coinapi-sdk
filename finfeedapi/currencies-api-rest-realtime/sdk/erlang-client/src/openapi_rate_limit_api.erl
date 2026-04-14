-module(openapi_rate_limit_api).

-export([internal_ratelimit_wsconcon_apikey_get/1, internal_ratelimit_wsconcon_apikey_get/2,
         internal_ratelimit_wshello_ip_get/1, internal_ratelimit_wshello_ip_get/2,
         internal_ratelimit_wsreq_ip_get/1, internal_ratelimit_wsreq_ip_get/2]).

-define(BASE_URL, <<"">>).

%% @doc 
%% 
-spec internal_ratelimit_wsconcon_apikey_get(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
internal_ratelimit_wsconcon_apikey_get(Ctx) ->
    internal_ratelimit_wsconcon_apikey_get(Ctx, #{}).

-spec internal_ratelimit_wsconcon_apikey_get(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
internal_ratelimit_wsconcon_apikey_get(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/internal/ratelimit/wsconcon/apikey"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc 
%% 
-spec internal_ratelimit_wshello_ip_get(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
internal_ratelimit_wshello_ip_get(Ctx) ->
    internal_ratelimit_wshello_ip_get(Ctx, #{}).

-spec internal_ratelimit_wshello_ip_get(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
internal_ratelimit_wshello_ip_get(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/internal/ratelimit/wshello/ip"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).

%% @doc 
%% 
-spec internal_ratelimit_wsreq_ip_get(ctx:ctx()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
internal_ratelimit_wsreq_ip_get(Ctx) ->
    internal_ratelimit_wsreq_ip_get(Ctx, #{}).

-spec internal_ratelimit_wsreq_ip_get(ctx:ctx(), maps:map()) -> {ok, [], openapi_utils:response_info()} | {ok, hackney:client_ref()} | {error, term(), openapi_utils:response_info()}.
internal_ratelimit_wsreq_ip_get(Ctx, Optional) ->
    _OptionalParams = maps:get(params, Optional, #{}),
    Cfg = maps:get(cfg, Optional, application:get_env(openapi_api, config, #{})),

    Method = get,
    Path = [?BASE_URL, "/internal/ratelimit/wsreq/ip"],
    QS = [],
    Headers = [],
    Body1 = [],
    ContentTypeHeader = openapi_utils:select_header_content_type([]),
    Opts = maps:get(hackney_opts, Optional, []),

    openapi_utils:request(Ctx, Method, Path, QS, ContentTypeHeader++Headers, Body1, Opts, Cfg).


