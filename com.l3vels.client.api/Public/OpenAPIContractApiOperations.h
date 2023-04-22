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
#include "OpenAPIContractApi.h"

#include "com.l3vels.client.model/OpenAPISetContractUriInput.h"
#include "com.l3vels.client.model/OpenAPISetSaleStatusInput.h"

namespace OpenAPI
{

/* Collection size
 *
 * Count total contract in game.
*/
class OPENAPI_API OpenAPIContractApi::CountContractsByGameIdRequest : public Request
{
public:
    virtual ~CountContractsByGameIdRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple games. Please include it in to use developers API. */
	FString Authorization;
	FString CollectionId;
	FString GameId;
};

class OPENAPI_API OpenAPIContractApi::CountContractsByGameIdResponse : public Response
{
public:
    virtual ~CountContractsByGameIdResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Get Contract URI
 *
 * Gets contract uri of contract
*/
class OPENAPI_API OpenAPIContractApi::GetContractURIRequest : public Request
{
public:
    virtual ~GetContractURIRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple games. Please include it in to use developers API. */
	FString Authorization;
	FString CollectionId;
	FString GameId;
};

class OPENAPI_API OpenAPIContractApi::GetContractURIResponse : public Response
{
public:
    virtual ~GetContractURIResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Update Contract URI
 *
 * Update Contract URI
*/
class OPENAPI_API OpenAPIContractApi::SetContractURIRequest : public Request
{
public:
    virtual ~SetContractURIRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple games. Please include it in to use developers API. */
	FString Authorization;
	OpenAPISetContractUriInput OpenAPISetContractUriInput;
};

class OPENAPI_API OpenAPIContractApi::SetContractURIResponse : public Response
{
public:
    virtual ~SetContractURIResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Update Sale status
 *
 * Update Sale status to PAUSED, PRE_SALE or PUBLIC
*/
class OPENAPI_API OpenAPIContractApi::UpdateSaleStatusRequest : public Request
{
public:
    virtual ~UpdateSaleStatusRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple games. Please include it in to use developers API. */
	FString Authorization;
	OpenAPISetSaleStatusInput OpenAPISetSaleStatusInput;
};

class OPENAPI_API OpenAPIContractApi::UpdateSaleStatusResponse : public Response
{
public:
    virtual ~UpdateSaleStatusResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

}
