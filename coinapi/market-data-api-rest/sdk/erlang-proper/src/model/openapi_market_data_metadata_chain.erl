-module(openapi_market_data_metadata_chain).

-include("openapi.hrl").

-export([openapi_market_data_metadata_chain/0]).

-export([openapi_market_data_metadata_chain/1]).

-export_type([openapi_market_data_metadata_chain/0]).

-type openapi_market_data_metadata_chain() ::
  [ {'chain_id', binary() }
  | {'name', binary() }
  ].


openapi_market_data_metadata_chain() ->
    openapi_market_data_metadata_chain([]).

openapi_market_data_metadata_chain(Fields) ->
  Default = [ {'chain_id', binary() }
            , {'name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

