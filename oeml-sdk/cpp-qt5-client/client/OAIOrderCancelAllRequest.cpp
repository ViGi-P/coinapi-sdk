/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIOrderCancelAllRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderCancelAllRequest::OAIOrderCancelAllRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderCancelAllRequest::OAIOrderCancelAllRequest() {
    this->initializeModel();
}

OAIOrderCancelAllRequest::~OAIOrderCancelAllRequest() {}

void OAIOrderCancelAllRequest::initializeModel() {

    m_exchange_id_isSet = false;
    m_exchange_id_isValid = false;
}

void OAIOrderCancelAllRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderCancelAllRequest::fromJsonObject(QJsonObject json) {

    m_exchange_id_isValid = ::OpenAPI::fromJsonValue(exchange_id, json[QString("exchange_id")]);
    m_exchange_id_isSet = !json[QString("exchange_id")].isNull() && m_exchange_id_isValid;
}

QString OAIOrderCancelAllRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderCancelAllRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_exchange_id_isSet) {
        obj.insert(QString("exchange_id"), ::OpenAPI::toJsonValue(exchange_id));
    }
    return obj;
}

QString OAIOrderCancelAllRequest::getExchangeId() const {
    return exchange_id;
}
void OAIOrderCancelAllRequest::setExchangeId(const QString &exchange_id) {
    this->exchange_id = exchange_id;
    this->m_exchange_id_isSet = true;
}

bool OAIOrderCancelAllRequest::is_exchange_id_Set() const{
    return m_exchange_id_isSet;
}

bool OAIOrderCancelAllRequest::is_exchange_id_Valid() const{
    return m_exchange_id_isValid;
}

bool OAIOrderCancelAllRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_exchange_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOrderCancelAllRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_exchange_id_isValid && true;
}

} // namespace OpenAPI