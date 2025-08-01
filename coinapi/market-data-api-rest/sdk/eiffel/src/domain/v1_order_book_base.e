note
 description:"[
		CoinAPI Market Data REST API
 		No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
  		The version of the OpenAPI document: v1
 	    Contact: support@apibricks.io

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class V1_ORDER_BOOK_BASE




feature --Access

    symbol_id: detachable STRING_32
      -- The symbol identifier.
    time_exchange: detachable DATE_TIME
      -- The exchange time of the order book.
    time_coinapi: detachable DATE_TIME
      -- The CoinAPI time when the order book was received.
    asks: detachable ANY
      -- The asks made by market makers.
    bids: detachable ANY
      -- The bids made by market makers.

feature -- Change Element

    set_symbol_id (a_name: like symbol_id)
        -- Set 'symbol_id' with 'a_name'.
      do
        symbol_id := a_name
      ensure
        symbol_id_set: symbol_id = a_name
      end

    set_time_exchange (a_name: like time_exchange)
        -- Set 'time_exchange' with 'a_name'.
      do
        time_exchange := a_name
      ensure
        time_exchange_set: time_exchange = a_name
      end

    set_time_coinapi (a_name: like time_coinapi)
        -- Set 'time_coinapi' with 'a_name'.
      do
        time_coinapi := a_name
      ensure
        time_coinapi_set: time_coinapi = a_name
      end

    set_asks (a_name: like asks)
        -- Set 'asks' with 'a_name'.
      do
        asks := a_name
      ensure
        asks_set: asks = a_name
      end

    set_bids (a_name: like bids)
        -- Set 'bids' with 'a_name'.
      do
        bids := a_name
      ensure
        bids_set: bids = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass V1_ORDER_BOOK_BASE%N")
        if attached symbol_id as l_symbol_id then
          Result.append ("%Nsymbol_id:")
          Result.append (l_symbol_id.out)
          Result.append ("%N")
        end
        if attached time_exchange as l_time_exchange then
          Result.append ("%Ntime_exchange:")
          Result.append (l_time_exchange.out)
          Result.append ("%N")
        end
        if attached time_coinapi as l_time_coinapi then
          Result.append ("%Ntime_coinapi:")
          Result.append (l_time_coinapi.out)
          Result.append ("%N")
        end
        if attached asks as l_asks then
          Result.append ("%Nasks:")
          Result.append (l_asks.out)
          Result.append ("%N")
        end
        if attached bids as l_bids then
          Result.append ("%Nbids:")
          Result.append (l_bids.out)
          Result.append ("%N")
        end
      end
end

