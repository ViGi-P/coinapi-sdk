-module(openapi_market_data_metadata_chain).

-export([encode/1]).

-export_type([openapi_market_data_metadata_chain/0]).

-type openapi_market_data_metadata_chain() ::
    #{ 'chain_id' => binary(),
       'name' => binary()
     }.

encode(#{ 'chain_id' := ChainId,
          'name' := Name
        }) ->
    #{ 'chain_id' => ChainId,
       'name' => Name
     }.
