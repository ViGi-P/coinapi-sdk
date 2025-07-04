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
class OPTIONS_OPTION_EXCHANGE_GROUP




feature --Access

    asset_id_base: detachable STRING_32
      -- The base asset identifier.
    asset_id_quote: detachable STRING_32
      -- The quote asset identifier.
    underlying_price: REAL_64
      -- The underlying price of the option.
    time_expiration: detachable DATE_TIME
      -- The expiration time of the option.
    strikes: detachable LIST [OPTIONS_STRIKE]
      -- The list of strikes available.

feature -- Change Element

    set_asset_id_base (a_name: like asset_id_base)
        -- Set 'asset_id_base' with 'a_name'.
      do
        asset_id_base := a_name
      ensure
        asset_id_base_set: asset_id_base = a_name
      end

    set_asset_id_quote (a_name: like asset_id_quote)
        -- Set 'asset_id_quote' with 'a_name'.
      do
        asset_id_quote := a_name
      ensure
        asset_id_quote_set: asset_id_quote = a_name
      end

    set_underlying_price (a_name: like underlying_price)
        -- Set 'underlying_price' with 'a_name'.
      do
        underlying_price := a_name
      ensure
        underlying_price_set: underlying_price = a_name
      end

    set_time_expiration (a_name: like time_expiration)
        -- Set 'time_expiration' with 'a_name'.
      do
        time_expiration := a_name
      ensure
        time_expiration_set: time_expiration = a_name
      end

    set_strikes (a_name: like strikes)
        -- Set 'strikes' with 'a_name'.
      do
        strikes := a_name
      ensure
        strikes_set: strikes = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass OPTIONS_OPTION_EXCHANGE_GROUP%N")
        if attached asset_id_base as l_asset_id_base then
          Result.append ("%Nasset_id_base:")
          Result.append (l_asset_id_base.out)
          Result.append ("%N")
        end
        if attached asset_id_quote as l_asset_id_quote then
          Result.append ("%Nasset_id_quote:")
          Result.append (l_asset_id_quote.out)
          Result.append ("%N")
        end
        if attached underlying_price as l_underlying_price then
          Result.append ("%Nunderlying_price:")
          Result.append (l_underlying_price.out)
          Result.append ("%N")
        end
        if attached time_expiration as l_time_expiration then
          Result.append ("%Ntime_expiration:")
          Result.append (l_time_expiration.out)
          Result.append ("%N")
        end
        if attached strikes as l_strikes then
          across l_strikes as ic loop
            Result.append ("%N strikes:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
      end
end

