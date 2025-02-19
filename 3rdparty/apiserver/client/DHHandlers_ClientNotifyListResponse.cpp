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

#include "DHHandlers_ClientNotifyListResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "DHHelpers.h"

namespace DeepinHomeAPI {

DHHandlers_ClientNotifyListResponse::DHHandlers_ClientNotifyListResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

DHHandlers_ClientNotifyListResponse::DHHandlers_ClientNotifyListResponse() {
    this->initializeModel();
}

DHHandlers_ClientNotifyListResponse::~DHHandlers_ClientNotifyListResponse() {}

void DHHandlers_ClientNotifyListResponse::initializeModel() {

    m_content_isSet = false;
    m_content_isValid = false;

    m_end_at_isSet = false;
    m_end_at_isValid = false;

    m_notify_isSet = false;
    m_notify_isValid = false;

    m_start_at_isSet = false;
    m_start_at_isValid = false;

    m_summary_isSet = false;
    m_summary_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_uuid_isSet = false;
    m_uuid_isValid = false;
}

void DHHandlers_ClientNotifyListResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void DHHandlers_ClientNotifyListResponse::fromJsonObject(QJsonObject json) {

    m_content_isValid = ::DeepinHomeAPI::fromJsonValue(content, json[QString("content")]);
    m_content_isSet = !json[QString("content")].isNull() && m_content_isValid;

    m_end_at_isValid = ::DeepinHomeAPI::fromJsonValue(end_at, json[QString("end_at")]);
    m_end_at_isSet = !json[QString("end_at")].isNull() && m_end_at_isValid;

    m_notify_isValid = ::DeepinHomeAPI::fromJsonValue(notify, json[QString("notify")]);
    m_notify_isSet = !json[QString("notify")].isNull() && m_notify_isValid;

    m_start_at_isValid = ::DeepinHomeAPI::fromJsonValue(start_at, json[QString("start_at")]);
    m_start_at_isSet = !json[QString("start_at")].isNull() && m_start_at_isValid;

    m_summary_isValid = ::DeepinHomeAPI::fromJsonValue(summary, json[QString("summary")]);
    m_summary_isSet = !json[QString("summary")].isNull() && m_summary_isValid;

    m_title_isValid = ::DeepinHomeAPI::fromJsonValue(title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_url_isValid = ::DeepinHomeAPI::fromJsonValue(url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_uuid_isValid = ::DeepinHomeAPI::fromJsonValue(uuid, json[QString("uuid")]);
    m_uuid_isSet = !json[QString("uuid")].isNull() && m_uuid_isValid;
}

QString DHHandlers_ClientNotifyListResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject DHHandlers_ClientNotifyListResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_content_isSet) {
        obj.insert(QString("content"), ::DeepinHomeAPI::toJsonValue(content));
    }
    if (m_end_at_isSet) {
        obj.insert(QString("end_at"), ::DeepinHomeAPI::toJsonValue(end_at));
    }
    if (m_notify_isSet) {
        obj.insert(QString("notify"), ::DeepinHomeAPI::toJsonValue(notify));
    }
    if (m_start_at_isSet) {
        obj.insert(QString("start_at"), ::DeepinHomeAPI::toJsonValue(start_at));
    }
    if (m_summary_isSet) {
        obj.insert(QString("summary"), ::DeepinHomeAPI::toJsonValue(summary));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::DeepinHomeAPI::toJsonValue(title));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::DeepinHomeAPI::toJsonValue(url));
    }
    if (m_uuid_isSet) {
        obj.insert(QString("uuid"), ::DeepinHomeAPI::toJsonValue(uuid));
    }
    return obj;
}

QString DHHandlers_ClientNotifyListResponse::getContent() const {
    return content;
}
void DHHandlers_ClientNotifyListResponse::setContent(const QString &content) {
    this->content = content;
    this->m_content_isSet = true;
}

bool DHHandlers_ClientNotifyListResponse::is_content_Set() const{
    return m_content_isSet;
}

bool DHHandlers_ClientNotifyListResponse::is_content_Valid() const{
    return m_content_isValid;
}

QString DHHandlers_ClientNotifyListResponse::getEndAt() const {
    return end_at;
}
void DHHandlers_ClientNotifyListResponse::setEndAt(const QString &end_at) {
    this->end_at = end_at;
    this->m_end_at_isSet = true;
}

bool DHHandlers_ClientNotifyListResponse::is_end_at_Set() const{
    return m_end_at_isSet;
}

bool DHHandlers_ClientNotifyListResponse::is_end_at_Valid() const{
    return m_end_at_isValid;
}

bool DHHandlers_ClientNotifyListResponse::isNotify() const {
    return notify;
}
void DHHandlers_ClientNotifyListResponse::setNotify(const bool &notify) {
    this->notify = notify;
    this->m_notify_isSet = true;
}

bool DHHandlers_ClientNotifyListResponse::is_notify_Set() const{
    return m_notify_isSet;
}

bool DHHandlers_ClientNotifyListResponse::is_notify_Valid() const{
    return m_notify_isValid;
}

QString DHHandlers_ClientNotifyListResponse::getStartAt() const {
    return start_at;
}
void DHHandlers_ClientNotifyListResponse::setStartAt(const QString &start_at) {
    this->start_at = start_at;
    this->m_start_at_isSet = true;
}

bool DHHandlers_ClientNotifyListResponse::is_start_at_Set() const{
    return m_start_at_isSet;
}

bool DHHandlers_ClientNotifyListResponse::is_start_at_Valid() const{
    return m_start_at_isValid;
}

QString DHHandlers_ClientNotifyListResponse::getSummary() const {
    return summary;
}
void DHHandlers_ClientNotifyListResponse::setSummary(const QString &summary) {
    this->summary = summary;
    this->m_summary_isSet = true;
}

bool DHHandlers_ClientNotifyListResponse::is_summary_Set() const{
    return m_summary_isSet;
}

bool DHHandlers_ClientNotifyListResponse::is_summary_Valid() const{
    return m_summary_isValid;
}

QString DHHandlers_ClientNotifyListResponse::getTitle() const {
    return title;
}
void DHHandlers_ClientNotifyListResponse::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

bool DHHandlers_ClientNotifyListResponse::is_title_Set() const{
    return m_title_isSet;
}

bool DHHandlers_ClientNotifyListResponse::is_title_Valid() const{
    return m_title_isValid;
}

QString DHHandlers_ClientNotifyListResponse::getUrl() const {
    return url;
}
void DHHandlers_ClientNotifyListResponse::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

bool DHHandlers_ClientNotifyListResponse::is_url_Set() const{
    return m_url_isSet;
}

bool DHHandlers_ClientNotifyListResponse::is_url_Valid() const{
    return m_url_isValid;
}

QString DHHandlers_ClientNotifyListResponse::getUuid() const {
    return uuid;
}
void DHHandlers_ClientNotifyListResponse::setUuid(const QString &uuid) {
    this->uuid = uuid;
    this->m_uuid_isSet = true;
}

bool DHHandlers_ClientNotifyListResponse::is_uuid_Set() const{
    return m_uuid_isSet;
}

bool DHHandlers_ClientNotifyListResponse::is_uuid_Valid() const{
    return m_uuid_isValid;
}

bool DHHandlers_ClientNotifyListResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_end_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_notify_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_summary_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_uuid_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool DHHandlers_ClientNotifyListResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace DeepinHomeAPI
