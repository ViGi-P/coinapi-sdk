/*
 * V1.Symbol.h
 *
 * Represents a symbol data model.
 */

#ifndef _V1.Symbol_H_
#define _V1.Symbol_H_


#include <string>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Represents a symbol data model.
 *
 *  \ingroup Models
 *
 */

class V1.Symbol : public Object {
public:
	/*! \brief Constructor.
	 */
	V1.Symbol();
	V1.Symbol(char* str);

	/*! \brief Destructor.
	 */
	virtual ~V1.Symbol();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Gets or sets the symbol identifier.
	 */
	std::string getSymbolId();

	/*! \brief Set Gets or sets the symbol identifier.
	 */
	void setSymbolId(std::string  symbol_id);
	/*! \brief Get Gets or sets the exchange identifier.
	 */
	std::string getExchangeId();

	/*! \brief Set Gets or sets the exchange identifier.
	 */
	void setExchangeId(std::string  exchange_id);
	/*! \brief Get Gets or sets the symbol type.
	 */
	std::string getSymbolType();

	/*! \brief Set Gets or sets the symbol type.
	 */
	void setSymbolType(std::string  symbol_type);
	/*! \brief Get Gets or sets the base asset identifier.
	 */
	std::string getAssetIdBase();

	/*! \brief Set Gets or sets the base asset identifier.
	 */
	void setAssetIdBase(std::string  asset_id_base);
	/*! \brief Get Gets or sets the quote asset identifier.
	 */
	std::string getAssetIdQuote();

	/*! \brief Set Gets or sets the quote asset identifier.
	 */
	void setAssetIdQuote(std::string  asset_id_quote);
	/*! \brief Get Gets or sets the unit asset identifier.
	 */
	std::string getAssetIdUnit();

	/*! \brief Set Gets or sets the unit asset identifier.
	 */
	void setAssetIdUnit(std::string  asset_id_unit);
	/*! \brief Get Gets or sets the contract unit for futures.
	 */
	double getFutureContractUnit();

	/*! \brief Set Gets or sets the contract unit for futures.
	 */
	void setFutureContractUnit(double  future_contract_unit);
	/*! \brief Get Gets or sets the asset used as the unit for futures contract.
	 */
	std::string getFutureContractUnitAsset();

	/*! \brief Set Gets or sets the asset used as the unit for futures contract.
	 */
	void setFutureContractUnitAsset(std::string  future_contract_unit_asset);
	/*! \brief Get Gets or sets the future delivery time for futures contract.
	 */
	std::string getFutureDeliveryTime();

	/*! \brief Set Gets or sets the future delivery time for futures contract.
	 */
	void setFutureDeliveryTime(std::string  future_delivery_time);
	/*! \brief Get Gets or sets a value indicating whether the option type is a call.
	 */
	bool getOptionTypeIsCall();

	/*! \brief Set Gets or sets a value indicating whether the option type is a call.
	 */
	void setOptionTypeIsCall(bool  option_type_is_call);
	/*! \brief Get Gets or sets the strike price for options.
	 */
	double getOptionStrikePrice();

	/*! \brief Set Gets or sets the strike price for options.
	 */
	void setOptionStrikePrice(double  option_strike_price);
	/*! \brief Get Gets or sets the contract unit for options.
	 */
	double getOptionContractUnit();

	/*! \brief Set Gets or sets the contract unit for options.
	 */
	void setOptionContractUnit(double  option_contract_unit);
	/*! \brief Get Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC.
	 */
	std::string getOptionExerciseStyle();

	/*! \brief Set Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC.
	 */
	void setOptionExerciseStyle(std::string  option_exercise_style);
	/*! \brief Get Gets or sets the expiration time for options.
	 */
	std::string getOptionExpirationTime();

	/*! \brief Set Gets or sets the expiration time for options.
	 */
	void setOptionExpirationTime(std::string  option_expiration_time);
	/*! \brief Get Gets or sets the delivery time for contracts.
	 */
	std::string getContractDeliveryTime();

	/*! \brief Set Gets or sets the delivery time for contracts.
	 */
	void setContractDeliveryTime(std::string  contract_delivery_time);
	/*! \brief Get Gets or sets the contract unit for contracts.
	 */
	double getContractUnit();

	/*! \brief Set Gets or sets the contract unit for contracts.
	 */
	void setContractUnit(double  contract_unit);
	/*! \brief Get Gets or sets the asset used as the unit for contracts.
	 */
	std::string getContractUnitAsset();

	/*! \brief Set Gets or sets the asset used as the unit for contracts.
	 */
	void setContractUnitAsset(std::string  contract_unit_asset);
	/*! \brief Get Gets or sets the contract identifier.
	 */
	std::string getContractId();

	/*! \brief Set Gets or sets the contract identifier.
	 */
	void setContractId(std::string  contract_id);
	/*! \brief Get Gets or sets the display name of the contract.
	 */
	std::string getContractDisplayName();

	/*! \brief Set Gets or sets the display name of the contract.
	 */
	void setContractDisplayName(std::string  contract_display_name);
	/*! \brief Get Gets or sets the display description of the contract.
	 */
	std::string getContractDisplayDescription();

	/*! \brief Set Gets or sets the display description of the contract.
	 */
	void setContractDisplayDescription(std::string  contract_display_description);
	/*! \brief Get Gets the start date of the data in string format (\"yyyy-MM-dd\").
	 */
	std::string getDataStart();

	/*! \brief Set Gets the start date of the data in string format (\"yyyy-MM-dd\").
	 */
	void setDataStart(std::string  data_start);
	/*! \brief Get Gets the end date of the data in string format (\"yyyy-MM-dd\").
	 */
	std::string getDataEnd();

	/*! \brief Set Gets the end date of the data in string format (\"yyyy-MM-dd\").
	 */
	void setDataEnd(std::string  data_end);
	/*! \brief Get Gets or sets the start date of quote data.
	 */
	std::string getDataQuoteStart();

	/*! \brief Set Gets or sets the start date of quote data.
	 */
	void setDataQuoteStart(std::string  data_quote_start);
	/*! \brief Get Gets or sets the end date of quote data.
	 */
	std::string getDataQuoteEnd();

	/*! \brief Set Gets or sets the end date of quote data.
	 */
	void setDataQuoteEnd(std::string  data_quote_end);
	/*! \brief Get Gets or sets the start date of order book data.
	 */
	std::string getDataOrderbookStart();

	/*! \brief Set Gets or sets the start date of order book data.
	 */
	void setDataOrderbookStart(std::string  data_orderbook_start);
	/*! \brief Get Gets or sets the end date of order book data.
	 */
	std::string getDataOrderbookEnd();

	/*! \brief Set Gets or sets the end date of order book data.
	 */
	void setDataOrderbookEnd(std::string  data_orderbook_end);
	/*! \brief Get Gets or sets the start date of trade data.
	 */
	std::string getDataTradeStart();

	/*! \brief Set Gets or sets the start date of trade data.
	 */
	void setDataTradeStart(std::string  data_trade_start);
	/*! \brief Get Gets or sets the end date of trade data.
	 */
	std::string getDataTradeEnd();

	/*! \brief Set Gets or sets the end date of trade data.
	 */
	void setDataTradeEnd(std::string  data_trade_end);
	/*! \brief Get Gets or sets the index identifier.
	 */
	std::string getIndexId();

	/*! \brief Set Gets or sets the index identifier.
	 */
	void setIndexId(std::string  index_id);
	/*! \brief Get Gets or sets the display name of the index.
	 */
	std::string getIndexDisplayName();

	/*! \brief Set Gets or sets the display name of the index.
	 */
	void setIndexDisplayName(std::string  index_display_name);
	/*! \brief Get Gets or sets the display description of the index.
	 */
	std::string getIndexDisplayDescription();

	/*! \brief Set Gets or sets the display description of the index.
	 */
	void setIndexDisplayDescription(std::string  index_display_description);
	/*! \brief Get Gets or sets the volume in the last 1 hour.
	 */
	double getVolume1hrs();

	/*! \brief Set Gets or sets the volume in the last 1 hour.
	 */
	void setVolume1hrs(double  volume_1hrs);
	/*! \brief Get Gets or sets the volume in USD in the last 1 hour.
	 */
	double getVolume1hrsUsd();

	/*! \brief Set Gets or sets the volume in USD in the last 1 hour.
	 */
	void setVolume1hrsUsd(double  volume_1hrs_usd);
	/*! \brief Get Gets or sets the volume in the last 1 day.
	 */
	double getVolume1day();

	/*! \brief Set Gets or sets the volume in the last 1 day.
	 */
	void setVolume1day(double  volume_1day);
	/*! \brief Get Gets or sets the volume in USD in the last 1 day.
	 */
	double getVolume1dayUsd();

	/*! \brief Set Gets or sets the volume in USD in the last 1 day.
	 */
	void setVolume1dayUsd(double  volume_1day_usd);
	/*! \brief Get Gets or sets the volume in the last 1 month.
	 */
	double getVolume1mth();

	/*! \brief Set Gets or sets the volume in the last 1 month.
	 */
	void setVolume1mth(double  volume_1mth);
	/*! \brief Get Gets or sets the volume in USD in the last 1 month.
	 */
	double getVolume1mthUsd();

	/*! \brief Set Gets or sets the volume in USD in the last 1 month.
	 */
	void setVolume1mthUsd(double  volume_1mth_usd);
	/*! \brief Get Gets or sets the price.
	 */
	double getPrice();

	/*! \brief Set Gets or sets the price.
	 */
	void setPrice(double  price);
	/*! \brief Get Gets or sets the symbol identifier in the exchange.
	 */
	std::string getSymbolIdExchange();

	/*! \brief Set Gets or sets the symbol identifier in the exchange.
	 */
	void setSymbolIdExchange(std::string  symbol_id_exchange);
	/*! \brief Get Gets or sets the base asset identifier in the exchange.
	 */
	std::string getAssetIdBaseExchange();

	/*! \brief Set Gets or sets the base asset identifier in the exchange.
	 */
	void setAssetIdBaseExchange(std::string  asset_id_base_exchange);
	/*! \brief Get Gets or sets the quote asset identifier in the exchange.
	 */
	std::string getAssetIdQuoteExchange();

	/*! \brief Set Gets or sets the quote asset identifier in the exchange.
	 */
	void setAssetIdQuoteExchange(std::string  asset_id_quote_exchange);
	/*! \brief Get Gets or sets the price precision.
	 */
	double getPricePrecision();

	/*! \brief Set Gets or sets the price precision.
	 */
	void setPricePrecision(double  price_precision);
	/*! \brief Get Gets or sets the size precision.
	 */
	double getSizePrecision();

	/*! \brief Set Gets or sets the size precision.
	 */
	void setSizePrecision(double  size_precision);
	/*! \brief Get Key Value Pair store with raw data from the data source.
	 */
	std::map<std::string, std::string> getRawKvp();

	/*! \brief Set Key Value Pair store with raw data from the data source.
	 */
	void setRawKvp(std::map <std::string, std::string> raw_kvp);
	/*! \brief Get Gets or sets a value indicating whether the futures contract is inverse (coin-margined).
	 */
	bool getFutureIsInverse();

	/*! \brief Set Gets or sets a value indicating whether the futures contract is inverse (coin-margined).
	 */
	void setFutureIsInverse(bool  future_is_inverse);
	/*! \brief Get Gets or sets a value indicating whether the futures contract is quanto.
	 */
	bool getFutureIsQuanto();

	/*! \brief Set Gets or sets a value indicating whether the futures contract is quanto.
	 */
	void setFutureIsQuanto(bool  future_is_quanto);
	/*! \brief Get Gets or sets the volume in USD.
	 */
	double getVolumeToUsd();

	/*! \brief Set Gets or sets the volume in USD.
	 */
	void setVolumeToUsd(double  volume_to_usd);
	/*! \brief Get Gets or sets the up barrier price for barrier options.
	 */
	double getOptionBarrierUpPrice();

	/*! \brief Set Gets or sets the up barrier price for barrier options.
	 */
	void setOptionBarrierUpPrice(double  option_barrier_up_price);
	/*! \brief Get Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
	 */
	std::string getOptionBarrierUpType();

	/*! \brief Set Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
	 */
	void setOptionBarrierUpType(std::string  option_barrier_up_type);
	/*! \brief Get Gets or sets the down barrier price for barrier options.
	 */
	double getOptionBarrierDownPrice();

	/*! \brief Set Gets or sets the down barrier price for barrier options.
	 */
	void setOptionBarrierDownPrice(double  option_barrier_down_price);
	/*! \brief Get Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
	 */
	std::string getOptionBarrierDownType();

	/*! \brief Set Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
	 */
	void setOptionBarrierDownType(std::string  option_barrier_down_type);
	/*! \brief Get Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs.
	 */
	int getSymbolIdInt();

	/*! \brief Set Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs.
	 */
	void setSymbolIdInt(int  symbol_id_int);

private:
	std::string symbol_id;
	std::string exchange_id;
	std::string symbol_type;
	std::string asset_id_base;
	std::string asset_id_quote;
	std::string asset_id_unit;
	double future_contract_unit;
	std::string future_contract_unit_asset;
	std::string future_delivery_time;
	bool option_type_is_call;
	double option_strike_price;
	double option_contract_unit;
	std::string option_exercise_style;
	std::string option_expiration_time;
	std::string contract_delivery_time;
	double contract_unit;
	std::string contract_unit_asset;
	std::string contract_id;
	std::string contract_display_name;
	std::string contract_display_description;
	std::string data_start;
	std::string data_end;
	std::string data_quote_start;
	std::string data_quote_end;
	std::string data_orderbook_start;
	std::string data_orderbook_end;
	std::string data_trade_start;
	std::string data_trade_end;
	std::string index_id;
	std::string index_display_name;
	std::string index_display_description;
	double volume_1hrs;
	double volume_1hrs_usd;
	double volume_1day;
	double volume_1day_usd;
	double volume_1mth;
	double volume_1mth_usd;
	double price;
	std::string symbol_id_exchange;
	std::string asset_id_base_exchange;
	std::string asset_id_quote_exchange;
	double price_precision;
	double size_precision;
	std::map <std::string, std::string>raw_kvp;
	bool future_is_inverse;
	bool future_is_quanto;
	double volume_to_usd;
	double option_barrier_up_price;
	std::string option_barrier_up_type;
	double option_barrier_down_price;
	std::string option_barrier_down_type;
	int symbol_id_int;
	void __init();
	void __cleanup();

};
}
}

#endif /* _V1.Symbol_H_ */
