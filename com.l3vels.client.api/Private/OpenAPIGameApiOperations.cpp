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

#include "OpenAPIGameApiOperations.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace OpenAPI
{

FString OpenAPIGameApi::ProjectControllerProjectByIdRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), ToStringFormatArg(Id) } };

	FString Path = FString::Format(TEXT("/v1/game/{id}"), PathParams);

	return Path;
}

void OpenAPIGameApi::ProjectControllerProjectByIdRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIGameApi::ProjectControllerProjectByIdResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The game/project has been found."));
		break;
	case 400:
		SetResponseString(TEXT("Bad Request, The request was unacceptable, often due to missing a required parameter."));
		break;
	case 401:
		SetResponseString(TEXT("Unauthorized, No valid API key provided."));
		break;
	case 404:
		SetResponseString(TEXT("Not Found, The requested resource doesn&#39;t exist."));
		break;
	case 409:
		SetResponseString(TEXT("Conflict, The request conflicts with another request (perhaps due to using the same idempotent key)."));
		break;
	case 429:
		SetResponseString(TEXT("Too Many Requests, Too many requests hit the API too quickly. We recommend an exponential backoff of your requests."));
		break;
	case 500:
		SetResponseString(TEXT("Server Errors, Something went wrong on L3vels&#39;s end."));
		break;
	case 504:
		SetResponseString(TEXT("Gateway Timeout, Your request took too long."));
		break;
	}
}

bool OpenAPIGameApi::ProjectControllerProjectByIdResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}