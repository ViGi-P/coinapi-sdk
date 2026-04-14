-module(openapi_statem).

-behaviour(proper_statem).

-include("openapi.hrl").
-include_lib("proper/include/proper_common.hrl").
-include_lib("stdlib/include/assert.hrl").

-compile(export_all).
-compile(nowarn_export_all).

-include("openapi_statem.hrl").

%%==============================================================================
%% The statem's property
%%==============================================================================

prop_main() ->
  setup(),
  ?FORALL( Cmds
         , proper_statem:commands(?MODULE)
         , begin
             cleanup(),
             { History
             , State
             , Result
             } = proper_statem:run_commands(?MODULE, Cmds),
             ?WHENFAIL(
                io:format("History: ~p\nState: ~p\nResult: ~p\nCmds: ~p\n",
                          [ History
                          , State
                          , Result
                          , proper_statem:command_names(Cmds)
                          ]),
                proper:aggregate( proper_statem:command_names(Cmds)
                                , Result =:= ok
                                )
               )
           end
         ).

%%==============================================================================
%% Setup
%%==============================================================================

setup() -> ok.

%%==============================================================================
%% Cleanup
%%==============================================================================

cleanup() -> ok.

%%==============================================================================
%% Initial State
%%==============================================================================

initial_state() -> #{}.

%%==============================================================================
%% internal_ratelimit_wsconcon_apikey_get
%%==============================================================================

internal_ratelimit_wsconcon_apikey_get() ->
  openapi_api:internal_ratelimit_wsconcon_apikey_get().

internal_ratelimit_wsconcon_apikey_get_args(_S) ->
  [].

%%==============================================================================
%% internal_ratelimit_wshello_ip_get
%%==============================================================================

internal_ratelimit_wshello_ip_get() ->
  openapi_api:internal_ratelimit_wshello_ip_get().

internal_ratelimit_wshello_ip_get_args(_S) ->
  [].

%%==============================================================================
%% internal_ratelimit_wsreq_ip_get
%%==============================================================================

internal_ratelimit_wsreq_ip_get() ->
  openapi_api:internal_ratelimit_wsreq_ip_get().

internal_ratelimit_wsreq_ip_get_args(_S) ->
  [].

