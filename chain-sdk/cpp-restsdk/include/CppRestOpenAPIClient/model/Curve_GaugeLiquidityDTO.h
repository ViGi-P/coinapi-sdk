/**
 * On Chain Dapps - REST API
 *  This section will provide necessary information about the `OnChain API` protocol.  <br/><br/> Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.                             
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Curve_GaugeLiquidityDTO.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Curve_GaugeLiquidityDTO_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Curve_GaugeLiquidityDTO_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Curve_GaugeLiquidityDTO
    : public ModelBase
{
public:
    Curve_GaugeLiquidityDTO();
    virtual ~Curve_GaugeLiquidityDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Curve_GaugeLiquidityDTO members

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getEntryTime() const;
    bool entryTimeIsSet() const;
    void unsetEntry_time();

    void setEntryTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getRecvTime() const;
    bool recvTimeIsSet() const;
    void unsetRecv_time();

    void setRecvTime(const utility::datetime& value);

    /// <summary>
    /// Number of block in which entity was recorded.
    /// </summary>
    int64_t getBlockNumber() const;
    bool blockNumberIsSet() const;
    void unsetBlock_number();

    void setBlockNumber(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUser() const;
    bool userIsSet() const;
    void unsetUser();

    void setUser(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getGauge() const;
    bool gaugeIsSet() const;
    void unsetGauge();

    void setGauge(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOriginalBalance() const;
    bool originalBalanceIsSet() const;
    void unsetOriginal_balance();

    void setOriginalBalance(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOriginalSupply() const;
    bool originalSupplyIsSet() const;
    void unsetOriginal_supply();

    void setOriginalSupply(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWorkingBalance() const;
    bool workingBalanceIsSet() const;
    void unsetWorking_balance();

    void setWorkingBalance(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWorkingSupply() const;
    bool workingSupplyIsSet() const;
    void unsetWorking_supply();

    void setWorkingSupply(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();

    void setTimestamp(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBlock() const;
    bool blockIsSet() const;
    void unsetBlock();

    void setBlock(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTransaction() const;
    bool transactionIsSet() const;
    void unsetTransaction();

    void setTransaction(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getVid() const;
    bool vidIsSet() const;
    void unsetVid();

    void setVid(int64_t value);


protected:
    utility::datetime m_Entry_time;
    bool m_Entry_timeIsSet;
    utility::datetime m_Recv_time;
    bool m_Recv_timeIsSet;
    int64_t m_Block_number;
    bool m_Block_numberIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_User;
    bool m_UserIsSet;
    utility::string_t m_Gauge;
    bool m_GaugeIsSet;
    utility::string_t m_Original_balance;
    bool m_Original_balanceIsSet;
    utility::string_t m_Original_supply;
    bool m_Original_supplyIsSet;
    utility::string_t m_Working_balance;
    bool m_Working_balanceIsSet;
    utility::string_t m_Working_supply;
    bool m_Working_supplyIsSet;
    utility::string_t m_Timestamp;
    bool m_TimestampIsSet;
    utility::string_t m_Block;
    bool m_BlockIsSet;
    utility::string_t m_Transaction;
    bool m_TransactionIsSet;
    int64_t m_Vid;
    bool m_VidIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Curve_GaugeLiquidityDTO_H_ */