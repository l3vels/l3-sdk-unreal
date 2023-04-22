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
#include "OpenAPIGameApi.h"

#include "com.l3vels.client.model/OpenAPIGame.h"

namespace OpenAPI
{

/* Retrieve Game
 *
 * Get Game by ID created on the platform.
*/
class OPENAPI_API OpenAPIGameApi::GetGameByIdRequest : public Request
{
public:
    virtual ~GetGameByIdRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple games. Please include it in to use developers API. */
	FString Authorization;
	/* Game or Game Id */
	FString Id;
};

class OPENAPI_API OpenAPIGameApi::GetGameByIdResponse : public Response
{
public:
    virtual ~GetGameByIdResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIGame Content;
};

}
