/**
 * FX Historical REST API
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
 * V1_TimeseriesPeriod.h
 *
 * Represents a timeseries period used in exchange rate data.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V1_TimeseriesPeriod_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V1_TimeseriesPeriod_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// Represents a timeseries period used in exchange rate data.
/// </summary>
class  V1_TimeseriesPeriod
    : public ModelBase
{
public:
    V1_TimeseriesPeriod();
    virtual ~V1_TimeseriesPeriod();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;


    /////////////////////////////////////////////
    /// V1_TimeseriesPeriod members


    /// <summary>
    /// The period ID.
    /// </summary>
    utility::string_t getPeriodId() const;
    bool periodIdIsSet() const;
    void unsetPeriod_id();
    void setPeriodId(const utility::string_t& value);

    /// <summary>
    /// The length of the period in seconds.
    /// </summary>
    int32_t getLengthSeconds() const;
    bool lengthSecondsIsSet() const;
    void unsetLength_seconds();
    void setLengthSeconds(int32_t value);

    /// <summary>
    /// The length of the period in months.
    /// </summary>
    int32_t getLengthMonths() const;
    bool lengthMonthsIsSet() const;
    void unsetLength_months();
    void setLengthMonths(int32_t value);

    /// <summary>
    /// The unit count.
    /// </summary>
    int32_t getUnitCount() const;
    bool unitCountIsSet() const;
    void unsetUnit_count();
    void setUnitCount(int32_t value);

    /// <summary>
    /// The unit name.
    /// </summary>
    utility::string_t getUnitName() const;
    bool unitNameIsSet() const;
    void unsetUnit_name();
    void setUnitName(const utility::string_t& value);

    /// <summary>
    /// The display name of the timeseries period.
    /// </summary>
    utility::string_t getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetDisplay_name();
    void setDisplayName(const utility::string_t& value);


protected:
    utility::string_t m_Period_id;
    bool m_Period_idIsSet;

    int32_t m_Length_seconds;
    bool m_Length_secondsIsSet;

    int32_t m_Length_months;
    bool m_Length_monthsIsSet;

    int32_t m_Unit_count;
    bool m_Unit_countIsSet;

    utility::string_t m_Unit_name;
    bool m_Unit_nameIsSet;

    utility::string_t m_Display_name;
    bool m_Display_nameIsSet;

};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V1_TimeseriesPeriod_H_ */
