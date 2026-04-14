@isTest
private class OASRateLimitApiTest {
    /**
     * 
     *
     * 
     */
    @isTest
    private static void internalRatelimitWsconconApikeyGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASRateLimitApi api;
        String js = '';

        client = new OASClient();
        api = new OASRateLimitApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');

        api.internalRatelimitWsconconApikeyGet();
        client = new OASClient();
        api = new OASRateLimitApi(client);
        api.internalRatelimitWsconconApikeyGet();
    }

    /**
     * 
     *
     * 
     */
    @isTest
    private static void internalRatelimitWshelloIpGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASRateLimitApi api;
        String js = '';

        client = new OASClient();
        api = new OASRateLimitApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');

        api.internalRatelimitWshelloIpGet();
        client = new OASClient();
        api = new OASRateLimitApi(client);
        api.internalRatelimitWshelloIpGet();
    }

    /**
     * 
     *
     * 
     */
    @isTest
    private static void internalRatelimitWsreqIpGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASRateLimitApi api;
        String js = '';

        client = new OASClient();
        api = new OASRateLimitApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('APIKey')).setApiKey('foo-bar-api-key');

        api.internalRatelimitWsreqIpGet();
        client = new OASClient();
        api = new OASRateLimitApi(client);
        api.internalRatelimitWsreqIpGet();
    }
}