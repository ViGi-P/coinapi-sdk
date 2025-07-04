# openapi::AdminSystemEventModel

Represents the response DTO for system event information

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**timestamp_nanos** | **integer** | Original timestamp in nanoseconds since epoch | [optional] 
**timestamp** | **character** | Time when the system event was recorded as DateTime | [optional] 
**system_event** | **integer** | System event as byte value | [optional] 
**system_event_code** | **character** | System event as string | [optional] 
**system_event_text** | **character** | Human-readable description of the system event | [optional] 
**is_system_event_start_of_messages** | **character** | Indicates if the system event is &#39;Start of Messages&#39; (O). Outside of heartbeat messages on the lower level protocol,  the start of day message is the first message sent in any trading session. | [optional] 
**is_system_event_start_of_system_hours** | **character** | Indicates if the system event is &#39;Start of System Hours&#39; (S). This message indicates that IEX is open and ready to start accepting orders. | [optional] 
**is_system_event_start_of_regular_market_hours** | **character** | Indicates if the system event is &#39;Start of Regular Market Hours&#39; (R). This message indicates that DAY and GTX orders, as well as market orders and pegged orders,  are available for execution on IEX. | [optional] 
**is_system_event_end_of_regular_market_hours** | **character** | Indicates if the system event is &#39;End of Regular Market Hours&#39; (M). This message indicates that DAY orders, market orders, and pegged orders  are no longer accepted by IEX. | [optional] 
**is_system_event_end_of_system_hours** | **character** | Indicates if the system event is &#39;End of System Hours&#39; (E). This message indicates that IEX is now closed and will not accept  any new orders during this trading session. It is still possible  to receive messages after the end of day. | [optional] 
**is_system_event_end_of_messages** | **character** | Indicates if the system event is &#39;End of Messages&#39; (C). This is always the last message sent in any trading session. | [optional] 


