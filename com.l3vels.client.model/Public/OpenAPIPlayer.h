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

namespace OpenAPI
{

/*
 * OpenAPIPlayer
 *
 * 
 */
class OPENAPI_API OpenAPIPlayer : public Model
{
public:
    virtual ~OpenAPIPlayer() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The unique identifier for the Player entity. */
	FString Id;
	/* The unique ID of the Player that can be provided by customers or generated by us. */
	FString UniqueId;
	/* The name of the player */
	FString Name;
	/* Username of the player */
	FString Username;
	/* Email of the player */
	FString Email;
	/* Avatar URL of the player */
	FString Avatar;
	/* Custom props for player */
	TSharedPtr<FJsonObject> CustomProps;
	/* The date when player was active last time */
	FDateTime LastSeen;
	/* The unique identifier of the account that the Player belongs to. */
	double AccountId;
	/* The unique identifier of the project that the Player is associated with. This allows developers to organize their players by project and helps with tracking and reporting. Example: Player Jack is associated with project Fortnite. */
	FString ProjectId;
	/* The date when the player was created. */
	FDateTime CreatedOn;
	/* The date when the player was last modified. */
	FDateTime ModifiedOn;
	/* The Id of the user who created the player. */
	double CreatedBy;
	/* The Id of the user who last modified the player. */
	double ModifiedBy;
	/* Boolean value indicating whether the player has wallet or not */
	bool IsCreateWallet = false;
};

}
