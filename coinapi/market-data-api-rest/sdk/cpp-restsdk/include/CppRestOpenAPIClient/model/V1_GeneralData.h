/**
 * CoinAPI Market Data REST API
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
 * V1_GeneralData.h
 *
 * Class representation of general metric data. This class is an XML type with name &#39;general_data&#39; and inherits from the BaseCsvModel class.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V1_GeneralData_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V1_GeneralData_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// Class representation of general metric data. This class is an XML type with name &#39;general_data&#39; and inherits from the BaseCsvModel class.
/// </summary>
class  V1_GeneralData
    : public ModelBase
{
public:
    V1_GeneralData();
    virtual ~V1_GeneralData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;


    /////////////////////////////////////////////
    /// V1_GeneralData members


    /// <summary>
    /// Gets or sets the entry time for the data point.
    /// </summary>
    utility::datetime getEntryTime() const;
    bool entryTimeIsSet() const;
    void unsetEntry_time();
    void setEntryTime(const utility::datetime& value);

    /// <summary>
    /// Gets or sets the received time for the data point.
    /// </summary>
    utility::datetime getRecvTime() const;
    bool recvTimeIsSet() const;
    void unsetRecv_time();
    void setRecvTime(const utility::datetime& value);

    /// <summary>
    /// Gets or sets the identifier for the exchange.
    /// </summary>
    utility::string_t getExchangeId() const;
    bool exchangeIdIsSet() const;
    void unsetExchange_id();
    void setExchangeId(const utility::string_t& value);

    /// <summary>
    /// Gets or sets the identifier for the asset.
    /// </summary>
    utility::string_t getAssetId() const;
    bool assetIdIsSet() const;
    void unsetAsset_id();
    void setAssetId(const utility::string_t& value);

    /// <summary>
    /// Gets or sets the identifier for the symbol.
    /// </summary>
    utility::string_t getSymbolId() const;
    bool symbolIdIsSet() const;
    void unsetSymbol_id();
    void setSymbolId(const utility::string_t& value);

    /// <summary>
    /// Gets or sets the identifier for the metric.
    /// </summary>
    utility::string_t getMetricId() const;
    bool metricIdIsSet() const;
    void unsetMetric_id();
    void setMetricId(const utility::string_t& value);

    /// <summary>
    /// Gets or sets the decimal value for the metric.
    /// </summary>
    double getValueDecimal() const;
    bool valueDecimalIsSet() const;
    void unsetValue_decimal();
    void setValueDecimal(double value);

    /// <summary>
    /// Gets or sets the textual representation of the value for the metric.
    /// </summary>
    utility::string_t getValueText() const;
    bool valueTextIsSet() const;
    void unsetValue_text();
    void setValueText(const utility::string_t& value);

    /// <summary>
    /// Gets or sets the timestamp value for the metric.
    /// </summary>
    utility::datetime getValueTime() const;
    bool valueTimeIsSet() const;
    void unsetValue_time();
    void setValueTime(const utility::datetime& value);


protected:
    utility::datetime m_Entry_time;
    bool m_Entry_timeIsSet;

    utility::datetime m_Recv_time;
    bool m_Recv_timeIsSet;

    utility::string_t m_Exchange_id;
    bool m_Exchange_idIsSet;

    utility::string_t m_Asset_id;
    bool m_Asset_idIsSet;

    utility::string_t m_Symbol_id;
    bool m_Symbol_idIsSet;

    utility::string_t m_Metric_id;
    bool m_Metric_idIsSet;

    double m_Value_decimal;
    bool m_Value_decimalIsSet;

    utility::string_t m_Value_text;
    bool m_Value_textIsSet;

    utility::datetime m_Value_time;
    bool m_Value_timeIsSet;

};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V1_GeneralData_H_ */
