/*
 * V1.OrderBookDepth.h
 *
 * Represents the depth of an order book.
 */

#ifndef _V1.OrderBookDepth_H_
#define _V1.OrderBookDepth_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Represents the depth of an order book.
 *
 *  \ingroup Models
 *
 */

class V1.OrderBookDepth : public Object {
public:
	/*! \brief Constructor.
	 */
	V1.OrderBookDepth();
	V1.OrderBookDepth(char* str);

	/*! \brief Destructor.
	 */
	virtual ~V1.OrderBookDepth();

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
	/*! \brief Get Gets or sets the number of ask levels in the order book.
	 */
	long long getAskLevels();

	/*! \brief Set Gets or sets the number of ask levels in the order book.
	 */
	void setAskLevels(long long  ask_levels);
	/*! \brief Get Gets or sets the number of bid levels in the order book.
	 */
	long long getBidLevels();

	/*! \brief Set Gets or sets the number of bid levels in the order book.
	 */
	void setBidLevels(long long  bid_levels);
	/*! \brief Get Gets or sets the depth of the ask side of the order book.
	 */
	double getAskDepth();

	/*! \brief Set Gets or sets the depth of the ask side of the order book.
	 */
	void setAskDepth(double  ask_depth);
	/*! \brief Get Gets or sets the depth of the bid side of the order book.
	 */
	double getBidDepth();

	/*! \brief Set Gets or sets the depth of the bid side of the order book.
	 */
	void setBidDepth(double  bid_depth);

private:
	std::string symbol_id;
	std::string time_exchange;
	std::string time_coinapi;
	long long ask_levels;
	long long bid_levels;
	double ask_depth;
	double bid_depth;
	void __init();
	void __cleanup();

};
}
}

#endif /* _V1.OrderBookDepth_H_ */
