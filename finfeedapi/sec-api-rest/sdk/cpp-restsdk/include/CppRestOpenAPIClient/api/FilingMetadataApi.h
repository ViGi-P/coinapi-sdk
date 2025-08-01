/**
 * FinFeedAPI SEC REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.13.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * FilingMetadataApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_FilingMetadataApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_FilingMetadataApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/DTO_FilingMetadataDto.h"
#include "CppRestOpenAPIClient/model/DTO_FilingSortBy.h"
#include "CppRestOpenAPIClient/model/Mvc_ProblemDetails.h"
#include "CppRestOpenAPIClient/model/Mvc_ValidationProblemDetails.h"
#include <vector>
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  FilingMetadataApi 
{
public:

    explicit FilingMetadataApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~FilingMetadataApi();

    /// <summary>
    /// Query SEC filing metadata
    /// </summary>
    /// <remarks>
    /// Retrieves metadata for SEC filings based on various filter criteria with pagination and sorting support.  ### Available Sort Fields  Field Name | Description -----------|------------- AccessionNumber | SEC filing accession number FilingDate | Date when filing was submitted AcceptanceDateTime | Date and time of filing acceptance ReportDate | Date of the report Size | Size of the filing document  ### Date Format All dates must be provided in YYYY-MM-DD format  ### Form Types Form types can be provided as comma-separated values, e.g.: \&quot;10-K,8-K,10-Q\&quot;  :::tip For optimal performance, use date ranges and form types to narrow down your search :::
    /// </remarks>
    /// <param name="cik">Filter by Central Index Key (CIK) (optional, default to 0L)</param>
    /// <param name="ticker">Filter by stock ticker symbol (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="formType">Filter by form type(s) (e.g., \&quot;10-K\&quot;, \&quot;8-K\&quot;). Multiple values can be comma-separated (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="fillingDateStart">Filter by filling date start (inclusive), format YYYY-MM-DD (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="fillingDateEnd">Filter by filling date end (inclusive), format YYYY-MM-DD (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="reportDateStart">Filter by report date start (inclusive), format YYYY-MM-DD (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="reportDateEnd">Filter by report date end (inclusive), format YYYY-MM-DD (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="itemsContain">Filter filings where the &#39;Items&#39; field contains the specified text (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="pageSize">Number of results per page (default: 50, max: 200) (optional, default to 0)</param>
    /// <param name="pageNumber">Page number to retrieve (default: 1) (optional, default to 0)</param>
    /// <param name="sortBy">Field to sort results by (default: AccessionNumber) (optional, default to new DTO_FilingSortBy())</param>
    /// <param name="sortOrder">Sort order (asc or desc, default: desc) (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<std::shared_ptr<DTO_FilingMetadataDto>>> v1FilingsGet(
        boost::optional<int64_t> cik,
        boost::optional<utility::string_t> ticker,
        boost::optional<utility::string_t> formType,
        boost::optional<utility::string_t> fillingDateStart,
        boost::optional<utility::string_t> fillingDateEnd,
        boost::optional<utility::string_t> reportDateStart,
        boost::optional<utility::string_t> reportDateEnd,
        boost::optional<utility::string_t> itemsContain,
        boost::optional<int32_t> pageSize,
        boost::optional<int32_t> pageNumber,
        boost::optional<std::shared_ptr<DTO_FilingSortBy>> sortBy,
        boost::optional<utility::string_t> sortOrder
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_FilingMetadataApi_H_ */

