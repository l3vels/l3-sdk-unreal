/**
 * L3vels Api
 * L3vels API for Game developers
 *
 * OpenAPI spec version: 0.3
 * Contact: support@l3vels.xyz
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIDefaultApi.h"


namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIDefaultApi::ChatControllerGetSqlReportRequest : public Request
{
public:
    virtual ~ChatControllerGetSqlReportRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Sql;
};

class OPENAPI_API OpenAPIDefaultApi::ChatControllerGetSqlReportResponse : public Response
{
public:
    virtual ~ChatControllerGetSqlReportResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* 

*/
class OPENAPI_API OpenAPIDefaultApi::ChatControllerWebhookRequest : public Request
{
public:
    virtual ~ChatControllerWebhookRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPIDefaultApi::ChatControllerWebhookResponse : public Response
{
public:
    virtual ~ChatControllerWebhookResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

}
