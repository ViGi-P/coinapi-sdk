-module(openapi_models_security_event_model).

-include("openapi.hrl").

-export([openapi_models_security_event_model/0]).

-export([openapi_models_security_event_model/1]).

-export_type([openapi_models_security_event_model/0]).

-type openapi_models_security_event_model() ::
  [ {'symbol', binary() }
  | {'timestamp_nanos', integer() }
  | {'timestamp', datetime() }
  | {'security_event', integer() }
  | {'security_event_code', binary() }
  | {'security_event_text', binary() }
  | {'is_opening_process_complete', boolean() }
  | {'is_closing_process_complete', boolean() }
  ].


openapi_models_security_event_model() ->
    openapi_models_security_event_model([]).

openapi_models_security_event_model(Fields) ->
  Default = [ {'symbol', binary() }
            , {'timestamp_nanos', integer() }
            , {'timestamp', datetime() }
            , {'security_event', integer() }
            , {'security_event_code', binary() }
            , {'security_event_text', binary() }
            , {'is_opening_process_complete', boolean() }
            , {'is_closing_process_complete', boolean() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

