-module(openapi_models_exchange).

-export([encode/1]).

-export_type([openapi_models_exchange/0]).

-type openapi_models_exchange() ::
    #{ 'exchange_id' => binary(),
       'website' => binary(),
       'name' => binary()
     }.

encode(#{ 'exchange_id' := ExchangeId,
          'website' := Website,
          'name' := Name
        }) ->
    #{ 'exchange_id' => ExchangeId,
       'website' => Website,
       'name' => Name
     }.
