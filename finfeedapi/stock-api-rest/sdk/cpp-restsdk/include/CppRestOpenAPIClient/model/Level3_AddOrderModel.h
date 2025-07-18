/**
 * FinFeedAPI Stock REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.14.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Level3_AddOrderModel.h
 *
 * Represents the response DTO for add order information
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Level3_AddOrderModel_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Level3_AddOrderModel_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// Represents the response DTO for add order information
/// </summary>
class  Level3_AddOrderModel
    : public ModelBase
{
public:
    Level3_AddOrderModel();
    virtual ~Level3_AddOrderModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;


    /////////////////////////////////////////////
    /// Level3_AddOrderModel members


    /// <summary>
    /// The stock symbol
    /// </summary>
    utility::string_t getSymbol() const;
    bool symbolIsSet() const;
    void unsetSymbol();
    void setSymbol(const utility::string_t& value);

    /// <summary>
    /// Original timestamp in nanoseconds since epoch
    /// </summary>
    int64_t getTimestampNanos() const;
    bool timestampNanosIsSet() const;
    void unsetTimestamp_nanos();
    void setTimestampNanos(int64_t value);

    /// <summary>
    /// Time when the order was added as DateTime (UTC)
    /// </summary>
    utility::datetime getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();
    void setTimestamp(const utility::datetime& value);

    /// <summary>
    /// Indicates if this is a Buy order (&#39;8&#39;/0x38).
    /// </summary>
    bool isIsSideBuy() const;
    bool isSideBuyIsSet() const;
    void unsetIs_side_buy();
    void setIsSideBuy(bool value);

    /// <summary>
    /// Quoted size in number of shares
    /// </summary>
    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetSize();
    void setSize(int32_t value);

    /// <summary>
    /// Price as decimal
    /// </summary>
    double getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();
    void setPrice(double value);

    /// <summary>
    /// Order identifier
    /// </summary>
    int64_t getOrderId() const;
    bool orderIdIsSet() const;
    void unsetOrder_id();
    void setOrderId(int64_t value);


protected:
    utility::string_t m_Symbol;
    bool m_SymbolIsSet;

    int64_t m_Timestamp_nanos;
    bool m_Timestamp_nanosIsSet;

    utility::datetime m_Timestamp;
    bool m_TimestampIsSet;

    bool m_Is_side_buy;
    bool m_Is_side_buyIsSet;

    int32_t m_Size;
    bool m_SizeIsSet;

    double m_Price;
    bool m_PriceIsSet;

    int64_t m_Order_id;
    bool m_Order_idIsSet;

};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Level3_AddOrderModel_H_ */
