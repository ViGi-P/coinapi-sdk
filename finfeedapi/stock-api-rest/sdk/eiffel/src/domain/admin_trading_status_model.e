note
 description:"[
		FinFeedAPI Stock REST API
 		No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
  		The version of the OpenAPI document: v1
 	    Contact: support@apibricks.io

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class ADMIN_TRADING_STATUS_MODEL




feature --Access

    symbol: detachable STRING_32
      -- The stock symbol
    timestamp_nanos: INTEGER_64
      -- Original timestamp in nanoseconds since epoch
    timestamp: detachable DATE_TIME
      -- Time when the trading status was recorded as DateTime
    is_trading_live: BOOLEAN
      -- Gets whether the security is currently trading on IEX
    is_trading_halted: BOOLEAN
      -- Gets whether the security is halted across all US equity markets
    is_trading_in_order_acceptance_period: BOOLEAN
      -- Gets whether the security is in Order Acceptance Period on IEX
    is_trading_paused: BOOLEAN
      -- Gets whether the security is paused and in Order Acceptance Period on IEX
    is_reason_halt_news_pending: BOOLEAN
      -- Gets whether the halt reason is News Pending
    is_reason_ipo_not_yet_trading: BOOLEAN
      -- Gets whether the halt reason is IPO Not Yet Trading
    is_reason_ipo_deferred: BOOLEAN
      -- Gets whether the halt reason is IPO Deferred
    is_reason_halt_news_dissemination: BOOLEAN
      -- Gets whether the order acceptance period reason is Halt News Dissemination
    is_reason_ipo_order_acceptance_period: BOOLEAN
      -- Gets whether the order acceptance period reason is IPO Order Acceptance Period
    is_reason_ipo_pre_launch_period: BOOLEAN
      -- Gets whether the order acceptance period reason is IPO Pre-Launch Period
    is_reason_market_wide_circuit_breaker_level1: BOOLEAN
      -- Gets whether the order acceptance period reason is Market-Wide Circuit Breaker Level 1 – Breached
    is_reason_market_wide_circuit_breaker_level2: BOOLEAN
      -- Gets whether the order acceptance period reason is Market-Wide Circuit Breaker Level 2 – Breached
    is_reason_market_wide_circuit_breaker_level3: BOOLEAN
      -- Gets whether the halt reason is Market-Wide Circuit Breaker Level 3 – Breached
    is_reason_not_applicable: BOOLEAN
      -- Gets whether the reason is Not Applicable
    is_reason_not_available: BOOLEAN
      -- Gets whether the halt reason is Not Available

feature -- Change Element

    set_symbol (a_name: like symbol)
        -- Set 'symbol' with 'a_name'.
      do
        symbol := a_name
      ensure
        symbol_set: symbol = a_name
      end

    set_timestamp_nanos (a_name: like timestamp_nanos)
        -- Set 'timestamp_nanos' with 'a_name'.
      do
        timestamp_nanos := a_name
      ensure
        timestamp_nanos_set: timestamp_nanos = a_name
      end

    set_timestamp (a_name: like timestamp)
        -- Set 'timestamp' with 'a_name'.
      do
        timestamp := a_name
      ensure
        timestamp_set: timestamp = a_name
      end

    set_is_trading_live (a_name: like is_trading_live)
        -- Set 'is_trading_live' with 'a_name'.
      do
        is_trading_live := a_name
      ensure
        is_trading_live_set: is_trading_live = a_name
      end

    set_is_trading_halted (a_name: like is_trading_halted)
        -- Set 'is_trading_halted' with 'a_name'.
      do
        is_trading_halted := a_name
      ensure
        is_trading_halted_set: is_trading_halted = a_name
      end

    set_is_trading_in_order_acceptance_period (a_name: like is_trading_in_order_acceptance_period)
        -- Set 'is_trading_in_order_acceptance_period' with 'a_name'.
      do
        is_trading_in_order_acceptance_period := a_name
      ensure
        is_trading_in_order_acceptance_period_set: is_trading_in_order_acceptance_period = a_name
      end

    set_is_trading_paused (a_name: like is_trading_paused)
        -- Set 'is_trading_paused' with 'a_name'.
      do
        is_trading_paused := a_name
      ensure
        is_trading_paused_set: is_trading_paused = a_name
      end

    set_is_reason_halt_news_pending (a_name: like is_reason_halt_news_pending)
        -- Set 'is_reason_halt_news_pending' with 'a_name'.
      do
        is_reason_halt_news_pending := a_name
      ensure
        is_reason_halt_news_pending_set: is_reason_halt_news_pending = a_name
      end

    set_is_reason_ipo_not_yet_trading (a_name: like is_reason_ipo_not_yet_trading)
        -- Set 'is_reason_ipo_not_yet_trading' with 'a_name'.
      do
        is_reason_ipo_not_yet_trading := a_name
      ensure
        is_reason_ipo_not_yet_trading_set: is_reason_ipo_not_yet_trading = a_name
      end

    set_is_reason_ipo_deferred (a_name: like is_reason_ipo_deferred)
        -- Set 'is_reason_ipo_deferred' with 'a_name'.
      do
        is_reason_ipo_deferred := a_name
      ensure
        is_reason_ipo_deferred_set: is_reason_ipo_deferred = a_name
      end

    set_is_reason_halt_news_dissemination (a_name: like is_reason_halt_news_dissemination)
        -- Set 'is_reason_halt_news_dissemination' with 'a_name'.
      do
        is_reason_halt_news_dissemination := a_name
      ensure
        is_reason_halt_news_dissemination_set: is_reason_halt_news_dissemination = a_name
      end

    set_is_reason_ipo_order_acceptance_period (a_name: like is_reason_ipo_order_acceptance_period)
        -- Set 'is_reason_ipo_order_acceptance_period' with 'a_name'.
      do
        is_reason_ipo_order_acceptance_period := a_name
      ensure
        is_reason_ipo_order_acceptance_period_set: is_reason_ipo_order_acceptance_period = a_name
      end

    set_is_reason_ipo_pre_launch_period (a_name: like is_reason_ipo_pre_launch_period)
        -- Set 'is_reason_ipo_pre_launch_period' with 'a_name'.
      do
        is_reason_ipo_pre_launch_period := a_name
      ensure
        is_reason_ipo_pre_launch_period_set: is_reason_ipo_pre_launch_period = a_name
      end

    set_is_reason_market_wide_circuit_breaker_level1 (a_name: like is_reason_market_wide_circuit_breaker_level1)
        -- Set 'is_reason_market_wide_circuit_breaker_level1' with 'a_name'.
      do
        is_reason_market_wide_circuit_breaker_level1 := a_name
      ensure
        is_reason_market_wide_circuit_breaker_level1_set: is_reason_market_wide_circuit_breaker_level1 = a_name
      end

    set_is_reason_market_wide_circuit_breaker_level2 (a_name: like is_reason_market_wide_circuit_breaker_level2)
        -- Set 'is_reason_market_wide_circuit_breaker_level2' with 'a_name'.
      do
        is_reason_market_wide_circuit_breaker_level2 := a_name
      ensure
        is_reason_market_wide_circuit_breaker_level2_set: is_reason_market_wide_circuit_breaker_level2 = a_name
      end

    set_is_reason_market_wide_circuit_breaker_level3 (a_name: like is_reason_market_wide_circuit_breaker_level3)
        -- Set 'is_reason_market_wide_circuit_breaker_level3' with 'a_name'.
      do
        is_reason_market_wide_circuit_breaker_level3 := a_name
      ensure
        is_reason_market_wide_circuit_breaker_level3_set: is_reason_market_wide_circuit_breaker_level3 = a_name
      end

    set_is_reason_not_applicable (a_name: like is_reason_not_applicable)
        -- Set 'is_reason_not_applicable' with 'a_name'.
      do
        is_reason_not_applicable := a_name
      ensure
        is_reason_not_applicable_set: is_reason_not_applicable = a_name
      end

    set_is_reason_not_available (a_name: like is_reason_not_available)
        -- Set 'is_reason_not_available' with 'a_name'.
      do
        is_reason_not_available := a_name
      ensure
        is_reason_not_available_set: is_reason_not_available = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ADMIN_TRADING_STATUS_MODEL%N")
        if attached symbol as l_symbol then
          Result.append ("%Nsymbol:")
          Result.append (l_symbol.out)
          Result.append ("%N")
        end
        if attached timestamp_nanos as l_timestamp_nanos then
          Result.append ("%Ntimestamp_nanos:")
          Result.append (l_timestamp_nanos.out)
          Result.append ("%N")
        end
        if attached timestamp as l_timestamp then
          Result.append ("%Ntimestamp:")
          Result.append (l_timestamp.out)
          Result.append ("%N")
        end
        if attached is_trading_live as l_is_trading_live then
          Result.append ("%Nis_trading_live:")
          Result.append (l_is_trading_live.out)
          Result.append ("%N")
        end
        if attached is_trading_halted as l_is_trading_halted then
          Result.append ("%Nis_trading_halted:")
          Result.append (l_is_trading_halted.out)
          Result.append ("%N")
        end
        if attached is_trading_in_order_acceptance_period as l_is_trading_in_order_acceptance_period then
          Result.append ("%Nis_trading_in_order_acceptance_period:")
          Result.append (l_is_trading_in_order_acceptance_period.out)
          Result.append ("%N")
        end
        if attached is_trading_paused as l_is_trading_paused then
          Result.append ("%Nis_trading_paused:")
          Result.append (l_is_trading_paused.out)
          Result.append ("%N")
        end
        if attached is_reason_halt_news_pending as l_is_reason_halt_news_pending then
          Result.append ("%Nis_reason_halt_news_pending:")
          Result.append (l_is_reason_halt_news_pending.out)
          Result.append ("%N")
        end
        if attached is_reason_ipo_not_yet_trading as l_is_reason_ipo_not_yet_trading then
          Result.append ("%Nis_reason_ipo_not_yet_trading:")
          Result.append (l_is_reason_ipo_not_yet_trading.out)
          Result.append ("%N")
        end
        if attached is_reason_ipo_deferred as l_is_reason_ipo_deferred then
          Result.append ("%Nis_reason_ipo_deferred:")
          Result.append (l_is_reason_ipo_deferred.out)
          Result.append ("%N")
        end
        if attached is_reason_halt_news_dissemination as l_is_reason_halt_news_dissemination then
          Result.append ("%Nis_reason_halt_news_dissemination:")
          Result.append (l_is_reason_halt_news_dissemination.out)
          Result.append ("%N")
        end
        if attached is_reason_ipo_order_acceptance_period as l_is_reason_ipo_order_acceptance_period then
          Result.append ("%Nis_reason_ipo_order_acceptance_period:")
          Result.append (l_is_reason_ipo_order_acceptance_period.out)
          Result.append ("%N")
        end
        if attached is_reason_ipo_pre_launch_period as l_is_reason_ipo_pre_launch_period then
          Result.append ("%Nis_reason_ipo_pre_launch_period:")
          Result.append (l_is_reason_ipo_pre_launch_period.out)
          Result.append ("%N")
        end
        if attached is_reason_market_wide_circuit_breaker_level1 as l_is_reason_market_wide_circuit_breaker_level1 then
          Result.append ("%Nis_reason_market_wide_circuit_breaker_level1:")
          Result.append (l_is_reason_market_wide_circuit_breaker_level1.out)
          Result.append ("%N")
        end
        if attached is_reason_market_wide_circuit_breaker_level2 as l_is_reason_market_wide_circuit_breaker_level2 then
          Result.append ("%Nis_reason_market_wide_circuit_breaker_level2:")
          Result.append (l_is_reason_market_wide_circuit_breaker_level2.out)
          Result.append ("%N")
        end
        if attached is_reason_market_wide_circuit_breaker_level3 as l_is_reason_market_wide_circuit_breaker_level3 then
          Result.append ("%Nis_reason_market_wide_circuit_breaker_level3:")
          Result.append (l_is_reason_market_wide_circuit_breaker_level3.out)
          Result.append ("%N")
        end
        if attached is_reason_not_applicable as l_is_reason_not_applicable then
          Result.append ("%Nis_reason_not_applicable:")
          Result.append (l_is_reason_not_applicable.out)
          Result.append ("%N")
        end
        if attached is_reason_not_available as l_is_reason_not_available then
          Result.append ("%Nis_reason_not_available:")
          Result.append (l_is_reason_not_available.out)
          Result.append ("%N")
        end
      end
end

