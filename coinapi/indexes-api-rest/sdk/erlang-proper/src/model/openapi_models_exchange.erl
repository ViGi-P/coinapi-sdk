-module(openapi_models_exchange).

-include("openapi.hrl").

-export([openapi_models_exchange/0]).

-export([openapi_models_exchange/1]).

-export_type([openapi_models_exchange/0]).

-type openapi_models_exchange() ::
  [ {'exchange_id', binary() }
  | {'website', binary() }
  | {'name', binary() }
  ].


openapi_models_exchange() ->
    openapi_models_exchange([]).

openapi_models_exchange(Fields) ->
  Default = [ {'exchange_id', binary() }
            , {'website', binary() }
            , {'name', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

