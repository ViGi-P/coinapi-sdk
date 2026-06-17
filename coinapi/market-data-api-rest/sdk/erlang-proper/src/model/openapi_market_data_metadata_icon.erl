-module(openapi_market_data_metadata_icon).

-include("openapi.hrl").

-export([openapi_market_data_metadata_icon/0]).

-export([openapi_market_data_metadata_icon/1]).

-export_type([openapi_market_data_metadata_icon/0]).

-type openapi_market_data_metadata_icon() ::
  [ {'exchange_id', binary() }
  | {'asset_id', binary() }
  | {'url', binary() }
  ].


openapi_market_data_metadata_icon() ->
    openapi_market_data_metadata_icon([]).

openapi_market_data_metadata_icon(Fields) ->
  Default = [ {'exchange_id', binary() }
            , {'asset_id', binary() }
            , {'url', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

