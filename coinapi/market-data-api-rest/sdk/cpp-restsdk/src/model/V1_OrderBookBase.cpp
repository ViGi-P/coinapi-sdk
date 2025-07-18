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



#include "CppRestOpenAPIClient/model/V1_OrderBookBase.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

V1_OrderBookBase::V1_OrderBookBase()
{
    m_Symbol_id = utility::conversions::to_string_t("");
    m_Symbol_idIsSet = false;
    m_Time_exchange = utility::datetime();
    m_Time_exchangeIsSet = false;
    m_Time_coinapi = utility::datetime();
    m_Time_coinapiIsSet = false;
    m_AsksIsSet = false;
    m_BidsIsSet = false;
}

V1_OrderBookBase::~V1_OrderBookBase()
{
}

void V1_OrderBookBase::validate()
{
    // TODO: implement validation
}

web::json::value V1_OrderBookBase::toJson() const
{
    web::json::value val = web::json::value::object();
    if(m_Symbol_idIsSet)
    {   
        
        val[utility::conversions::to_string_t(_XPLATSTR("symbol_id"))] = ModelBase::toJson(m_Symbol_id);
    }
    if(m_Time_exchangeIsSet)
    {   
        
        val[utility::conversions::to_string_t(_XPLATSTR("time_exchange"))] = ModelBase::toJson(m_Time_exchange);
    }
    if(m_Time_coinapiIsSet)
    {   
        
        val[utility::conversions::to_string_t(_XPLATSTR("time_coinapi"))] = ModelBase::toJson(m_Time_coinapi);
    }
    if(m_AsksIsSet)
    {   
        
        val[utility::conversions::to_string_t(_XPLATSTR("asks"))] = ModelBase::toJson(m_Asks);
    }
    if(m_BidsIsSet)
    {   
        
        val[utility::conversions::to_string_t(_XPLATSTR("bids"))] = ModelBase::toJson(m_Bids);
    }

    return val;
}

bool V1_OrderBookBase::fromJson(const web::json::value& val)
{
    bool ok = true;
    if(val.has_field(utility::conversions::to_string_t(_XPLATSTR("symbol_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("symbol_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSymbolId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSymbolId);
            setSymbolId(refVal_setSymbolId);
            
        }
    }
    if(val.has_field(utility::conversions::to_string_t(_XPLATSTR("time_exchange"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("time_exchange")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setTimeExchange;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTimeExchange);
            setTimeExchange(refVal_setTimeExchange);
            
        }
    }
    if(val.has_field(utility::conversions::to_string_t(_XPLATSTR("time_coinapi"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("time_coinapi")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setTimeCoinapi;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTimeCoinapi);
            setTimeCoinapi(refVal_setTimeCoinapi);
            
        }
    }
    if(val.has_field(utility::conversions::to_string_t(_XPLATSTR("asks"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("asks")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AnyType> refVal_setAsks;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAsks);
            setAsks(refVal_setAsks);
            
        }
    }
    if(val.has_field(utility::conversions::to_string_t(_XPLATSTR("bids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(_XPLATSTR("bids")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AnyType> refVal_setBids;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBids);
            setBids(refVal_setBids);
            
        }
    }
    return ok;
}

void V1_OrderBookBase::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(_XPLATSTR(".")))
    {
        namePrefix += utility::conversions::to_string_t(_XPLATSTR("."));
    }
    if(m_Symbol_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(_XPLATSTR("symbol_id")), m_Symbol_id));
    }
    if(m_Time_exchangeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(_XPLATSTR("time_exchange")), m_Time_exchange));
    }
    if(m_Time_coinapiIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(_XPLATSTR("time_coinapi")), m_Time_coinapi));
    }
    if(m_AsksIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(_XPLATSTR("asks")), m_Asks));
    }
    if(m_BidsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(_XPLATSTR("bids")), m_Bids));
    }
}

bool V1_OrderBookBase::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(_XPLATSTR(".")))
    {
        namePrefix += utility::conversions::to_string_t(_XPLATSTR("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("symbol_id"))))
    {
        utility::string_t refVal_setSymbolId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("symbol_id"))), refVal_setSymbolId );
        setSymbolId(refVal_setSymbolId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("time_exchange"))))
    {
        utility::datetime refVal_setTimeExchange;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("time_exchange"))), refVal_setTimeExchange );
        setTimeExchange(refVal_setTimeExchange);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("time_coinapi"))))
    {
        utility::datetime refVal_setTimeCoinapi;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("time_coinapi"))), refVal_setTimeCoinapi );
        setTimeCoinapi(refVal_setTimeCoinapi);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("asks"))))
    {
        std::shared_ptr<AnyType> refVal_setAsks;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("asks"))), refVal_setAsks );
        setAsks(refVal_setAsks);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(_XPLATSTR("bids"))))
    {
        std::shared_ptr<AnyType> refVal_setBids;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(_XPLATSTR("bids"))), refVal_setBids );
        setBids(refVal_setBids);
    }
    return ok;
}


utility::string_t V1_OrderBookBase::getSymbolId() const
{
    return m_Symbol_id;
}


void V1_OrderBookBase::setSymbolId(const utility::string_t& value)
{
    m_Symbol_id = value;
    m_Symbol_idIsSet = true;
}

bool V1_OrderBookBase::symbolIdIsSet() const
{
    return m_Symbol_idIsSet;
}

void V1_OrderBookBase::unsetSymbol_id()
{
    m_Symbol_idIsSet = false;
}
utility::datetime V1_OrderBookBase::getTimeExchange() const
{
    return m_Time_exchange;
}


void V1_OrderBookBase::setTimeExchange(const utility::datetime& value)
{
    m_Time_exchange = value;
    m_Time_exchangeIsSet = true;
}

bool V1_OrderBookBase::timeExchangeIsSet() const
{
    return m_Time_exchangeIsSet;
}

void V1_OrderBookBase::unsetTime_exchange()
{
    m_Time_exchangeIsSet = false;
}
utility::datetime V1_OrderBookBase::getTimeCoinapi() const
{
    return m_Time_coinapi;
}


void V1_OrderBookBase::setTimeCoinapi(const utility::datetime& value)
{
    m_Time_coinapi = value;
    m_Time_coinapiIsSet = true;
}

bool V1_OrderBookBase::timeCoinapiIsSet() const
{
    return m_Time_coinapiIsSet;
}

void V1_OrderBookBase::unsetTime_coinapi()
{
    m_Time_coinapiIsSet = false;
}
std::shared_ptr<AnyType> V1_OrderBookBase::getAsks() const
{
    return m_Asks;
}


void V1_OrderBookBase::setAsks(const std::shared_ptr<AnyType>& value)
{
    m_Asks = value;
    m_AsksIsSet = true;
}

bool V1_OrderBookBase::asksIsSet() const
{
    return m_AsksIsSet;
}

void V1_OrderBookBase::unsetAsks()
{
    m_AsksIsSet = false;
}
std::shared_ptr<AnyType> V1_OrderBookBase::getBids() const
{
    return m_Bids;
}


void V1_OrderBookBase::setBids(const std::shared_ptr<AnyType>& value)
{
    m_Bids = value;
    m_BidsIsSet = true;
}

bool V1_OrderBookBase::bidsIsSet() const
{
    return m_BidsIsSet;
}

void V1_OrderBookBase::unsetBids()
{
    m_BidsIsSet = false;
}

}
}
}
}


