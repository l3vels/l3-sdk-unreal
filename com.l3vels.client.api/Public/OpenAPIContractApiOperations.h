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

#include "com.l3vels.client.model/OpenAPISetContractUriDto.h"
#include "com.l3vels.client.model/OpenAPISetSaleStatusDto.h"

namespace OpenAPI
{

/* Collection size
 *
 * Get size of collection
*/
class OPENAPI_API OpenAPIContractApi::ContractControllerCollectionSizeRequest : public Request
{
public:
    virtual ~ContractControllerCollectionSizeRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple projects. Please include it in to use developers API. */
	FString Authorization;
	FString CollectionId;
	FString ProjectId;
};

class OPENAPI_API OpenAPIContractApi::ContractControllerCollectionSizeResponse : public Response
{
public:
    virtual ~ContractControllerCollectionSizeResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Get Contract URI
 *
 * Gets contract uri of contract
*/
class OPENAPI_API OpenAPIContractApi::ContractControllerContractUriRequest : public Request
{
public:
    virtual ~ContractControllerContractUriRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple projects. Please include it in to use developers API. */
	FString Authorization;
	FString CollectionId;
	FString ProjectId;
};

class OPENAPI_API OpenAPIContractApi::ContractControllerContractUriResponse : public Response
{
public:
    virtual ~ContractControllerContractUriResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Update Contract URI
 *
 * Update Contract URI
*/
class OPENAPI_API OpenAPIContractApi::ContractControllerSetContractUriRequest : public Request
{
public:
    virtual ~ContractControllerSetContractUriRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple projects. Please include it in to use developers API. */
	FString Authorization;
	OpenAPISetContractUriDto OpenAPISetContractUriDto;
};

class OPENAPI_API OpenAPIContractApi::ContractControllerSetContractUriResponse : public Response
{
public:
    virtual ~ContractControllerSetContractUriResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Update Sale status
 *
 * Update Sale status to PAUSED, PRE_SALE or PUBLIC
*/
class OPENAPI_API OpenAPIContractApi::ContractControllerSetSaleStatusRequest : public Request
{
public:
    virtual ~ContractControllerSetSaleStatusRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple projects. Please include it in to use developers API. */
	FString Authorization;
	OpenAPISetSaleStatusDto OpenAPISetSaleStatusDto;
};

class OPENAPI_API OpenAPIContractApi::ContractControllerSetSaleStatusResponse : public Response
{
public:
    virtual ~ContractControllerSetSaleStatusResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

}