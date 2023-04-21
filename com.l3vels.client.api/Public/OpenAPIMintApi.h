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

class OPENAPI_API OpenAPIMintApi
{
public:
	OpenAPIMintApi();
	~OpenAPIMintApi();

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

	class MintControllerAirdropRequest;
	class MintControllerAirdropResponse;
	class MintControllerAwardRequest;
	class MintControllerAwardResponse;
	class MintControllerMintRequest;
	class MintControllerMintResponse;
	class MintControllerMintBatchRequest;
	class MintControllerMintBatchResponse;
	class MintControllerPlayerMintRequest;
	class MintControllerPlayerMintResponse;
	class MintControllerPlayerMintBatchRequest;
	class MintControllerPlayerMintBatchResponse;
	
    DECLARE_DELEGATE_OneParam(FMintControllerAirdropDelegate, const MintControllerAirdropResponse&);
    DECLARE_DELEGATE_OneParam(FMintControllerAwardDelegate, const MintControllerAwardResponse&);
    DECLARE_DELEGATE_OneParam(FMintControllerMintDelegate, const MintControllerMintResponse&);
    DECLARE_DELEGATE_OneParam(FMintControllerMintBatchDelegate, const MintControllerMintBatchResponse&);
    DECLARE_DELEGATE_OneParam(FMintControllerPlayerMintDelegate, const MintControllerPlayerMintResponse&);
    DECLARE_DELEGATE_OneParam(FMintControllerPlayerMintBatchDelegate, const MintControllerPlayerMintBatchResponse&);
    
    FHttpRequestPtr MintControllerAirdrop(const MintControllerAirdropRequest& Request, const FMintControllerAirdropDelegate& Delegate = FMintControllerAirdropDelegate()) const;
    FHttpRequestPtr MintControllerAward(const MintControllerAwardRequest& Request, const FMintControllerAwardDelegate& Delegate = FMintControllerAwardDelegate()) const;
    FHttpRequestPtr MintControllerMint(const MintControllerMintRequest& Request, const FMintControllerMintDelegate& Delegate = FMintControllerMintDelegate()) const;
    FHttpRequestPtr MintControllerMintBatch(const MintControllerMintBatchRequest& Request, const FMintControllerMintBatchDelegate& Delegate = FMintControllerMintBatchDelegate()) const;
    FHttpRequestPtr MintControllerPlayerMint(const MintControllerPlayerMintRequest& Request, const FMintControllerPlayerMintDelegate& Delegate = FMintControllerPlayerMintDelegate()) const;
    FHttpRequestPtr MintControllerPlayerMintBatch(const MintControllerPlayerMintBatchRequest& Request, const FMintControllerPlayerMintBatchDelegate& Delegate = FMintControllerPlayerMintBatchDelegate()) const;
    
private:
    void OnMintControllerAirdropResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FMintControllerAirdropDelegate Delegate) const;
    void OnMintControllerAwardResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FMintControllerAwardDelegate Delegate) const;
    void OnMintControllerMintResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FMintControllerMintDelegate Delegate) const;
    void OnMintControllerMintBatchResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FMintControllerMintBatchDelegate Delegate) const;
    void OnMintControllerPlayerMintResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FMintControllerPlayerMintDelegate Delegate) const;
    void OnMintControllerPlayerMintBatchResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FMintControllerPlayerMintBatchDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
