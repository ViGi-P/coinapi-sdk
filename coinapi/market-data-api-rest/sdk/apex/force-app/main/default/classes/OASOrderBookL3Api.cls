/*
 * CoinAPI Market Data REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

public class OASOrderBookL3Api {
    OASClient client;

    public OASOrderBookL3Api(OASClient client) {
        this.client = client;
    }

    public OASOrderBookL3Api() {
        this.client = new OASClient();
    }

    public OASClient getClient() {
        return this.client;
    }

    /**
     * Current order books
     * 
     * @param filterSymbolId Comma or semicolon delimited parts of symbol identifier used to filter the response. (optional)
     * @param limitLevels The maximum number of levels to include in the response. (optional)
     * @return List<OASV1OrderBookBase>
     * @throws OAS.ApiException if fails to make API call
     */
    public List<OASV1OrderBookBase> v1Orderbooks3CurrentGet(Map<String, Object> params) {
        List<OAS.Param> query = new List<OAS.Param>();

        // cast query params to verify their expected type
        query.addAll(client.makeParam('filter_symbol_id', (String) params.get('filterSymbolId')));
        query.addAll(client.makeParam('limit_levels', (Integer) params.get('limitLevels')));

        List<OAS.Param> form = new List<OAS.Param>();

        return (List<OASV1OrderBookBase>) client.invoke(
            'GET', '/v1/orderbooks3/current', '',
            query, form,
            new Map<String, Object>(),
            new Map<String, Object>(),
            new List<String>{ 'text/plain', 'application/json', 'text/json', 'application/x-msgpack' },
            new List<String>(),
            new List<String> { 'APIKey', 'JWT' },
            List<OASV1OrderBookBase>.class
        );
    }
    /**
     * Current order book by symbol_id
     * Retrieves the current order book for the specified symbol.
     * @param symbolId The symbol ID (from the Metadata -&gt; Symbols) (required)
     * @param limitLevels The maximum number of levels to include in the response. (optional)
     * @return OASV1OrderBookBase
     * @throws OAS.ApiException if fails to make API call
     */
    public OASV1OrderBookBase v1Orderbooks3SymbolIdCurrentGet(Map<String, Object> params) {
        client.assertNotNull(params.get('symbolId'), 'symbolId');
        List<OAS.Param> query = new List<OAS.Param>();

        // cast query params to verify their expected type
        query.addAll(client.makeParam('limit_levels', (Integer) params.get('limitLevels')));

        List<OAS.Param> form = new List<OAS.Param>();

        return (OASV1OrderBookBase) client.invoke(
            'GET', '/v1/orderbooks3/{symbol_id}/current', '',
            query, form,
            new Map<String, Object>{
                'symbol_id' => (String) params.get('symbolId')
            },
            new Map<String, Object>(),
            new List<String>{ 'text/plain', 'application/json', 'text/json', 'application/x-msgpack' },
            new List<String>(),
            new List<String> { 'APIKey', 'JWT' },
            OASV1OrderBookBase.class
        );
    }
}
