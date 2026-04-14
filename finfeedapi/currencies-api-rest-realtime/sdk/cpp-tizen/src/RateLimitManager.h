#ifndef _RateLimitManager_H_
#define _RateLimitManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup RateLimit RateLimit
 * \ingroup Operations
 *  @{
 */
class RateLimitManager {
public:
	RateLimitManager();
	virtual ~RateLimitManager();

/*! \brief . *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool internalRatelimitWsconconApikeyGetSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief . *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool internalRatelimitWsconconApikeyGetAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief . *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool internalRatelimitWshelloIpGetSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief . *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool internalRatelimitWshelloIpGetAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief . *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool internalRatelimitWsreqIpGetSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief . *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool internalRatelimitWsreqIpGetAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://api-realtime.fx.finfeedapi.com";
	}
};
/** @}*/

}
}
#endif /* RateLimitManager_H_ */
