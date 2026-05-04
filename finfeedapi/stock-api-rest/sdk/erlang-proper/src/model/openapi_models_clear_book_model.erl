-module(openapi_models_clear_book_model).

-include("openapi.hrl").

-export([openapi_models_clear_book_model/0]).

-export([openapi_models_clear_book_model/1]).

-export_type([openapi_models_clear_book_model/0]).

-type openapi_models_clear_book_model() ::
  [ {'symbol', binary() }
  | {'timestamp_nanos', integer() }
  | {'timestamp', datetime() }
  ].


openapi_models_clear_book_model() ->
    openapi_models_clear_book_model([]).

openapi_models_clear_book_model(Fields) ->
  Default = [ {'symbol', binary() }
            , {'timestamp_nanos', integer() }
            , {'timestamp', datetime() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

