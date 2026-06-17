-module(openapi_market_data_metadata_icon).

-export([encode/1]).

-export_type([openapi_market_data_metadata_icon/0]).

-type openapi_market_data_metadata_icon() ::
    #{ 'exchange_id' => binary(),
       'asset_id' => binary(),
       'url' => binary()
     }.

encode(#{ 'exchange_id' := ExchangeId,
          'asset_id' := AssetId,
          'url' := Url
        }) ->
    #{ 'exchange_id' => ExchangeId,
       'asset_id' => AssetId,
       'url' => Url
     }.
