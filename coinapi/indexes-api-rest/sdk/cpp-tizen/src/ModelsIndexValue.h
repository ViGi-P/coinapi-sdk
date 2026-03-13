/*
 * Models.IndexValue.h
 *
 * 
 */

#ifndef _Models.IndexValue_H_
#define _Models.IndexValue_H_


#include <string>
#include "Models.IndexValueComponent.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Models.IndexValue : public Object {
public:
	/*! \brief Constructor.
	 */
	Models.IndexValue();
	Models.IndexValue(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Models.IndexValue();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getTimestamp();

	/*! \brief Set 
	 */
	void setTimestamp(std::string  timestamp);
	/*! \brief Get 
	 */
	double getValue();

	/*! \brief Set 
	 */
	void setValue(double  value);
	/*! \brief Get 
	 */
	std::list<Models.IndexValueComponent> getComposition();

	/*! \brief Set 
	 */
	void setComposition(std::list <Models.IndexValueComponent> composition);

private:
	std::string timestamp;
	double value;
	std::list <Models.IndexValueComponent>composition;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Models.IndexValue_H_ */
