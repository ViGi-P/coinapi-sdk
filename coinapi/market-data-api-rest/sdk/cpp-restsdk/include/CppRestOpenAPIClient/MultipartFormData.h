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
 * MultipartFormData.h
 *
 * This class represents a container for building application/x-multipart-formdata requests.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_MultipartFormData_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_MultipartFormData_H_


#include "CppRestOpenAPIClient/IHttpBody.h"
#include "CppRestOpenAPIClient/HttpContent.h"

#include <cpprest/details/basic_types.h>

#include <vector>
#include <map>
#include <memory>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class  MultipartFormData
    : public IHttpBody
{
public:
    MultipartFormData();
    MultipartFormData(const utility::string_t& boundary);
    virtual ~MultipartFormData();

    virtual void add( std::shared_ptr<HttpContent> content );
    virtual utility::string_t getBoundary();
    virtual std::shared_ptr<HttpContent> getContent(const utility::string_t& name) const;
    virtual bool hasContent(const utility::string_t& name) const;
    virtual void writeTo( std::ostream& target );

protected:
    std::vector<std::shared_ptr<HttpContent>> m_Contents;
    utility::string_t m_Boundary;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> m_ContentLookup;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_MultipartFormData_H_ */
