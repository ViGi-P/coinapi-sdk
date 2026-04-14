-module(openapi_api).

-export([ internal_ratelimit_wsconcon_apikey_get/0
        , internal_ratelimit_wshello_ip_get/0
        , internal_ratelimit_wsreq_ip_get/0
        ]).

-define(BASE_URL, "").

%% @doc 
%% 
-spec internal_ratelimit_wsconcon_apikey_get() ->
  openapi_utils:response().
internal_ratelimit_wsconcon_apikey_get() ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/internal/ratelimit/wsconcon/apikey"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc 
%% 
-spec internal_ratelimit_wshello_ip_get() ->
  openapi_utils:response().
internal_ratelimit_wshello_ip_get() ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/internal/ratelimit/wshello/ip"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

%% @doc 
%% 
-spec internal_ratelimit_wsreq_ip_get() ->
  openapi_utils:response().
internal_ratelimit_wsreq_ip_get() ->
  Method      = get,
  Host        = application:get_env(openapi, host, "http://localhost:8080"),
  Path        = ["/internal/ratelimit/wsreq/ip"],

  openapi_utils:request(Method, [Host, ?BASE_URL, Path]).

