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
 * OpenAPIAsset
 *
 * 
 */
class OPENAPI_API OpenAPIAsset : public Model
{
public:
    virtual ~OpenAPIAsset() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The unique identifier for the asset entity. */
	FString Id;
	/* The token id of the asset. */
	double TokenId;
	/* The name of the asset. */
	FString Name;
	/* ID of the parent asset. */
	FString ParentId;
	/* Custom properties of the asset. */
	TArray<FString> Properties;
	/* Custom attributes of the asset. */
	TSharedPtr<FJsonObject> Attributes;
	/* Achievements of the asset. */
	TArray<FString> Achievements;
	/* Rewards of the asset. */
	TArray<FString> Rewards;
	/* The description of the asset. */
	FString Description;
	/* The status of the asset. */
	FString Status;
	/* The price of the asset. */
	double Price;
	/* The supply of the asset. */
	double Supply;
	/* The minted amount of the asset. */
	double MintedAmount;
	/* The asset type. Can be main or nested. */
	FString AssetType;
	/* The asset URL. */
	FString AssetUrl;
	/* Additional images associated with the asset, such as screenshots or promotional images. */
	TArray<FString> Medias;
	/* The main or featured image associated with the asset. You can set it from the Dashboard as main image. */
	FString MainMedia;
	/* The unique identifier of the account that the Collection belongs to. */
	FString AccountId;
	/* The unique identifier of the game that the asset is associated with. This allows developers to organize their assets by game and helps with tracking and reporting. */
	FString GameId;
	/* The unique identifier of the collection that the asset is associated with. This allows developers to organize their collections by game and helps with tracking and reporting. */
	FString CollectionId;
	/* The date when the collection was created. */
	FDateTime CreatedOn;
	/* The date when the collection was last modified. */
	FDateTime ModifiedOn;
	/* The Id of the user who created the collection. */
	FString CreatedBy;
	/* The Id of the user who last modified the collection. */
	FString ModifiedBy;
};

}
