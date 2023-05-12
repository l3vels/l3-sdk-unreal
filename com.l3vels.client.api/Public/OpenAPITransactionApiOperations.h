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
#include "OpenAPITransactionApi.h"

#include "com.l3vels.client.model/OpenAPITransaction.h"

namespace OpenAPI
{

/* Retrieve Transaction by ID
 *
 * Retrieve transaction by ID
*/
class OPENAPI_API OpenAPITransactionApi::GetTransactionByIdRequest : public Request
{
public:
    virtual ~GetTransactionByIdRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple games. Please include it in to use developers API. */
	FString Authorization;
	FString Id;
	FString GameId;
};

class OPENAPI_API OpenAPITransactionApi::GetTransactionByIdResponse : public Response
{
public:
    virtual ~GetTransactionByIdResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransaction Content;
};

/* Retrieve transactions
 *
 * Retrieve all transactions.
*/
class OPENAPI_API OpenAPITransactionApi::GetTransactionsRequest : public Request
{
public:
    virtual ~GetTransactionsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* API key is associated with multiple games. Please include it in to use developers API. */
	FString Authorization;
	/* Game ID to find transactions in your game. Example: Fortnite, Minecraft, etc. */
	FString GameId;
	/* Filter transactions by collection. Example: Get transactions only from Weapons collection. */
	TOptional<FString> CollectionId;
	/* Player ID to mint to. You can provide player ID or player address */
	TOptional<FString> PlayerId;
	/* Asset field to sort by. You can sort by name, created_on and etc. */
	TOptional<FString> Sort;
	enum class OrderEnum
	{
		Asc,
		Desc,
  	};

	static FString EnumToString(const OrderEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, OrderEnum& EnumValue);
	/* Sort order (ASC for ascending or DESC for descending) */
	TOptional<OrderEnum> Order;
	/* Search transactions by name */
	TOptional<FString> SearchText;
	/* Number of transactions to return per page */
	TOptional<double> Limit;
	/* Page number */
	TOptional<double> Page;
};

class OPENAPI_API OpenAPITransactionApi::GetTransactionsResponse : public Response
{
public:
    virtual ~GetTransactionsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransaction Content;
};

}
