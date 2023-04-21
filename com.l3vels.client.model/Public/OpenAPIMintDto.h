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
#include "com.l3vels.client.model/OpenAPIMintDtoAsset.h"

namespace OpenAPI
{

/*
 * OpenAPIMintDto
 *
 * 
 */
class OPENAPI_API OpenAPIMintDto : public Model
{
public:
    virtual ~OpenAPIMintDto() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Contract ID */
	TOptional<FString> ContractId;
	/* Game/project ID. Example: Call of Duty */
	FString ProjectId;
	/* Collection ID to use. Example: Characters, Weapons, etc. */
	FString CollectionId;
	/* Player address to mint token to. You can provide player ID or player address */
	TOptional<FString> PlayerAddress;
	/* Player ID to mint to. You can provide player ID or player address */
	TOptional<FString> PlayerId;
	OpenAPIMintDtoAsset Asset;
};

}
