/**
 * Deepin官网
 * deepin的官方网站后台接口
 *
 * The version of the OpenAPI document: 1.0
 * Contact: wurongjie@deepin.org
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "DHHandlers_UserRelationResposne.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "DHHelpers.h"

namespace DeepinHomeAPI {

DHHandlers_UserRelationResposne::DHHandlers_UserRelationResposne(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

DHHandlers_UserRelationResposne::DHHandlers_UserRelationResposne() {
    this->initializeModel();
}

DHHandlers_UserRelationResposne::~DHHandlers_UserRelationResposne() {}

void DHHandlers_UserRelationResposne::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_relation_isSet = false;
    m_relation_isValid = false;
}

void DHHandlers_UserRelationResposne::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void DHHandlers_UserRelationResposne::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::DeepinHomeAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_relation_isValid = ::DeepinHomeAPI::fromJsonValue(relation, json[QString("relation")]);
    m_relation_isSet = !json[QString("relation")].isNull() && m_relation_isValid;
}

QString DHHandlers_UserRelationResposne::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject DHHandlers_UserRelationResposne::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::DeepinHomeAPI::toJsonValue(id));
    }
    if (m_relation_isSet) {
        obj.insert(QString("relation"), ::DeepinHomeAPI::toJsonValue(relation));
    }
    return obj;
}

QString DHHandlers_UserRelationResposne::getId() const {
    return id;
}
void DHHandlers_UserRelationResposne::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool DHHandlers_UserRelationResposne::is_id_Set() const{
    return m_id_isSet;
}

bool DHHandlers_UserRelationResposne::is_id_Valid() const{
    return m_id_isValid;
}

QString DHHandlers_UserRelationResposne::getRelation() const {
    return relation;
}
void DHHandlers_UserRelationResposne::setRelation(const QString &relation) {
    this->relation = relation;
    this->m_relation_isSet = true;
}

bool DHHandlers_UserRelationResposne::is_relation_Set() const{
    return m_relation_isSet;
}

bool DHHandlers_UserRelationResposne::is_relation_Valid() const{
    return m_relation_isValid;
}

bool DHHandlers_UserRelationResposne::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_relation_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool DHHandlers_UserRelationResposne::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace DeepinHomeAPI
