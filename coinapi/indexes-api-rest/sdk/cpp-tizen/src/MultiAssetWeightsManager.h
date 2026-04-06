#ifndef _MultiAssetWeightsManager_H_
#define _MultiAssetWeightsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Models.IndexMultiAssetWeight.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup MultiAssetWeights MultiAssetWeights
 * \ingroup Operations
 *  @{
 */
class MultiAssetWeightsManager {
public:
	MultiAssetWeightsManager();
	virtual ~MultiAssetWeightsManager();

/*! \brief Get all multi-asset weights. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1IndexdefMultiassetGetSync(char * accessToken,
	
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
	, void* userData);

/*! \brief Get all multi-asset weights. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1IndexdefMultiassetGetAsync(char * accessToken,
	
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
	, void* userData);


/*! \brief Get multi-asset weights for specific index. *Synchronous*
 *
 * 
 * \param indexId  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1IndexdefMultiassetIndexIdGetSync(char * accessToken,
	std::string indexId, 
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
	, void* userData);

/*! \brief Get multi-asset weights for specific index. *Asynchronous*
 *
 * 
 * \param indexId  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1IndexdefMultiassetIndexIdGetAsync(char * accessToken,
	std::string indexId, 
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://rest-api.indexes.coinapi.io";
	}
};
/** @}*/

}
}
#endif /* MultiAssetWeightsManager_H_ */
