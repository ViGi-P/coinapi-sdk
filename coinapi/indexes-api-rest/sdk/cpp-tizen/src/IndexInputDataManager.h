#ifndef _IndexInputDataManager_H_
#define _IndexInputDataManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Models.IndexDefinitionInputData.h"
#include "Models.IndexDefinitionSnapshotEntry.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup IndexInputData IndexInputData
 * \ingroup Operations
 *  @{
 */
class IndexInputDataManager {
public:
	IndexInputDataManager();
	virtual ~IndexInputDataManager();

/*! \brief Returns all data inputs for a specific index definition. *Synchronous*
 *
 * 
 * \param indexDefinitionId  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1IndexdefInputDataIndexDefinitionIdAllGetSync(char * accessToken,
	std::string indexDefinitionId, 
	void(* handler)(std::list<Models.IndexDefinitionInputData>, Error, void* )
	, void* userData);

/*! \brief Returns all data inputs for a specific index definition. *Asynchronous*
 *
 * 
 * \param indexDefinitionId  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1IndexdefInputDataIndexDefinitionIdAllGetAsync(char * accessToken,
	std::string indexDefinitionId, 
	void(* handler)(std::list<Models.IndexDefinitionInputData>, Error, void* )
	, void* userData);


/*! \brief Returns data inputs for certain index definition and time. *Synchronous*
 *
 * 
 * \param indexDefinitionId  *Required*
 * \param time 
 * \param enabledOnly 
 * \param pendingOnly 
 * \param filterAssetId 
 * \param withStatusInfo 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1IndexdefInputDataIndexDefinitionIdGetSync(char * accessToken,
	std::string indexDefinitionId, std::string time, bool enabledOnly, bool pendingOnly, std::string filterAssetId, bool withStatusInfo, 
	void(* handler)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )
	, void* userData);

/*! \brief Returns data inputs for certain index definition and time. *Asynchronous*
 *
 * 
 * \param indexDefinitionId  *Required*
 * \param time 
 * \param enabledOnly 
 * \param pendingOnly 
 * \param filterAssetId 
 * \param withStatusInfo 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool v1IndexdefInputDataIndexDefinitionIdGetAsync(char * accessToken,
	std::string indexDefinitionId, std::string time, bool enabledOnly, bool pendingOnly, std::string filterAssetId, bool withStatusInfo, 
	void(* handler)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://rest-api.indexes.coinapi.io";
	}
};
/** @}*/

}
}
#endif /* IndexInputDataManager_H_ */
