-module(openapi_models_exchange_timeseries_item).

-include("openapi.hrl").

-export([openapi_models_exchange_timeseries_item/0]).

-export([openapi_models_exchange_timeseries_item/1]).

-export_type([openapi_models_exchange_timeseries_item/0]).

-type openapi_models_exchange_timeseries_item() ::
  [ {'time_period_start', datetime() }
  | {'time_period_end', datetime() }
  | {'time_open', datetime() }
  | {'time_close', datetime() }
  | {'price_open', float() }
  | {'price_high', float() }
  | {'price_low', float() }
  | {'price_close', float() }
  | {'volume_traded', float() }
  | {'trades_count', integer() }
  | {'symbol_id_exchange', binary() }
  | {'symbol_id_coinapi', binary() }
  ].


openapi_models_exchange_timeseries_item() ->
    openapi_models_exchange_timeseries_item([]).

openapi_models_exchange_timeseries_item(Fields) ->
  Default = [ {'time_period_start', datetime() }
            , {'time_period_end', datetime() }
            , {'time_open', datetime() }
            , {'time_close', datetime() }
            , {'price_open', float() }
            , {'price_high', float() }
            , {'price_low', float() }
            , {'price_close', float() }
            , {'volume_traded', float() }
            , {'trades_count', integer() }
            , {'symbol_id_exchange', binary() }
            , {'symbol_id_coinapi', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

