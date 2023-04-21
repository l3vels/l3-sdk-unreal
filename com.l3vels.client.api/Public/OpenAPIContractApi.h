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

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

class OPENAPI_API OpenAPIContractApi
{
public:
	OpenAPIContractApi();
	~OpenAPIContractApi();

	/* Sets the URL Endpoint.
	* Note: several fallback endpoints can be configured in request retry policies, see Request::SetShouldRetry */
	void SetURL(const FString& Url);

	/* Adds global header params to all requests */
	void AddHeaderParam(const FString& Key, const FString& Value);
	void ClearHeaderParams();

	/* Sets the retry manager to the user-defined retry manager. User must manage the lifetime of the retry manager.
	* If no retry manager is specified and a request needs retries, a default retry manager will be used.
	* See also: Request::SetShouldRetry */
	void SetHttpRetryManager(FHttpRetrySystem::FManager& RetryManager);
	FHttpRetrySystem::FManager& GetHttpRetryManager();

	class ContractControllerCollectionSizeRequest;
	class ContractControllerCollectionSizeResponse;
	class ContractControllerContractUriRequest;
	class ContractControllerContractUriResponse;
	class ContractControllerSetContractUriRequest;
	class ContractControllerSetContractUriResponse;
	class ContractControllerSetSaleStatusRequest;
	class ContractControllerSetSaleStatusResponse;
	
    DECLARE_DELEGATE_OneParam(FContractControllerCollectionSizeDelegate, const ContractControllerCollectionSizeResponse&);
    DECLARE_DELEGATE_OneParam(FContractControllerContractUriDelegate, const ContractControllerContractUriResponse&);
    DECLARE_DELEGATE_OneParam(FContractControllerSetContractUriDelegate, const ContractControllerSetContractUriResponse&);
    DECLARE_DELEGATE_OneParam(FContractControllerSetSaleStatusDelegate, const ContractControllerSetSaleStatusResponse&);
    
    FHttpRequestPtr ContractControllerCollectionSize(const ContractControllerCollectionSizeRequest& Request, const FContractControllerCollectionSizeDelegate& Delegate = FContractControllerCollectionSizeDelegate()) const;
    FHttpRequestPtr ContractControllerContractUri(const ContractControllerContractUriRequest& Request, const FContractControllerContractUriDelegate& Delegate = FContractControllerContractUriDelegate()) const;
    FHttpRequestPtr ContractControllerSetContractUri(const ContractControllerSetContractUriRequest& Request, const FContractControllerSetContractUriDelegate& Delegate = FContractControllerSetContractUriDelegate()) const;
    FHttpRequestPtr ContractControllerSetSaleStatus(const ContractControllerSetSaleStatusRequest& Request, const FContractControllerSetSaleStatusDelegate& Delegate = FContractControllerSetSaleStatusDelegate()) const;
    
private:
    void OnContractControllerCollectionSizeResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FContractControllerCollectionSizeDelegate Delegate) const;
    void OnContractControllerContractUriResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FContractControllerContractUriDelegate Delegate) const;
    void OnContractControllerSetContractUriResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FContractControllerSetContractUriDelegate Delegate) const;
    void OnContractControllerSetSaleStatusResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FContractControllerSetSaleStatusDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
