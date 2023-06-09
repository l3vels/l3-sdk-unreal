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
 * OpenAPISetContractUriInput
 *
 * 
 */
class OPENAPI_API OpenAPISetContractUriInput : public Model
{
public:
    virtual ~OpenAPISetContractUriInput() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Game Id */
	FString GameId;
	/* Collection Id */
	FString CollectionId;
	/* Contract URI */
	FString ContractUri;
};

}
