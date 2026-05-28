public class OASClient extends OAS.ApiClient {
    public OASClient() {
        basePath = 'https://api-historical.fx.finfeedapi.com';
        calloutName = 'FinFeedAPI_Currencies_Historical_REST_API';
        authentications.put('APIKey', new OAS.ApiKeyHeaderAuth('X-CoinAPI-Key'));
    }
}
