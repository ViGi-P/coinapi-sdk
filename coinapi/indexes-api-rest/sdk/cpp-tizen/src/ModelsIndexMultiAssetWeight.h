/*
 * Models.IndexMultiAssetWeight.h
 *
 * 
 */

#ifndef _Models.IndexMultiAssetWeight_H_
#define _Models.IndexMultiAssetWeight_H_


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

class Models.IndexMultiAssetWeight : public Object {
public:
	/*! \brief Constructor.
	 */
	Models.IndexMultiAssetWeight();
	Models.IndexMultiAssetWeight(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Models.IndexMultiAssetWeight();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getIndexId();

	/*! \brief Set 
	 */
	void setIndexId(std::string  indexId);
	/*! \brief Get 
	 */
	std::string getAssetId();

	/*! \brief Set 
	 */
	void setAssetId(std::string  assetId);
	/*! \brief Get 
	 */
	double getWeight();

	/*! \brief Set 
	 */
	void setWeight(double  weight);

private:
	std::string indexId;
	std::string assetId;
	double weight;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Models.IndexMultiAssetWeight_H_ */
