-module(openapi_models_index_identifier).

-export([encode/1]).

-export_type([openapi_models_index_identifier/0]).

-type openapi_models_index_identifier() ::
    #{ 'id' => binary()
     }.

encode(#{ 'id' := Id
        }) ->
    #{ 'id' => Id
     }.
