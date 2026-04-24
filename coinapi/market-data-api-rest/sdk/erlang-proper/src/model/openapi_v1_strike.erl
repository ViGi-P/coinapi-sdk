-module(openapi_v1_strike).

-include("openapi.hrl").

-export([openapi_v1_strike/0]).

-export([openapi_v1_strike/1]).

-export_type([openapi_v1_strike/0]).

-type openapi_v1_strike() ::
  [ {'strike_price', float() }
  | {'call', openapi_v1_quote_trade:openapi_v1_quote_trade() }
  | {'put', openapi_v1_quote_trade:openapi_v1_quote_trade() }
  ].


openapi_v1_strike() ->
    openapi_v1_strike([]).

openapi_v1_strike(Fields) ->
  Default = [ {'strike_price', float() }
            , {'call', openapi_v1_quote_trade:openapi_v1_quote_trade() }
            , {'put', openapi_v1_quote_trade:openapi_v1_quote_trade() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

