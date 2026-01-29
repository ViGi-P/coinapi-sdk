#ifndef _OrderBookManager_H_
#define _OrderBookManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "V1.OrderBook.h"
#include "V1.OrderBookBase.h"
#include "V1.OrderBookDepth.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup OrderBook OrderBook
 * \ingroup Operations
 *  @{
 */
class OrderBookManager {
public:
	OrderBookManager();
	virtual ~OrderBookManager();

/*! \brief Get current order book. *Synchronous*
 *
 * Retrieves the current order book for the specified symbol.
 * \param symbolId The symbol ID (from the Metadata -> Symbols) *Required*
 * \param limitLevels The maximum number of levels to include in the response.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1OrderbooksSymbolIdCurrentGetSync(char * accessToken,
	std::string symbolId, int limitLevels, 
	void(* handler)(V1.OrderBookBase, Error, void* )
	, void* userData);

/*! \brief Get current order book. *Asynchronous*
 *
 * Retrieves the current order book for the specified symbol.
 * \param symbolId The symbol ID (from the Metadata -> Symbols) *Required*
 * \param limitLevels The maximum number of levels to include in the response.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1OrderbooksSymbolIdCurrentGetAsync(char * accessToken,
	std::string symbolId, int limitLevels, 
	void(* handler)(V1.OrderBookBase, Error, void* )
	, void* userData);


/*! \brief Current depth of the order book. *Synchronous*
 *
 * Retrieves the current depth of the order book for the specified symbol.
 * \param symbolId The symbol ID (from the Metadata -> Symbols) *Required*
 * \param limitLevels The maximum number of levels to include in the response.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1OrderbooksSymbolIdDepthCurrentGetSync(char * accessToken,
	std::string symbolId, int limitLevels, 
	void(* handler)(V1.OrderBookDepth, Error, void* )
	, void* userData);

/*! \brief Current depth of the order book. *Asynchronous*
 *
 * Retrieves the current depth of the order book for the specified symbol.
 * \param symbolId The symbol ID (from the Metadata -> Symbols) *Required*
 * \param limitLevels The maximum number of levels to include in the response.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1OrderbooksSymbolIdDepthCurrentGetAsync(char * accessToken,
	std::string symbolId, int limitLevels, 
	void(* handler)(V1.OrderBookDepth, Error, void* )
	, void* userData);


/*! \brief Historical data. *Synchronous*
 *
 * Get historical order book snapshots for a specific symbol within time range, returned in time ascending order.              :::info The historical order book data via the REST API is currently limited by a number of updates and to the maximum number of 20 levels. :::              This endpoint supports hourly granularity for APITP data with automatic fallback to daily data for older records. Timestamps are normalized to hour boundaries, and data is fetched per hour with precise filtering to your exact time range.              :::tip For querying a full day of data, use the 'date' parameter. For specific time ranges (including cross-day or multi-hour queries), use 'time_start' and 'time_end'. :::
 * \param symbolId Symbol identifier for requested timeseries (from the Metadata -> Symbols) *Required*
 * \param date Date in ISO 8601, returned data is for the whole given day (required if 'time_start' is not provided)
 * \param timeStart Starting time in ISO 8601 (supports hourly precision, e.g., 2026-01-16T11:00:00Z)
 * \param timeEnd Timeseries ending time in ISO 8601 (optional, supports cross-day queries)
 * \param limit Amount of items to return (optional, minimum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
 * \param limitLevels Maximum amount of levels from each side of the book to include in response (optional)
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1OrderbooksSymbolIdHistoryGetSync(char * accessToken,
	std::string symbolId, std::string date, std::string timeStart, std::string timeEnd, int limit, int limitLevels, 
	void(* handler)(std::list<V1.OrderBook>, Error, void* )
	, void* userData);

/*! \brief Historical data. *Asynchronous*
 *
 * Get historical order book snapshots for a specific symbol within time range, returned in time ascending order.              :::info The historical order book data via the REST API is currently limited by a number of updates and to the maximum number of 20 levels. :::              This endpoint supports hourly granularity for APITP data with automatic fallback to daily data for older records. Timestamps are normalized to hour boundaries, and data is fetched per hour with precise filtering to your exact time range.              :::tip For querying a full day of data, use the 'date' parameter. For specific time ranges (including cross-day or multi-hour queries), use 'time_start' and 'time_end'. :::
 * \param symbolId Symbol identifier for requested timeseries (from the Metadata -> Symbols) *Required*
 * \param date Date in ISO 8601, returned data is for the whole given day (required if 'time_start' is not provided)
 * \param timeStart Starting time in ISO 8601 (supports hourly precision, e.g., 2026-01-16T11:00:00Z)
 * \param timeEnd Timeseries ending time in ISO 8601 (optional, supports cross-day queries)
 * \param limit Amount of items to return (optional, minimum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
 * \param limitLevels Maximum amount of levels from each side of the book to include in response (optional)
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1OrderbooksSymbolIdHistoryGetAsync(char * accessToken,
	std::string symbolId, std::string date, std::string timeStart, std::string timeEnd, int limit, int limitLevels, 
	void(* handler)(std::list<V1.OrderBook>, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://rest.coinapi.io";
	}
};
/** @}*/

}
}
#endif /* OrderBookManager_H_ */
