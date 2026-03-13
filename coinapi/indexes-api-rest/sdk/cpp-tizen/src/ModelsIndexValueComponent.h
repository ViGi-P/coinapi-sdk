/*
 * Models.IndexValueComponent.h
 *
 * 
 */

#ifndef _Models.IndexValueComponent_H_
#define _Models.IndexValueComponent_H_


#include <string>
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

class Models.IndexValueComponent : public Object {
public:
	/*! \brief Constructor.
	 */
	Models.IndexValueComponent();
	Models.IndexValueComponent(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Models.IndexValueComponent();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getComponentId();

	/*! \brief Set 
	 */
	void setComponentId(std::string  component_id);
	/*! \brief Get 
	 */
	double getComponentValue();

	/*! \brief Set 
	 */
	void setComponentValue(double  component_value);

private:
	std::string component_id;
	double component_value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Models.IndexValueComponent_H_ */
