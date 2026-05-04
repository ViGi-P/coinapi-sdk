-module(openapi_iex_quote_update_quote_update_model).

-include("openapi.hrl").

-export([openapi_iex_quote_update_quote_update_model/0]).

-export([openapi_iex_quote_update_quote_update_model/1]).

-export_type([openapi_iex_quote_update_quote_update_model/0]).

-type openapi_iex_quote_update_quote_update_model() ::
  [ {'symbol', binary() }
  | {'timestamp_nanos', integer() }
  | {'timestamp', datetime() }
  | {'is_symbol_available', boolean() }
  | {'is_pre_post_market_session', boolean() }
  | {'ask_size', integer() }
  | {'ask_price', float() }
  | {'bid_price', float() }
  | {'bid_size', integer() }
  ].


openapi_iex_quote_update_quote_update_model() ->
    openapi_iex_quote_update_quote_update_model([]).

openapi_iex_quote_update_quote_update_model(Fields) ->
  Default = [ {'symbol', binary() }
            , {'timestamp_nanos', integer() }
            , {'timestamp', datetime() }
            , {'is_symbol_available', boolean() }
            , {'is_pre_post_market_session', boolean() }
            , {'ask_size', integer() }
            , {'ask_price', float() }
            , {'bid_price', float() }
            , {'bid_size', integer() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

