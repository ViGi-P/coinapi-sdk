@isTest
private class OASMultiAssetWeightsApiTest {
    /**
     * Get all multi-asset weights
     *
     * 
     */
    @isTest
    private static void v1IndexdefMultiassetGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASMultiAssetWeightsApi api;
        List<OASModelsIndexMultiAssetWeight> response;
        List<OASModelsIndexMultiAssetWeight> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMultiAssetWeightsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()};
        response = (List<OASModelsIndexMultiAssetWeight>) api.v1IndexdefMultiassetGet();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMultiAssetWeightsApi(client);

        js = JSON.serialize(new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()};
        response = (List<OASModelsIndexMultiAssetWeight>) api.v1IndexdefMultiassetGet();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get multi-asset weights for specific index
     *
     * 
     */
    @isTest
    private static void v1IndexdefMultiassetIndexIdGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'indexId' => 'null'
        };

        OASClient client;
        OASMultiAssetWeightsApi api;
        List<OASModelsIndexMultiAssetWeight> response;
        List<OASModelsIndexMultiAssetWeight> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMultiAssetWeightsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()};
        response = (List<OASModelsIndexMultiAssetWeight>) api.v1IndexdefMultiassetIndexIdGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMultiAssetWeightsApi(client);

        js = JSON.serialize(new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()};
        response = (List<OASModelsIndexMultiAssetWeight>) api.v1IndexdefMultiassetIndexIdGet(params);
        System.assertEquals(expectedResponse, response);
    }
}