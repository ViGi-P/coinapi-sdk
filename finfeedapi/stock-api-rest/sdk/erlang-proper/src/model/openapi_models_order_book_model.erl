-module(openapi_models_order_book_model).

-include("openapi.hrl").

-export([openapi_models_order_book_model/0]).

-export([openapi_models_order_book_model/1]).

-export_type([openapi_models_order_book_model/0]).

-type openapi_models_order_book_model() ::
  [ {'add_order', openapi_models_add_order_model:openapi_models_add_order_model() }
  | {'delete_order', openapi_models_delete_order_model:openapi_models_delete_order_model() }
  | {'modify_order', openapi_models_modify_order_model:openapi_models_modify_order_model() }
  | {'executed_order', openapi_models_executed_order_model:openapi_models_executed_order_model() }
  | {'clear_book', openapi_models_clear_book_model:openapi_models_clear_book_model() }
  ].


openapi_models_order_book_model() ->
    openapi_models_order_book_model([]).

openapi_models_order_book_model(Fields) ->
  Default = [ {'add_order', openapi_models_add_order_model:openapi_models_add_order_model() }
            , {'delete_order', openapi_models_delete_order_model:openapi_models_delete_order_model() }
            , {'modify_order', openapi_models_modify_order_model:openapi_models_modify_order_model() }
            , {'executed_order', openapi_models_executed_order_model:openapi_models_executed_order_model() }
            , {'clear_book', openapi_models_clear_book_model:openapi_models_clear_book_model() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

