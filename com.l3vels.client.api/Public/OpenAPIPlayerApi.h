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

class OPENAPI_API OpenAPIPlayerApi
{
public:
	OpenAPIPlayerApi();
	~OpenAPIPlayerApi();

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

	class PlayerAssetControllerPlayerAssetByIdRequest;
	class PlayerAssetControllerPlayerAssetByIdResponse;
	class PlayerAssetControllerPlayerAssetsRequest;
	class PlayerAssetControllerPlayerAssetsResponse;
	class PlayerControllerCreatePlayerRequest;
	class PlayerControllerCreatePlayerResponse;
	class PlayerControllerDeletePlayerRequest;
	class PlayerControllerDeletePlayerResponse;
	class PlayerControllerGetPlayersRequest;
	class PlayerControllerGetPlayersResponse;
	class PlayerControllerPlayerByIdRequest;
	class PlayerControllerPlayerByIdResponse;
	class PlayerControllerPlayersCountByGameIdRequest;
	class PlayerControllerPlayersCountByGameIdResponse;
	class PlayerControllerUpdatePlayerRequest;
	class PlayerControllerUpdatePlayerResponse;
	
    DECLARE_DELEGATE_OneParam(FPlayerAssetControllerPlayerAssetByIdDelegate, const PlayerAssetControllerPlayerAssetByIdResponse&);
    DECLARE_DELEGATE_OneParam(FPlayerAssetControllerPlayerAssetsDelegate, const PlayerAssetControllerPlayerAssetsResponse&);
    DECLARE_DELEGATE_OneParam(FPlayerControllerCreatePlayerDelegate, const PlayerControllerCreatePlayerResponse&);
    DECLARE_DELEGATE_OneParam(FPlayerControllerDeletePlayerDelegate, const PlayerControllerDeletePlayerResponse&);
    DECLARE_DELEGATE_OneParam(FPlayerControllerGetPlayersDelegate, const PlayerControllerGetPlayersResponse&);
    DECLARE_DELEGATE_OneParam(FPlayerControllerPlayerByIdDelegate, const PlayerControllerPlayerByIdResponse&);
    DECLARE_DELEGATE_OneParam(FPlayerControllerPlayersCountByGameIdDelegate, const PlayerControllerPlayersCountByGameIdResponse&);
    DECLARE_DELEGATE_OneParam(FPlayerControllerUpdatePlayerDelegate, const PlayerControllerUpdatePlayerResponse&);
    
    FHttpRequestPtr PlayerAssetControllerPlayerAssetById(const PlayerAssetControllerPlayerAssetByIdRequest& Request, const FPlayerAssetControllerPlayerAssetByIdDelegate& Delegate = FPlayerAssetControllerPlayerAssetByIdDelegate()) const;
    FHttpRequestPtr PlayerAssetControllerPlayerAssets(const PlayerAssetControllerPlayerAssetsRequest& Request, const FPlayerAssetControllerPlayerAssetsDelegate& Delegate = FPlayerAssetControllerPlayerAssetsDelegate()) const;
    FHttpRequestPtr PlayerControllerCreatePlayer(const PlayerControllerCreatePlayerRequest& Request, const FPlayerControllerCreatePlayerDelegate& Delegate = FPlayerControllerCreatePlayerDelegate()) const;
    FHttpRequestPtr PlayerControllerDeletePlayer(const PlayerControllerDeletePlayerRequest& Request, const FPlayerControllerDeletePlayerDelegate& Delegate = FPlayerControllerDeletePlayerDelegate()) const;
    FHttpRequestPtr PlayerControllerGetPlayers(const PlayerControllerGetPlayersRequest& Request, const FPlayerControllerGetPlayersDelegate& Delegate = FPlayerControllerGetPlayersDelegate()) const;
    FHttpRequestPtr PlayerControllerPlayerById(const PlayerControllerPlayerByIdRequest& Request, const FPlayerControllerPlayerByIdDelegate& Delegate = FPlayerControllerPlayerByIdDelegate()) const;
    FHttpRequestPtr PlayerControllerPlayersCountByGameId(const PlayerControllerPlayersCountByGameIdRequest& Request, const FPlayerControllerPlayersCountByGameIdDelegate& Delegate = FPlayerControllerPlayersCountByGameIdDelegate()) const;
    FHttpRequestPtr PlayerControllerUpdatePlayer(const PlayerControllerUpdatePlayerRequest& Request, const FPlayerControllerUpdatePlayerDelegate& Delegate = FPlayerControllerUpdatePlayerDelegate()) const;
    
private:
    void OnPlayerAssetControllerPlayerAssetByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPlayerAssetControllerPlayerAssetByIdDelegate Delegate) const;
    void OnPlayerAssetControllerPlayerAssetsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPlayerAssetControllerPlayerAssetsDelegate Delegate) const;
    void OnPlayerControllerCreatePlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPlayerControllerCreatePlayerDelegate Delegate) const;
    void OnPlayerControllerDeletePlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPlayerControllerDeletePlayerDelegate Delegate) const;
    void OnPlayerControllerGetPlayersResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPlayerControllerGetPlayersDelegate Delegate) const;
    void OnPlayerControllerPlayerByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPlayerControllerPlayerByIdDelegate Delegate) const;
    void OnPlayerControllerPlayersCountByGameIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPlayerControllerPlayersCountByGameIdDelegate Delegate) const;
    void OnPlayerControllerUpdatePlayerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FPlayerControllerUpdatePlayerDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
