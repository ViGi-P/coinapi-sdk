/*
 * Models.IndexIdentifier.h
 *
 * Represents an index id
 */

#ifndef _Models.IndexIdentifier_H_
#define _Models.IndexIdentifier_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Represents an index id
 *
 *  \ingroup Models
 *
 */

class Models.IndexIdentifier : public Object {
public:
	/*! \brief Constructor.
	 */
	Models.IndexIdentifier();
	Models.IndexIdentifier(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Models.IndexIdentifier();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Index ID
	 */
	std::string getId();

	/*! \brief Set Index ID
	 */
	void setId(std::string  id);

private:
	std::string id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Models.IndexIdentifier_H_ */
