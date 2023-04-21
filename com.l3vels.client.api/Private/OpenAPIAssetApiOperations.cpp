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

#include "OpenAPIAssetApiOperations.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace OpenAPI
{

FString OpenAPIAssetApi::CountByGameRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("project_id"), ToStringFormatArg(ProjectId) } };

	FString Path = FString::Format(TEXT("/v1/asset/count/{project_id}"), PathParams);

	return Path;
}

void OpenAPIAssetApi::CountByGameRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIAssetApi::CountByGameResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The assets has been counted."));
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

bool OpenAPIAssetApi::CountByGameResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIAssetApi::GetAssetByIdRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), ToStringFormatArg(Id) },
	{ TEXT("project_id"), ToStringFormatArg(ProjectId) } };

	FString Path = FString::Format(TEXT("/v1/asset/{project_id}/{id}"), PathParams);

	return Path;
}

void OpenAPIAssetApi::GetAssetByIdRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIAssetApi::GetAssetByIdResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The asset has been found."));
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

bool OpenAPIAssetApi::GetAssetByIdResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

inline FString ToString(const OpenAPIAssetApi::GetAssetsRequest::OrderEnum& Value)
{
	switch (Value)
	{
	case OpenAPIAssetApi::GetAssetsRequest::OrderEnum::Asc:
		return TEXT("ASC");
	case OpenAPIAssetApi::GetAssetsRequest::OrderEnum::Desc:
		return TEXT("DESC");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAssetApi::GetAssetsRequest::OrderEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAssetApi::GetAssetsRequest::EnumToString(const OpenAPIAssetApi::GetAssetsRequest::OrderEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAssetApi::GetAssetsRequest::OrderEnum& Value)
{
	static TMap<FString, OpenAPIAssetApi::GetAssetsRequest::OrderEnum> StringToEnum = { 
		{ TEXT("ASC"), OpenAPIAssetApi::GetAssetsRequest::OrderEnum::Asc },
		{ TEXT("DESC"), OpenAPIAssetApi::GetAssetsRequest::OrderEnum::Desc }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAssetApi::GetAssetsRequest::EnumFromString(const FString& EnumAsString, OpenAPIAssetApi::GetAssetsRequest::OrderEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIAssetApi::GetAssetsRequest::OrderEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAssetApi::GetAssetsRequest::OrderEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAssetApi::GetAssetsRequest::OrderEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

FString OpenAPIAssetApi::GetAssetsRequest::ComputePath() const
{
	FString Path(TEXT("/v1/asset"));
	TArray<FString> QueryParams;
	QueryParams.Add(FString(TEXT("project_id=")) + ToUrlString(ProjectId));
	if(CollectionId.IsSet())
	{
		QueryParams.Add(FString(TEXT("collection_id=")) + ToUrlString(CollectionId.GetValue()));
	}
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

void OpenAPIAssetApi::GetAssetsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIAssetApi::GetAssetsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The assets has been found."));
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

bool OpenAPIAssetApi::GetAssetsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIAssetApi::UpdateAssetRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), ToStringFormatArg(Id) } };

	FString Path = FString::Format(TEXT("/v1/asset/{id}"), PathParams);

	return Path;
}

void OpenAPIAssetApi::UpdateAssetRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("PATCH"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIUpdateAssetDto);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIUpdateAssetDto) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIUpdateAssetDto) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIAssetApi::UpdateAssetResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("The asset has been updated."));
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

bool OpenAPIAssetApi::UpdateAssetResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
