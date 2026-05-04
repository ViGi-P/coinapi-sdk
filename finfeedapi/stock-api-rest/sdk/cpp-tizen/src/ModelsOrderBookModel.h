/*
 * Models.OrderBookModel.h
 *
 * Represents the response DTO for Level-3 order book information
 */

#ifndef _Models.OrderBookModel_H_
#define _Models.OrderBookModel_H_


#include <string>
#include "Models.AddOrderModel.h"
#include "Models.ClearBookModel.h"
#include "Models.DeleteOrderModel.h"
#include "Models.ExecutedOrderModel.h"
#include "Models.ModifyOrderModel.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Represents the response DTO for Level-3 order book information
 *
 *  \ingroup Models
 *
 */

class Models.OrderBookModel : public Object {
public:
	/*! \brief Constructor.
	 */
	Models.OrderBookModel();
	Models.OrderBookModel(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Models.OrderBookModel();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	Models.AddOrderModel getAddOrder();

	/*! \brief Set 
	 */
	void setAddOrder(Models.AddOrderModel  add_order);
	/*! \brief Get 
	 */
	Models.DeleteOrderModel getDeleteOrder();

	/*! \brief Set 
	 */
	void setDeleteOrder(Models.DeleteOrderModel  delete_order);
	/*! \brief Get 
	 */
	Models.ModifyOrderModel getModifyOrder();

	/*! \brief Set 
	 */
	void setModifyOrder(Models.ModifyOrderModel  modify_order);
	/*! \brief Get 
	 */
	Models.ExecutedOrderModel getExecutedOrder();

	/*! \brief Set 
	 */
	void setExecutedOrder(Models.ExecutedOrderModel  executed_order);
	/*! \brief Get 
	 */
	Models.ClearBookModel getClearBook();

	/*! \brief Set 
	 */
	void setClearBook(Models.ClearBookModel  clear_book);

private:
	Models.AddOrderModel add_order;
	Models.DeleteOrderModel delete_order;
	Models.ModifyOrderModel modify_order;
	Models.ExecutedOrderModel executed_order;
	Models.ClearBookModel clear_book;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Models.OrderBookModel_H_ */
