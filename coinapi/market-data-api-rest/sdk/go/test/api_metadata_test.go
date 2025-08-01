/*
CoinAPI Market Data REST API

Testing MetadataAPIService

*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech);

package openapi

import (
	"context"
	"github.com/stretchr/testify/assert"
	"github.com/stretchr/testify/require"
	"testing"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func Test_openapi_MetadataAPIService(t *testing.T) {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)

	t.Run("Test MetadataAPIService V1AssetsAssetIdGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var assetId string

		resp, httpRes, err := apiClient.MetadataAPI.V1AssetsAssetIdGet(context.Background(), assetId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1AssetsGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		resp, httpRes, err := apiClient.MetadataAPI.V1AssetsGet(context.Background()).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1AssetsIconsSizeGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var size int32

		resp, httpRes, err := apiClient.MetadataAPI.V1AssetsIconsSizeGet(context.Background(), size).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1ChainsChainIdGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var chainId string

		resp, httpRes, err := apiClient.MetadataAPI.V1ChainsChainIdGet(context.Background(), chainId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1ChainsGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		resp, httpRes, err := apiClient.MetadataAPI.V1ChainsGet(context.Background()).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1ExchangesExchangeIdGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var exchangeId string

		resp, httpRes, err := apiClient.MetadataAPI.V1ExchangesExchangeIdGet(context.Background(), exchangeId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1ExchangesGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		resp, httpRes, err := apiClient.MetadataAPI.V1ExchangesGet(context.Background()).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1ExchangesIconsSizeGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var size int32

		resp, httpRes, err := apiClient.MetadataAPI.V1ExchangesIconsSizeGet(context.Background(), size).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1SymbolsExchangeIdGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var exchangeId string

		resp, httpRes, err := apiClient.MetadataAPI.V1SymbolsExchangeIdGet(context.Background(), exchangeId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1SymbolsExchangeIdHistoryGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var exchangeId string

		resp, httpRes, err := apiClient.MetadataAPI.V1SymbolsExchangeIdHistoryGet(context.Background(), exchangeId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1SymbolsGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		resp, httpRes, err := apiClient.MetadataAPI.V1SymbolsGet(context.Background()).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test MetadataAPIService V1SymbolsMapExchangeIdGet", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var exchangeId string

		resp, httpRes, err := apiClient.MetadataAPI.V1SymbolsMapExchangeIdGet(context.Background(), exchangeId).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

}
