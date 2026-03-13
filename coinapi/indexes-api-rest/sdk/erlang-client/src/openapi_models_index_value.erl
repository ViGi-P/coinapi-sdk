-module(openapi_models_index_value).

-export([encode/1]).

-export_type([openapi_models_index_value/0]).

-type openapi_models_index_value() ::
    #{ 'timestamp' => openapi_date_time:openapi_date_time(),
       'value' => float(),
       'composition' => list()
     }.

encode(#{ 'timestamp' := Timestamp,
          'value' := Value,
          'composition' := Composition
        }) ->
    #{ 'timestamp' => Timestamp,
       'value' => Value,
       'composition' => Composition
     }.
