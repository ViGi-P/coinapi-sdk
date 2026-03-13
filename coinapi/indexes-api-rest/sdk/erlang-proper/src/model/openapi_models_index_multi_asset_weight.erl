-module(openapi_models_index_multi_asset_weight).

-include("openapi.hrl").

-export([openapi_models_index_multi_asset_weight/0]).

-export([openapi_models_index_multi_asset_weight/1]).

-export_type([openapi_models_index_multi_asset_weight/0]).

-type openapi_models_index_multi_asset_weight() ::
  [ {'indexId', binary() }
  | {'assetId', binary() }
  | {'weight', float() }
  ].


openapi_models_index_multi_asset_weight() ->
    openapi_models_index_multi_asset_weight([]).

openapi_models_index_multi_asset_weight(Fields) ->
  Default = [ {'indexId', binary() }
            , {'assetId', binary() }
            , {'weight', float() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

