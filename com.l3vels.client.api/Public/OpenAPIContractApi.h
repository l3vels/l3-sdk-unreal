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

	class CountContractsByGameIdRequest;
	class CountContractsByGameIdResponse;
	class GetContractURIRequest;
	class GetContractURIResponse;
	class SetContractURIRequest;
	class SetContractURIResponse;
	class UpdateSaleStatusRequest;
	class UpdateSaleStatusResponse;
	
    DECLARE_DELEGATE_OneParam(FCountContractsByGameIdDelegate, const CountContractsByGameIdResponse&);
    DECLARE_DELEGATE_OneParam(FGetContractURIDelegate, const GetContractURIResponse&);
    DECLARE_DELEGATE_OneParam(FSetContractURIDelegate, const SetContractURIResponse&);
    DECLARE_DELEGATE_OneParam(FUpdateSaleStatusDelegate, const UpdateSaleStatusResponse&);
    
    FHttpRequestPtr CountContractsByGameId(const CountContractsByGameIdRequest& Request, const FCountContractsByGameIdDelegate& Delegate = FCountContractsByGameIdDelegate()) const;
    FHttpRequestPtr GetContractURI(const GetContractURIRequest& Request, const FGetContractURIDelegate& Delegate = FGetContractURIDelegate()) const;
    FHttpRequestPtr SetContractURI(const SetContractURIRequest& Request, const FSetContractURIDelegate& Delegate = FSetContractURIDelegate()) const;
    FHttpRequestPtr UpdateSaleStatus(const UpdateSaleStatusRequest& Request, const FUpdateSaleStatusDelegate& Delegate = FUpdateSaleStatusDelegate()) const;
    
private:
    void OnCountContractsByGameIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCountContractsByGameIdDelegate Delegate) const;
    void OnGetContractURIResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetContractURIDelegate Delegate) const;
    void OnSetContractURIResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSetContractURIDelegate Delegate) const;
    void OnUpdateSaleStatusResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateSaleStatusDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
