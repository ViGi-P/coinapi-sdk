/**
 * FinFeedAPI Stock REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import * as models from './models';

/**
 * Represents the response DTO for system event information
 */
export interface AdminSystemEventModel {
    /**
     * Original timestamp in nanoseconds since epoch
     */
    timestamp_nanos?: number;

    /**
     * Time when the system event was recorded as DateTime
     */
    timestamp?: string;

    /**
     * System event as byte value
     */
    system_event?: number;

    /**
     * System event as string
     */
    system_event_code?: string;

    /**
     * Human-readable description of the system event
     */
    system_event_text?: string;

    /**
     * Indicates if the system event is \'Start of Messages\' (O). Outside of heartbeat messages on the lower level protocol,  the start of day message is the first message sent in any trading session.
     */
    is_system_event_start_of_messages?: boolean;

    /**
     * Indicates if the system event is \'Start of System Hours\' (S). This message indicates that IEX is open and ready to start accepting orders.
     */
    is_system_event_start_of_system_hours?: boolean;

    /**
     * Indicates if the system event is \'Start of Regular Market Hours\' (R). This message indicates that DAY and GTX orders, as well as market orders and pegged orders,  are available for execution on IEX.
     */
    is_system_event_start_of_regular_market_hours?: boolean;

    /**
     * Indicates if the system event is \'End of Regular Market Hours\' (M). This message indicates that DAY orders, market orders, and pegged orders  are no longer accepted by IEX.
     */
    is_system_event_end_of_regular_market_hours?: boolean;

    /**
     * Indicates if the system event is \'End of System Hours\' (E). This message indicates that IEX is now closed and will not accept  any new orders during this trading session. It is still possible  to receive messages after the end of day.
     */
    is_system_event_end_of_system_hours?: boolean;

    /**
     * Indicates if the system event is \'End of Messages\' (C). This is always the last message sent in any trading session.
     */
    is_system_event_end_of_messages?: boolean;

}
