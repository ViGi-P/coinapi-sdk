@isTest
private class OASIndexesApiTest {
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
        OASIndexesApi api;
        List<OASModelsIndexMultiAssetWeight> response;
        List<OASModelsIndexMultiAssetWeight> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASIndexesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()};
        response = (List<OASModelsIndexMultiAssetWeight>) api.v1IndexdefMultiassetGet();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASIndexesApi(client);

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
        OASIndexesApi api;
        List<OASModelsIndexMultiAssetWeight> response;
        List<OASModelsIndexMultiAssetWeight> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASIndexesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()};
        response = (List<OASModelsIndexMultiAssetWeight>) api.v1IndexdefMultiassetIndexIdGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASIndexesApi(client);

        js = JSON.serialize(new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexMultiAssetWeight>{OASModelsIndexMultiAssetWeight.getExample()};
        response = (List<OASModelsIndexMultiAssetWeight>) api.v1IndexdefMultiassetIndexIdGet(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List indexes
     *
     * 
     */
    @isTest
    private static void v1IndexesGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASIndexesApi api;
        List<OASModelsIndexIdentifier> response;
        List<OASModelsIndexIdentifier> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASIndexesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexIdentifier>{OASModelsIndexIdentifier.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexIdentifier>{OASModelsIndexIdentifier.getExample()};
        response = (List<OASModelsIndexIdentifier>) api.v1IndexesGet();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASIndexesApi(client);

        js = JSON.serialize(new List<OASModelsIndexIdentifier>{OASModelsIndexIdentifier.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexIdentifier>{OASModelsIndexIdentifier.getExample()};
        response = (List<OASModelsIndexIdentifier>) api.v1IndexesGet();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Current Index Values for index definition
     *
     * 
     */
    @isTest
    private static void v1IndexesIndexDefinitionIdCurrentSnapshotGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'indexDefinitionId' => 'null'
        };

        OASClient client;
        OASIndexesApi api;
        List<OASModelsIndexDefinitionSnapshotEntr> response;
        List<OASModelsIndexDefinitionSnapshotEntr> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASIndexesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()};
        response = (List<OASModelsIndexDefinitionSnapshotEntr>) api.v1IndexesIndexDefinitionIdCurrentSnapshotGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASIndexesApi(client);

        js = JSON.serialize(new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()};
        response = (List<OASModelsIndexDefinitionSnapshotEntr>) api.v1IndexesIndexDefinitionIdCurrentSnapshotGet(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Historical Index Values for index definition
     *
     * 
     */
    @isTest
    private static void v1IndexesIndexDefinitionIdHistorySnapshotGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'indexDefinitionId' => 'null',
            'r_time' => Datetime.newInstanceGmt(2013, 11, 12, 3, 3, 3)
        };

        OASClient client;
        OASIndexesApi api;
        List<OASModelsIndexDefinitionSnapshotEntr> response;
        List<OASModelsIndexDefinitionSnapshotEntr> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASIndexesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()};
        response = (List<OASModelsIndexDefinitionSnapshotEntr>) api.v1IndexesIndexDefinitionIdHistorySnapshotGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASIndexesApi(client);

        js = JSON.serialize(new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()};
        response = (List<OASModelsIndexDefinitionSnapshotEntr>) api.v1IndexesIndexDefinitionIdHistorySnapshotGet(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Current Index Value
     *
     * 
     */
    @isTest
    private static void v1IndexesIndexIdCurrentGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'indexId' => 'null'
        };

        OASClient client;
        OASIndexesApi api;
        OASModelsIndexValue response;
        OASModelsIndexValue expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASIndexesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASModelsIndexValue.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASModelsIndexValue.getExample();
        response = (OASModelsIndexValue) api.v1IndexesIndexIdCurrentGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASModelsIndexValue.getExample());
        res.setHeader('Content-Type', 'application/x-msgpack');
        res.setBody(js);
        expectedResponse = OASModelsIndexValue.getExample();
        response = (OASModelsIndexValue) api.v1IndexesIndexIdCurrentGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASModelsIndexValue.getExample());
        res.setHeader('Content-Type', 'text/json');
        res.setBody(js);
        expectedResponse = OASModelsIndexValue.getExample();
        response = (OASModelsIndexValue) api.v1IndexesIndexIdCurrentGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASModelsIndexValue.getExample());
        res.setHeader('Content-Type', 'text/plain');
        res.setBody(js);
        expectedResponse = OASModelsIndexValue.getExample();
        response = (OASModelsIndexValue) api.v1IndexesIndexIdCurrentGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASIndexesApi(client);

        js = JSON.serialize(OASModelsIndexValue.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASModelsIndexValue.getExample();
        response = (OASModelsIndexValue) api.v1IndexesIndexIdCurrentGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASModelsIndexValue.getExample());
        res.setHeader('Content-Type', 'application/x-msgpack');
        res.setBody(js);
        expectedResponse = OASModelsIndexValue.getExample();
        response = (OASModelsIndexValue) api.v1IndexesIndexIdCurrentGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASModelsIndexValue.getExample());
        res.setHeader('Content-Type', 'text/json');
        res.setBody(js);
        expectedResponse = OASModelsIndexValue.getExample();
        response = (OASModelsIndexValue) api.v1IndexesIndexIdCurrentGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASModelsIndexValue.getExample());
        res.setHeader('Content-Type', 'text/plain');
        res.setBody(js);
        expectedResponse = OASModelsIndexValue.getExample();
        response = (OASModelsIndexValue) api.v1IndexesIndexIdCurrentGet(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Historical Index Value w/Composition
     *
     * 
     */
    @isTest
    private static void v1IndexesIndexIdHistoryGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'indexId' => 'null',
            'timeStart' => Datetime.newInstanceGmt(2013, 11, 12, 3, 3, 3),
            'timeEnd' => Datetime.newInstanceGmt(2013, 11, 12, 3, 3, 3),
            'r_limit' => ''
        };

        OASClient client;
        OASIndexesApi api;
        List<OASModelsIndexValue> response;
        List<OASModelsIndexValue> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASIndexesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexValue>{OASModelsIndexValue.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexValue>{OASModelsIndexValue.getExample()};
        response = (List<OASModelsIndexValue>) api.v1IndexesIndexIdHistoryGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASIndexesApi(client);

        js = JSON.serialize(new List<OASModelsIndexValue>{OASModelsIndexValue.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexValue>{OASModelsIndexValue.getExample()};
        response = (List<OASModelsIndexValue>) api.v1IndexesIndexIdHistoryGet(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Timeseries Index Value
     *
     * 
     */
    @isTest
    private static void v1IndexesIndexIdTimeseriesGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'indexId' => 'null',
            'periodId' => 'null',
            'timeStart' => 'null',
            'timeEnd' => 'null',
            'r_limit' => ''
        };

        OASClient client;
        OASIndexesApi api;
        List<OASModelsIndexTimeseriesItem> response;
        List<OASModelsIndexTimeseriesItem> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASIndexesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexTimeseriesItem>{OASModelsIndexTimeseriesItem.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexTimeseriesItem>{OASModelsIndexTimeseriesItem.getExample()};
        response = (List<OASModelsIndexTimeseriesItem>) api.v1IndexesIndexIdTimeseriesGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASIndexesApi(client);

        js = JSON.serialize(new List<OASModelsIndexTimeseriesItem>{OASModelsIndexTimeseriesItem.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexTimeseriesItem>{OASModelsIndexTimeseriesItem.getExample()};
        response = (List<OASModelsIndexTimeseriesItem>) api.v1IndexesIndexIdTimeseriesGet(params);
        System.assertEquals(expectedResponse, response);
    }
}