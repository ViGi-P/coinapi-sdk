/*
 * V1.OrderBookBase.h
 *
 * Represents the base model for order book data.
 */

#ifndef _V1.OrderBookBase_H_
#define _V1.OrderBookBase_H_


#include <string>
#include "AnyType.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Represents the base model for order book data.
 *
 *  \ingroup Models
 *
 */

class V1.OrderBookBase : public Object {
public:
	/*! \brief Constructor.
	 */
	V1.OrderBookBase();
	V1.OrderBookBase(char* str);

	/*! \brief Destructor.
	 */
	virtual ~V1.OrderBookBase();

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
	/*! \brief Get Gets or sets the exchange time of the order book.
	 */
	std::string getTimeExchange();

	/*! \brief Set Gets or sets the exchange time of the order book.
	 */
	void setTimeExchange(std::string  time_exchange);
	/*! \brief Get Gets or sets the CoinAPI time when the order book was received.
	 */
	std::string getTimeCoinapi();

	/*! \brief Set Gets or sets the CoinAPI time when the order book was received.
	 */
	void setTimeCoinapi(std::string  time_coinapi);
	/*! \brief Get Gets or sets the asks made by market makers.
	 */
	AnyType getAsks();

	/*! \brief Set Gets or sets the asks made by market makers.
	 */
	void setAsks(AnyType  asks);
	/*! \brief Get Gets or sets the bids made by market makers.
	 */
	AnyType getBids();

	/*! \brief Set Gets or sets the bids made by market makers.
	 */
	void setBids(AnyType  bids);

private:
	std::string symbol_id;
	std::string time_exchange;
	std::string time_coinapi;
	AnyType asks;
	AnyType bids;
	void __init();
	void __cleanup();

};
}
}

#endif /* _V1.OrderBookBase_H_ */
