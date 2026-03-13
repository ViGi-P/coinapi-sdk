-module(openapi_models_index_value).

-include("openapi.hrl").

-export([openapi_models_index_value/0]).

-export([openapi_models_index_value/1]).

-export_type([openapi_models_index_value/0]).

-type openapi_models_index_value() ::
  [ {'timestamp', datetime() }
  | {'value', float() }
  | {'composition', list(openapi_models_index_value_component:openapi_models_index_value_component()) }
  ].


openapi_models_index_value() ->
    openapi_models_index_value([]).

openapi_models_index_value(Fields) ->
  Default = [ {'timestamp', datetime() }
            , {'value', float() }
            , {'composition', list(openapi_models_index_value_component:openapi_models_index_value_component()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

