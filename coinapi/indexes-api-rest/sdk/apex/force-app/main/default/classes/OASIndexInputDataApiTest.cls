@isTest
private class OASIndexInputDataApiTest {
    /**
     * Returns all data inputs for a specific index definition
     *
     * 
     */
    @isTest
    private static void v1IndexdefInputDataIndexDefinitionIdAllGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'indexDefinitionId' => 'null'
        };

        OASClient client;
        OASIndexInputDataApi api;
        List<OASModelsIndexDefinitionInputData> response;
        List<OASModelsIndexDefinitionInputData> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASIndexInputDataApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexDefinitionInputData>{OASModelsIndexDefinitionInputData.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexDefinitionInputData>{OASModelsIndexDefinitionInputData.getExample()};
        response = (List<OASModelsIndexDefinitionInputData>) api.v1IndexdefInputDataIndexDefinitionIdAllGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASIndexInputDataApi(client);

        js = JSON.serialize(new List<OASModelsIndexDefinitionInputData>{OASModelsIndexDefinitionInputData.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexDefinitionInputData>{OASModelsIndexDefinitionInputData.getExample()};
        response = (List<OASModelsIndexDefinitionInputData>) api.v1IndexdefInputDataIndexDefinitionIdAllGet(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Returns data inputs for certain index definition and time
     *
     * 
     */
    @isTest
    private static void v1IndexdefInputDataIndexDefinitionIdGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'indexDefinitionId' => 'null',
            'r_time' => Datetime.newInstanceGmt(2013, 11, 12, 3, 3, 3),
            'enabledOnly' => '',
            'pendingOnly' => '',
            'filterAssetId' => 'null',
            'withStatusInfo' => ''
        };

        OASClient client;
        OASIndexInputDataApi api;
        List<OASModelsIndexDefinitionSnapshotEntr> response;
        List<OASModelsIndexDefinitionSnapshotEntr> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASIndexInputDataApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()};
        response = (List<OASModelsIndexDefinitionSnapshotEntr>) api.v1IndexdefInputDataIndexDefinitionIdGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASIndexInputDataApi(client);

        js = JSON.serialize(new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASModelsIndexDefinitionSnapshotEntr>{OASModelsIndexDefinitionSnapshotEntr.getExample()};
        response = (List<OASModelsIndexDefinitionSnapshotEntr>) api.v1IndexdefInputDataIndexDefinitionIdGet(params);
        System.assertEquals(expectedResponse, response);
    }
}