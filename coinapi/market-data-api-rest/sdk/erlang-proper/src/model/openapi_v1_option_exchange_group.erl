-module(openapi_v1_option_exchange_group).

-include("openapi.hrl").

-export([openapi_v1_option_exchange_group/0]).

-export([openapi_v1_option_exchange_group/1]).

-export_type([openapi_v1_option_exchange_group/0]).

-type openapi_v1_option_exchange_group() ::
  [ {'asset_id_base', binary() }
  | {'asset_id_quote', binary() }
  | {'underlying_price', float() }
  | {'time_expiration', datetime() }
  | {'strikes', list(openapi_v1_strike:openapi_v1_strike()) }
  ].


openapi_v1_option_exchange_group() ->
    openapi_v1_option_exchange_group([]).

openapi_v1_option_exchange_group(Fields) ->
  Default = [ {'asset_id_base', binary() }
            , {'asset_id_quote', binary() }
            , {'underlying_price', float() }
            , {'time_expiration', datetime() }
            , {'strikes', list(openapi_v1_strike:openapi_v1_strike()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

