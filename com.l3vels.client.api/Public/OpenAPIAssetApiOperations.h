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
#include "OpenAPIAssetApi.h"

#include "com.l3vels.client.model/OpenAPIAsset.h"
#include "com.l3vels.client.model/OpenAPIAssetsResponseDto.h"
#include "com.l3vels.client.model/OpenAPIUpdateAssetDto.h"

namespace OpenAPI
{

/* Count assets
 *
 * Counts total assets in game.
*/
class OPENAPI_API OpenAPIAssetApi::CountByGameRequest : public Request
{
public:
    virtual ~CountByGameRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple projects. Please include it in to use developers API. */
	FString Authorization;
	FString ProjectId;
};

class OPENAPI_API OpenAPIAssetApi::CountByGameResponse : public Response
{
public:
    virtual ~CountByGameResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    double Content;
};

/* Retrieve asset by ID
 *
 * Retrieve asset by ID in specific game/project. Example: Find asset AK-47 in game Call of Duty
*/
class OPENAPI_API OpenAPIAssetApi::GetAssetByIdRequest : public Request
{
public:
    virtual ~GetAssetByIdRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple projects. Please include it in to use developers API. */
	FString Authorization;
	/* Asset ID to find */
	FString Id;
	/* Game/project ID to find asset in */
	FString ProjectId;
};

class OPENAPI_API OpenAPIAssetApi::GetAssetByIdResponse : public Response
{
public:
    virtual ~GetAssetByIdResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAsset Content;
};

/* Retrieve assets
 *
 * This API method retrieves a list of assets that match the specified filter criteria. Developers can use this method to retrieve assets by name, description or other properties
*/
class OPENAPI_API OpenAPIAssetApi::GetAssetsRequest : public Request
{
public:
    virtual ~GetAssetsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple projects. Please include it in to use developers API. */
	FString Authorization;
	/* Game/project ID to find assets in your game. Example: Fortnite, Minecraft, etc. */
	FString ProjectId;
	/* Filter assets by collection. Example: Get assets only from Weapons collection. */
	TOptional<FString> CollectionId;
	/* Asset field to sort by. You can sort by name, created_on and etc. */
	TOptional<FString> Sort;
	enum class OrderEnum
	{
		Asc,
		Desc,
  	};

	static FString EnumToString(const OrderEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, OrderEnum& EnumValue);
	/* Sort order (ASC for ascending or DESC for descending) */
	TOptional<OrderEnum> Order;
	/* Search assets by name */
	TOptional<FString> SearchText;
	/* Number of assets to return per page */
	TOptional<double> Limit;
	/* Page number */
	TOptional<double> Page;
};

class OPENAPI_API OpenAPIAssetApi::GetAssetsResponse : public Response
{
public:
    virtual ~GetAssetsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAssetsResponseDto Content;
};

/* Update asset
 *
 * Update asset by ID in specific collection. Example: Update asset AK-47 in collection Weapons
*/
class OPENAPI_API OpenAPIAssetApi::UpdateAssetRequest : public Request
{
public:
    virtual ~UpdateAssetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple projects. Please include it in to use developers API. */
	FString Authorization;
	/* Asset ID to update */
	FString Id;
	OpenAPIUpdateAssetDto OpenAPIUpdateAssetDto;
};

class OPENAPI_API OpenAPIAssetApi::UpdateAssetResponse : public Response
{
public:
    virtual ~UpdateAssetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAsset Content;
};

}
