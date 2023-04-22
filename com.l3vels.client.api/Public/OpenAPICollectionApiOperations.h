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
#include "OpenAPICollectionApi.h"

#include "com.l3vels.client.model/OpenAPICollection.h"

namespace OpenAPI
{

/* Count collections
 *
 * Count total collections in game.
*/
class OPENAPI_API OpenAPICollectionApi::CountCollectionsByGameIdRequest : public Request
{
public:
    virtual ~CountCollectionsByGameIdRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple games. Please include it in to use developers API. */
	FString Authorization;
	/* Game ID to count collections in */
	FString GameId;
};

class OPENAPI_API OpenAPICollectionApi::CountCollectionsByGameIdResponse : public Response
{
public:
    virtual ~CountCollectionsByGameIdResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    double Content;
};

/* Retrieve collection by ID
 *
 * This API method retrieves a specific collection based on the unique identifier provided in the request.
*/
class OPENAPI_API OpenAPICollectionApi::GetCollectionByIdRequest : public Request
{
public:
    virtual ~GetCollectionByIdRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple games. Please include it in to use developers API. */
	FString Authorization;
	/* Collection ID to find */
	FString Id;
	/* Game ID to find collection in */
	FString GameId;
};

class OPENAPI_API OpenAPICollectionApi::GetCollectionByIdResponse : public Response
{
public:
    virtual ~GetCollectionByIdResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICollection Content;
};

/* Retrieve collections
 *
 * This API method retrieves a list of collections that match the specified filter criteria. Developers can use this method to retrieve collections by name, category, status, or other properties.
*/
class OPENAPI_API OpenAPICollectionApi::GetCollectionsRequest : public Request
{
public:
    virtual ~GetCollectionsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple games. Please include it in to use developers API. */
	FString Authorization;
	/* Game ID to find collections in your game. Example: Fortnite, Minecraft, etc. */
	FString GameId;
	/* Collection field to sort by. You can sort by name, created_on and etc. */
	TOptional<FString> Sort;
	/* Sort order (ASC for ascending or DESC for descending) */
	TOptional<FString> Order;
	/* Search collections by name */
	TOptional<FString> SearchText;
	/* Number of collections to return per page */
	TOptional<double> Limit;
	/* Page number */
	TOptional<double> Page;
};

class OPENAPI_API OpenAPICollectionApi::GetCollectionsResponse : public Response
{
public:
    virtual ~GetCollectionsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPICollection> Content;
};

}
