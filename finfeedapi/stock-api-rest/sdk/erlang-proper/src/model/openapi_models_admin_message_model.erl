-module(openapi_models_admin_message_model).

-include("openapi.hrl").

-export([openapi_models_admin_message_model/0]).

-export([openapi_models_admin_message_model/1]).

-export_type([openapi_models_admin_message_model/0]).

-type openapi_models_admin_message_model() ::
  [ {'trading_status', openapi_models_trading_status_model:openapi_models_trading_status_model() }
  | {'official_price', openapi_models_official_price_model:openapi_models_official_price_model() }
  | {'security_event', openapi_models_security_event_model:openapi_models_security_event_model() }
  | {'auction_information', openapi_models_auction_information_model:openapi_models_auction_information_model() }
  | {'short_sale_price_test', openapi_models_short_sale_price_test_status_model:openapi_models_short_sale_price_test_status_model() }
  | {'operational_halt_status', openapi_models_operational_halt_status_model:openapi_models_operational_halt_status_model() }
  | {'retail_liquidity_indicator', openapi_models_retail_liquidity_indicator_model:openapi_models_retail_liquidity_indicator_model() }
  | {'system_event', openapi_i_ex_system_event_system_event_model:openapi_i_ex_system_event_system_event_model() }
  | {'security_directory', openapi_models_security_directory_model:openapi_models_security_directory_model() }
  ].


openapi_models_admin_message_model() ->
    openapi_models_admin_message_model([]).

openapi_models_admin_message_model(Fields) ->
  Default = [ {'trading_status', openapi_models_trading_status_model:openapi_models_trading_status_model() }
            , {'official_price', openapi_models_official_price_model:openapi_models_official_price_model() }
            , {'security_event', openapi_models_security_event_model:openapi_models_security_event_model() }
            , {'auction_information', openapi_models_auction_information_model:openapi_models_auction_information_model() }
            , {'short_sale_price_test', openapi_models_short_sale_price_test_status_model:openapi_models_short_sale_price_test_status_model() }
            , {'operational_halt_status', openapi_models_operational_halt_status_model:openapi_models_operational_halt_status_model() }
            , {'retail_liquidity_indicator', openapi_models_retail_liquidity_indicator_model:openapi_models_retail_liquidity_indicator_model() }
            , {'system_event', openapi_i_ex_system_event_system_event_model:openapi_i_ex_system_event_system_event_model() }
            , {'security_directory', openapi_models_security_directory_model:openapi_models_security_directory_model() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

