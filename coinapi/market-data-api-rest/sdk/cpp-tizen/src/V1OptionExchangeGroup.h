/*
 * V1.OptionExchangeGroup.h
 *
 * Represents an option exchange group data model.
 */

#ifndef _V1.OptionExchangeGroup_H_
#define _V1.OptionExchangeGroup_H_


#include <string>
#include "V1.Strike.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Represents an option exchange group data model.
 *
 *  \ingroup Models
 *
 */

class V1.OptionExchangeGroup : public Object {
public:
	/*! \brief Constructor.
	 */
	V1.OptionExchangeGroup();
	V1.OptionExchangeGroup(char* str);

	/*! \brief Destructor.
	 */
	virtual ~V1.OptionExchangeGroup();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Gets or sets the base asset identifier.
	 */
	std::string getAssetIdBase();

	/*! \brief Set Gets or sets the base asset identifier.
	 */
	void setAssetIdBase(std::string  asset_id_base);
	/*! \brief Get Gets or sets the quote asset identifier.
	 */
	std::string getAssetIdQuote();

	/*! \brief Set Gets or sets the quote asset identifier.
	 */
	void setAssetIdQuote(std::string  asset_id_quote);
	/*! \brief Get Gets or sets the underlying price of the option.
	 */
	double getUnderlyingPrice();

	/*! \brief Set Gets or sets the underlying price of the option.
	 */
	void setUnderlyingPrice(double  underlying_price);
	/*! \brief Get Gets or sets the expiration time of the option.
	 */
	std::string getTimeExpiration();

	/*! \brief Set Gets or sets the expiration time of the option.
	 */
	void setTimeExpiration(std::string  time_expiration);
	/*! \brief Get Gets or sets the list of strikes available.
	 */
	std::list<V1.Strike> getStrikes();

	/*! \brief Set Gets or sets the list of strikes available.
	 */
	void setStrikes(std::list <V1.Strike> strikes);

private:
	std::string asset_id_base;
	std::string asset_id_quote;
	double underlying_price;
	std::string time_expiration;
	std::list <V1.Strike>strikes;
	void __init();
	void __cleanup();

};
}
}

#endif /* _V1.OptionExchangeGroup_H_ */
