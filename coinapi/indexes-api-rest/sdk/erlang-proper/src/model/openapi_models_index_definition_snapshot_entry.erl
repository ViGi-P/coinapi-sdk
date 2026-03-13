-module(openapi_models_index_definition_snapshot_entry).

-include("openapi.hrl").

-export([openapi_models_index_definition_snapshot_entry/0]).

-export([openapi_models_index_definition_snapshot_entry/1]).

-export_type([openapi_models_index_definition_snapshot_entry/0]).

-type openapi_models_index_definition_snapshot_entry() ::
  [ {'index_id', binary() }
  | {'timestamp', datetime() }
  | {'value', float() }
  ].


openapi_models_index_definition_snapshot_entry() ->
    openapi_models_index_definition_snapshot_entry([]).

openapi_models_index_definition_snapshot_entry(Fields) ->
  Default = [ {'index_id', binary() }
            , {'timestamp', datetime() }
            , {'value', float() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

