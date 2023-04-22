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

#include "OpenAPIPlayerApiOperations.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace OpenAPI
{

FString OpenAPIPlayerApi::CountPlayersByGameIdRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("game_id"), ToStringFormatArg(GameId) } };

	FString Path = FString::Format(TEXT("/v1/player/count/{game_id}"), PathParams);

	return Path;
}

void OpenAPIPlayerApi::CountPlayersByGameIdRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPlayerApi::CountPlayersByGameIdResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The players has been found."));
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

bool OpenAPIPlayerApi::CountPlayersByGameIdResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPlayerApi::CreatePlayerRequest::ComputePath() const
{
	FString Path(TEXT("/v1/player"));
	return Path;
}

void OpenAPIPlayerApi::CreatePlayerRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPICreatePlayerInput);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPICreatePlayerInput) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPICreatePlayerInput) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIPlayerApi::CreatePlayerResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The players has successfully created."));
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

bool OpenAPIPlayerApi::CreatePlayerResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPlayerApi::GetPlayerAssetByIdRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), ToStringFormatArg(Id) },
	{ TEXT("game_id"), ToStringFormatArg(GameId) } };

	FString Path = FString::Format(TEXT("/v1/player-asset/{game_id}/{id}"), PathParams);

	return Path;
}

void OpenAPIPlayerApi::GetPlayerAssetByIdRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPlayerApi::GetPlayerAssetByIdResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The player asset has been found."));
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

bool OpenAPIPlayerApi::GetPlayerAssetByIdResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPlayerApi::GetPlayerByIdRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), ToStringFormatArg(Id) },
	{ TEXT("game_id"), ToStringFormatArg(GameId) } };

	FString Path = FString::Format(TEXT("/v1/player/{game_id}/{id}"), PathParams);

	return Path;
}

void OpenAPIPlayerApi::GetPlayerByIdRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPlayerApi::GetPlayerByIdResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The player has been found."));
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

bool OpenAPIPlayerApi::GetPlayerByIdResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPlayerApi::GetPlayersRequest::ComputePath() const
{
	FString Path(TEXT("/v1/player"));
	TArray<FString> QueryParams;
	QueryParams.Add(FString(TEXT("game_id=")) + ToUrlString(GameId));
	if(Sort.IsSet())
	{
		QueryParams.Add(FString(TEXT("sort=")) + ToUrlString(Sort.GetValue()));
	}
	if(Order.IsSet())
	{
		QueryParams.Add(FString(TEXT("order=")) + ToUrlString(Order.GetValue()));
	}
	if(SearchText.IsSet())
	{
		QueryParams.Add(FString(TEXT("search_text=")) + ToUrlString(SearchText.GetValue()));
	}
	if(Limit.IsSet())
	{
		QueryParams.Add(FString(TEXT("limit=")) + ToUrlString(Limit.GetValue()));
	}
	if(Page.IsSet())
	{
		QueryParams.Add(FString(TEXT("page=")) + ToUrlString(Page.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIPlayerApi::GetPlayersRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPlayerApi::GetPlayersResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The players has been found"));
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

bool OpenAPIPlayerApi::GetPlayersResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPlayerApi::PlayerAssetsRequest::ComputePath() const
{
	FString Path(TEXT("/v1/player-asset"));
	TArray<FString> QueryParams;
	QueryParams.Add(FString(TEXT("game_id=")) + ToUrlString(GameId));
	if(AssetId.IsSet())
	{
		QueryParams.Add(FString(TEXT("asset_id=")) + ToUrlString(AssetId.GetValue()));
	}
	if(PlayerId.IsSet())
	{
		QueryParams.Add(FString(TEXT("player_id=")) + ToUrlString(PlayerId.GetValue()));
	}
	if(Sort.IsSet())
	{
		QueryParams.Add(FString(TEXT("sort=")) + ToUrlString(Sort.GetValue()));
	}
	if(Order.IsSet())
	{
		QueryParams.Add(FString(TEXT("order=")) + ToUrlString(Order.GetValue()));
	}
	if(Limit.IsSet())
	{
		QueryParams.Add(FString(TEXT("limit=")) + ToUrlString(Limit.GetValue()));
	}
	if(Page.IsSet())
	{
		QueryParams.Add(FString(TEXT("page=")) + ToUrlString(Page.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIPlayerApi::PlayerAssetsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPlayerApi::PlayerAssetsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The player assets has been found"));
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

bool OpenAPIPlayerApi::PlayerAssetsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPlayerApi::UpdatePlayerRequest::ComputePath() const
{
	FString Path(TEXT("/v1/player"));
	return Path;
}

void OpenAPIPlayerApi::UpdatePlayerRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("PUT"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIPlayerApi::UpdatePlayerResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The players has successful updated."));
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

bool OpenAPIPlayerApi::UpdatePlayerResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
