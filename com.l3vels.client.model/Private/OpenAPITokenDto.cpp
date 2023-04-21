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

#include "OpenAPITokenDto.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITokenDto::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (TokenId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("token_id")); WriteJsonValue(Writer, TokenId.GetValue());
	}
	if (AssetId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("asset_id")); WriteJsonValue(Writer, AssetId.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("amount")); WriteJsonValue(Writer, Amount);
	Writer->WriteObjectEnd();
}

bool OpenAPITokenDto::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("token_id"), TokenId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("asset_id"), AssetId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("amount"), Amount);

	return ParseSuccess;
}

}
