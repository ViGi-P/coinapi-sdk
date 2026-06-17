-module(openapi_market_data_metadata_exchange).

-include("openapi.hrl").

-export([openapi_market_data_metadata_exchange/0]).

-export([openapi_market_data_metadata_exchange/1]).

-export_type([openapi_market_data_metadata_exchange/0]).

-type openapi_market_data_metadata_exchange() ::
  [ {'exchange_id', binary() }
  | {'website', binary() }
  | {'name', binary() }
  | {'data_start', binary() }
  | {'data_end', binary() }
  | {'data_quote_start', datetime() }
  | {'data_quote_end', datetime() }
  | {'data_orderbook_start', datetime() }
  | {'data_orderbook_end', datetime() }
  | {'data_trade_start', datetime() }
  | {'data_trade_end', datetime() }
  | {'data_trade_count', integer() }
  | {'data_symbols_count', integer() }
  | {'volume_1hrs_usd', float() }
  | {'volume_1day_usd', float() }
  | {'volume_1mth_usd', float() }
  | {'metric_id', list(binary()) }
  | {'icons', list(openapi_market_data_metadata_icon:openapi_market_data_metadata_icon()) }
  | {'rank', float() }
  | {'integration_status', binary() }
  ].


openapi_market_data_metadata_exchange() ->
    openapi_market_data_metadata_exchange([]).

openapi_market_data_metadata_exchange(Fields) ->
  Default = [ {'exchange_id', binary() }
            , {'website', binary() }
            , {'name', binary() }
            , {'data_start', binary() }
            , {'data_end', binary() }
            , {'data_quote_start', datetime() }
            , {'data_quote_end', datetime() }
            , {'data_orderbook_start', datetime() }
            , {'data_orderbook_end', datetime() }
            , {'data_trade_start', datetime() }
            , {'data_trade_end', datetime() }
            , {'data_trade_count', integer() }
            , {'data_symbols_count', integer() }
            , {'volume_1hrs_usd', float() }
            , {'volume_1day_usd', float() }
            , {'volume_1mth_usd', float() }
            , {'metric_id', list(binary()) }
            , {'icons', list(openapi_market_data_metadata_icon:openapi_market_data_metadata_icon()) }
            , {'rank', float() }
            , {'integration_status', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

