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
 * OpenAPIGame
 *
 * 
 */
class OPENAPI_API OpenAPIGame : public Model
{
public:
    virtual ~OpenAPIGame() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The unique identifier for the Game entity. */
	FString Id;
	/* The name of the Game. */
	FString Name;
	/* A brief description of the Game. */
	FString Description;
	/* The category or genre of the Game. */
	FString Category;
	/* The logo or icon associated with the Game. */
	FString LogoImage;
	/* Additional images associated with the collection, such as screenshots or promotional images. */
	TArray<FString> Medias;
	/* Additional social links associated with the collection */
	TArray<FString> SocialLinks;
	/* The main or featured image associated with the Game. You can set it from the Dashboard as main image. */
	FString MainMedia;
	/* A unique URL for the game on the L3vels platform. */
	FString Url;
	/* The URL for the Game's website or landing page. */
	FString WebLink;
	/* The link to the Game's Discord server. */
	FString Discord;
	/* The link to the Game's official Twitter account. */
	FString Twitter;
	/* The link to the Game's official Instagram account. */
	FString Instagram;
	/*  A phone number for contacting the Game's developers or support team. */
	FString ContactPhone;
	/* An email address for contacting the Game's developers or support team. */
	FString ContactEmail;
	/* The current status of the Game, such as \"Draft\", \"Active\", or \"Inactive\". */
	FString Status;
	/*  The unique identifier of the account that the Game belongs to. This allows developers to manage multiple Games across multiple accounts. */
	FString AccountId;
	/* The date and time that the Game entity was created. */
	FDateTime CreatedOn;
	/* The date and time that the Game entity was last modified. */
	FDateTime ModifiedOn;
	/* The user or system that created the Game entity. */
	FString CreatedBy;
	/* The user or system that last modified the Game entity. */
	FString ModifiedBy;
};

}
