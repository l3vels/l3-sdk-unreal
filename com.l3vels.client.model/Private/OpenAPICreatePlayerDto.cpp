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

#include "OpenAPICreatePlayerDto.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICreatePlayerDto::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (UniqueId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("unique_id")); WriteJsonValue(Writer, UniqueId.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name);
	if (Username.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("username")); WriteJsonValue(Writer, Username.GetValue());
	}
	if (Email.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("email")); WriteJsonValue(Writer, Email.GetValue());
	}
	if (Avatar.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("avatar")); WriteJsonValue(Writer, Avatar.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("project_id")); WriteJsonValue(Writer, ProjectId);
	if (IsCreateWallet.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_create_wallet")); WriteJsonValue(Writer, IsCreateWallet.GetValue());
	}
	if (CustomProps.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_props")); WriteJsonValue(Writer, CustomProps.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICreatePlayerDto::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("unique_id"), UniqueId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("username"), Username);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("email"), Email);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("avatar"), Avatar);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("project_id"), ProjectId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_create_wallet"), IsCreateWallet);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("custom_props"), CustomProps);

	return ParseSuccess;
}

}
