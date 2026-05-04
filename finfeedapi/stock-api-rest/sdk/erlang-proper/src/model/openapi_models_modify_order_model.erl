-module(openapi_models_modify_order_model).

-include("openapi.hrl").

-export([openapi_models_modify_order_model/0]).

-export([openapi_models_modify_order_model/1]).

-export_type([openapi_models_modify_order_model/0]).

-type openapi_models_modify_order_model() ::
  [ {'symbol', binary() }
  | {'timestamp_nanos', integer() }
  | {'timestamp', datetime() }
  | {'order_id_reference', integer() }
  | {'is_priority_reset', boolean() }
  | {'size', integer() }
  | {'price', float() }
  ].


openapi_models_modify_order_model() ->
    openapi_models_modify_order_model([]).

openapi_models_modify_order_model(Fields) ->
  Default = [ {'symbol', binary() }
            , {'timestamp_nanos', integer() }
            , {'timestamp', datetime() }
            , {'order_id_reference', integer() }
            , {'is_priority_reset', boolean() }
            , {'size', integer() }
            , {'price', float() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

