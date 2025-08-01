/*
 * FX Realtime REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

public class OASMetadataApi {
    OASClient client;

    public OASMetadataApi(OASClient client) {
        this.client = client;
    }

    public OASMetadataApi() {
        this.client = new OASClient();
    }

    public OASClient getClient() {
        return this.client;
    }

    /**
     * List all assets by asset ID
     * 
     * @param assetId The asset ID. (required)
     * @return List<OASV1Asset>
     * @throws OAS.ApiException if fails to make API call
     */
    public List<OASV1Asset> v1AssetsAssetIdGet(Map<String, Object> params) {
        client.assertNotNull(params.get('assetId'), 'assetId');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (List<OASV1Asset>) client.invoke(
            'GET', '/v1/assets/{asset_id}', '',
            query, form,
            new Map<String, Object>{
                'asset_id' => (String) params.get('assetId')
            },
            new Map<String, Object>(),
            new List<String>{ 'text/plain', 'application/json', 'text/json', 'application/x-msgpack' },
            new List<String>(),
            new List<String> { 'APIKey', 'JWT' },
            List<OASV1Asset>.class
        );
    }
    /**
     * List all assets
     * Retrieves all assets.\n            \n:::info\nOur asset identifiers are aligned with the ISO 4217 currency codes standard only for fiat money (government or law regulated currency).\n:::\n            \n:::info\nProperties of the output are providing aggregated information from across all symbols related to the specific asset. If you need to calculate your aggregation (e.g., limiting only the particular type of symbols), you should use /v1/symbols endpoint as a data source.\n:::
     * @param filterAssetId Comma or semicolon delimited asset identifiers used to filter response. (optional, eg. &#x60;BTC;ETH&#x60;). (optional)
     * @return List<OASV1Asset>
     * @throws OAS.ApiException if fails to make API call
     */
    public List<OASV1Asset> v1AssetsGet(Map<String, Object> params) {
        List<OAS.Param> query = new List<OAS.Param>();

        // cast query params to verify their expected type
        query.addAll(client.makeParam('filter_asset_id', (String) params.get('filterAssetId')));

        List<OAS.Param> form = new List<OAS.Param>();

        return (List<OASV1Asset>) client.invoke(
            'GET', '/v1/assets', '',
            query, form,
            new Map<String, Object>(),
            new Map<String, Object>(),
            new List<String>{ 'text/plain', 'application/json', 'text/json', 'application/x-msgpack' },
            new List<String>(),
            new List<String> { 'APIKey', 'JWT' },
            List<OASV1Asset>.class
        );
    }
    /**
     * List all asset icons
     * Gets the list of icons (of the given size) for all the assets.
     * @param size The size of the icons. (required)
     * @return List<OASV1Icon>
     * @throws OAS.ApiException if fails to make API call
     */
    public List<OASV1Icon> v1AssetsIconsSizeGet(Map<String, Object> params) {
        client.assertNotNull(params.get('size'), 'size');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (List<OASV1Icon>) client.invoke(
            'GET', '/v1/assets/icons/{size}', '',
            query, form,
            new Map<String, Object>{
                'size' => (Integer) params.get('size')
            },
            new Map<String, Object>(),
            new List<String>{ 'text/plain', 'application/json', 'text/json', 'application/x-msgpack' },
            new List<String>(),
            new List<String> { 'APIKey', 'JWT' },
            List<OASV1Icon>.class
        );
    }
}
