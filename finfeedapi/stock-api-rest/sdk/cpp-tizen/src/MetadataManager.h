#ifndef _MetadataManager_H_
#define _MetadataManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "FinFeedAPI.ExchangeModel.h"
#include "FinFeedAPI.SymbolModel.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Metadata Metadata
 * \ingroup Operations
 *  @{
 */
class MetadataManager {
public:
	MetadataManager();
	virtual ~MetadataManager();

/*! \brief List of exchanges. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1ExchangesGetSync(char * accessToken,
	
	void(* handler)(std::list<FinFeedAPI.ExchangeModel>, Error, void* )
	, void* userData);

/*! \brief List of exchanges. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1ExchangesGetAsync(char * accessToken,
	
	void(* handler)(std::list<FinFeedAPI.ExchangeModel>, Error, void* )
	, void* userData);


/*! \brief List of symbols for the exchange. *Synchronous*
 *
 * 
 * \param exchangeId The ID of the exchange (from the Metadata -> Exchanges) *Required*
 * \param filterSymbolId Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`)
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1SymbolsExchangeIdGetSync(char * accessToken,
	std::string exchangeId, std::string filterSymbolId, 
	void(* handler)(std::list<FinFeedAPI.SymbolModel>, Error, void* )
	, void* userData);

/*! \brief List of symbols for the exchange. *Asynchronous*
 *
 * 
 * \param exchangeId The ID of the exchange (from the Metadata -> Exchanges) *Required*
 * \param filterSymbolId Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`)
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1SymbolsExchangeIdGetAsync(char * accessToken,
	std::string exchangeId, std::string filterSymbolId, 
	void(* handler)(std::list<FinFeedAPI.SymbolModel>, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://api-historical.stock.finfeedapi.com";
	}
};
/** @}*/

}
}
#endif /* MetadataManager_H_ */
