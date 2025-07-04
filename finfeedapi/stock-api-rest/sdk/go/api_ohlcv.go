/*
FinFeedAPI Stock REST API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: v1
Contact: support@apibricks.io
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"bytes"
	"context"
	"io"
	"net/http"
	"net/url"
	"strings"
)


// OhlcvAPIService OhlcvAPI service
type OhlcvAPIService service

type ApiV1OhlcvExchangeExchangeIdHistoryGetRequest struct {
	ctx context.Context
	ApiService *OhlcvAPIService
	exchangeId string
	periodId *string
	timeStart *string
	timeEnd *string
}

// Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;1DAY&#x60;)
func (r ApiV1OhlcvExchangeExchangeIdHistoryGetRequest) PeriodId(periodId string) ApiV1OhlcvExchangeExchangeIdHistoryGetRequest {
	r.periodId = &periodId
	return r
}

// Timeseries starting time in ISO 8601
func (r ApiV1OhlcvExchangeExchangeIdHistoryGetRequest) TimeStart(timeStart string) ApiV1OhlcvExchangeExchangeIdHistoryGetRequest {
	r.timeStart = &timeStart
	return r
}

// Timeseries ending time in ISO 8601
func (r ApiV1OhlcvExchangeExchangeIdHistoryGetRequest) TimeEnd(timeEnd string) ApiV1OhlcvExchangeExchangeIdHistoryGetRequest {
	r.timeEnd = &timeEnd
	return r
}

func (r ApiV1OhlcvExchangeExchangeIdHistoryGetRequest) Execute() ([]OHLCVExchangeTimeseriesItem, *http.Response, error) {
	return r.ApiService.V1OhlcvExchangeExchangeIdHistoryGetExecute(r)
}

/*
V1OhlcvExchangeExchangeIdHistoryGet Historical data by exchange

Get OHLCV timeseries data returned in time ascending order. Data can be requested by the period and for the specific exchange.

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param exchangeId Exchange identifier of requested timeseries (from the Metadata -> Exchanges)
 @return ApiV1OhlcvExchangeExchangeIdHistoryGetRequest
*/
func (a *OhlcvAPIService) V1OhlcvExchangeExchangeIdHistoryGet(ctx context.Context, exchangeId string) ApiV1OhlcvExchangeExchangeIdHistoryGetRequest {
	return ApiV1OhlcvExchangeExchangeIdHistoryGetRequest{
		ApiService: a,
		ctx: ctx,
		exchangeId: exchangeId,
	}
}

// Execute executes the request
//  @return []OHLCVExchangeTimeseriesItem
func (a *OhlcvAPIService) V1OhlcvExchangeExchangeIdHistoryGetExecute(r ApiV1OhlcvExchangeExchangeIdHistoryGetRequest) ([]OHLCVExchangeTimeseriesItem, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  []OHLCVExchangeTimeseriesItem
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "OhlcvAPIService.V1OhlcvExchangeExchangeIdHistoryGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v1/ohlcv/exchange/{exchange_id}/history"
	localVarPath = strings.Replace(localVarPath, "{"+"exchange_id"+"}", url.PathEscape(parameterValueToString(r.exchangeId, "exchangeId")), -1)

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}
	if r.periodId == nil {
		return localVarReturnValue, nil, reportError("periodId is required and must be specified")
	}
	if r.timeStart == nil {
		return localVarReturnValue, nil, reportError("timeStart is required and must be specified")
	}
	if r.timeEnd == nil {
		return localVarReturnValue, nil, reportError("timeEnd is required and must be specified")
	}

	parameterAddToHeaderOrQuery(localVarQueryParams, "period_id", r.periodId, "form", "")
	parameterAddToHeaderOrQuery(localVarQueryParams, "time_start", r.timeStart, "form", "")
	parameterAddToHeaderOrQuery(localVarQueryParams, "time_end", r.timeEnd, "form", "")
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"text/plain", "application/json", "text/json"}

	// set Accept header
	localVarHTTPHeaderAccept := selectHeaderAccept(localVarHTTPHeaderAccepts)
	if localVarHTTPHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHTTPHeaderAccept
	}
	if r.ctx != nil {
		// API Key Authentication
		if auth, ok := r.ctx.Value(ContextAPIKeys).(map[string]APIKey); ok {
			if apiKey, ok := auth["APIKey"]; ok {
				var key string
				if apiKey.Prefix != "" {
					key = apiKey.Prefix + " " + apiKey.Key
				} else {
					key = apiKey.Key
				}
				localVarHeaderParams["Authorization"] = key
			}
		}
	}
	req, err := a.client.prepareRequest(r.ctx, localVarPath, localVarHTTPMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, formFiles)
	if err != nil {
		return localVarReturnValue, nil, err
	}

	localVarHTTPResponse, err := a.client.callAPI(req)
	if err != nil || localVarHTTPResponse == nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	localVarBody, err := io.ReadAll(localVarHTTPResponse.Body)
	localVarHTTPResponse.Body.Close()
	localVarHTTPResponse.Body = io.NopCloser(bytes.NewBuffer(localVarBody))
	if err != nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	if localVarHTTPResponse.StatusCode >= 300 {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: localVarHTTPResponse.Status,
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	err = a.client.decode(&localVarReturnValue, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
	if err != nil {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: err.Error(),
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	return localVarReturnValue, localVarHTTPResponse, nil
}

type ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest struct {
	ctx context.Context
	ApiService *OhlcvAPIService
	exchangeId string
	symbolId string
	periodId *string
	timeStart *string
	timeEnd *string
	limit *int32
}

// Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;2MTH&#x60;)
func (r ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest) PeriodId(periodId string) ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest {
	r.periodId = &periodId
	return r
}

// Timeseries starting time in ISO 8601
func (r ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest) TimeStart(timeStart string) ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest {
	r.timeStart = &timeStart
	return r
}

// Timeseries ending time in ISO 8601
func (r ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest) TimeEnd(timeEnd string) ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest {
	r.timeEnd = &timeEnd
	return r
}

// Amount of items to return (mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
func (r ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest) Limit(limit int32) ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest {
	r.limit = &limit
	return r
}

func (r ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest) Execute() ([]OHLCVTimeseriesItem, *http.Response, error) {
	return r.ApiService.V1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetExecute(r)
}

/*
V1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGet Historical data

Get OHLCV timeseries data returned in time ascending order.

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param exchangeId Exchange identifier of requested timeseries (from the Metadata -> Exchanges)
 @param symbolId Symbol identifier of requested timeseries (from the Metadata -> Symbols)
 @return ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest
*/
func (a *OhlcvAPIService) V1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGet(ctx context.Context, exchangeId string, symbolId string) ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest {
	return ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest{
		ApiService: a,
		ctx: ctx,
		exchangeId: exchangeId,
		symbolId: symbolId,
	}
}

// Execute executes the request
//  @return []OHLCVTimeseriesItem
func (a *OhlcvAPIService) V1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetExecute(r ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetRequest) ([]OHLCVTimeseriesItem, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  []OHLCVTimeseriesItem
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "OhlcvAPIService.V1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v1/ohlcv/exchange-symbol/{exchange_id}/{symbol_id}/history"
	localVarPath = strings.Replace(localVarPath, "{"+"exchange_id"+"}", url.PathEscape(parameterValueToString(r.exchangeId, "exchangeId")), -1)
	localVarPath = strings.Replace(localVarPath, "{"+"symbol_id"+"}", url.PathEscape(parameterValueToString(r.symbolId, "symbolId")), -1)

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}
	if r.periodId == nil {
		return localVarReturnValue, nil, reportError("periodId is required and must be specified")
	}

	parameterAddToHeaderOrQuery(localVarQueryParams, "period_id", r.periodId, "form", "")
	if r.timeStart != nil {
		parameterAddToHeaderOrQuery(localVarQueryParams, "time_start", r.timeStart, "form", "")
	}
	if r.timeEnd != nil {
		parameterAddToHeaderOrQuery(localVarQueryParams, "time_end", r.timeEnd, "form", "")
	}
	if r.limit != nil {
		parameterAddToHeaderOrQuery(localVarQueryParams, "limit", r.limit, "form", "")
	} else {
		var defaultValue int32 = 100
		r.limit = &defaultValue
	}
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"text/plain", "application/json", "text/json"}

	// set Accept header
	localVarHTTPHeaderAccept := selectHeaderAccept(localVarHTTPHeaderAccepts)
	if localVarHTTPHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHTTPHeaderAccept
	}
	if r.ctx != nil {
		// API Key Authentication
		if auth, ok := r.ctx.Value(ContextAPIKeys).(map[string]APIKey); ok {
			if apiKey, ok := auth["APIKey"]; ok {
				var key string
				if apiKey.Prefix != "" {
					key = apiKey.Prefix + " " + apiKey.Key
				} else {
					key = apiKey.Key
				}
				localVarHeaderParams["Authorization"] = key
			}
		}
	}
	req, err := a.client.prepareRequest(r.ctx, localVarPath, localVarHTTPMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, formFiles)
	if err != nil {
		return localVarReturnValue, nil, err
	}

	localVarHTTPResponse, err := a.client.callAPI(req)
	if err != nil || localVarHTTPResponse == nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	localVarBody, err := io.ReadAll(localVarHTTPResponse.Body)
	localVarHTTPResponse.Body.Close()
	localVarHTTPResponse.Body = io.NopCloser(bytes.NewBuffer(localVarBody))
	if err != nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	if localVarHTTPResponse.StatusCode >= 300 {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: localVarHTTPResponse.Status,
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	err = a.client.decode(&localVarReturnValue, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
	if err != nil {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: err.Error(),
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	return localVarReturnValue, localVarHTTPResponse, nil
}

type ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetRequest struct {
	ctx context.Context
	ApiService *OhlcvAPIService
	exchangeId string
	symbolId string
	periodId *string
	limit *int32
}

// Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;2MTH&#x60;)
func (r ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetRequest) PeriodId(periodId string) ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetRequest {
	r.periodId = &periodId
	return r
}

// Amount of items to return (mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
func (r ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetRequest) Limit(limit int32) ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetRequest {
	r.limit = &limit
	return r
}

func (r ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetRequest) Execute() ([]OHLCVTimeseriesItem, *http.Response, error) {
	return r.ApiService.V1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetExecute(r)
}

/*
V1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGet Latest data

Get OHLCV latest timeseries data returned in time descending order. Data can be requested by the period and for the specific symbol eg `BITSTAMP_SPOT_BTC_USD`, if you need to query timeseries by asset pairs eg. `BTC/USD`, then please reffer to the Exchange Rates Timeseries data
            
:::info
OHLCV Latest endpoint is just the shortcut to the OHLCV Historical endpoint with substituted `time_start` and `time_end` parameters. 
The OHLCV Historical endpoint data can be delayed a few seconds. Use OHLCV real-time data stream to get data without delay.
:::

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param exchangeId Exchange identifier of requested timeseries (from the Metadata -> Exchanges)
 @param symbolId Symbol identifier of requested timeseries (from the Metadata -> Symbols)
 @return ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetRequest
*/
func (a *OhlcvAPIService) V1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGet(ctx context.Context, exchangeId string, symbolId string) ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetRequest {
	return ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetRequest{
		ApiService: a,
		ctx: ctx,
		exchangeId: exchangeId,
		symbolId: symbolId,
	}
}

// Execute executes the request
//  @return []OHLCVTimeseriesItem
func (a *OhlcvAPIService) V1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetExecute(r ApiV1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetRequest) ([]OHLCVTimeseriesItem, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  []OHLCVTimeseriesItem
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "OhlcvAPIService.V1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v1/ohlcv/exchange-symbol/{exchange_id}/{symbol_id}/latest"
	localVarPath = strings.Replace(localVarPath, "{"+"exchange_id"+"}", url.PathEscape(parameterValueToString(r.exchangeId, "exchangeId")), -1)
	localVarPath = strings.Replace(localVarPath, "{"+"symbol_id"+"}", url.PathEscape(parameterValueToString(r.symbolId, "symbolId")), -1)

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}
	if r.periodId == nil {
		return localVarReturnValue, nil, reportError("periodId is required and must be specified")
	}

	parameterAddToHeaderOrQuery(localVarQueryParams, "period_id", r.periodId, "form", "")
	if r.limit != nil {
		parameterAddToHeaderOrQuery(localVarQueryParams, "limit", r.limit, "form", "")
	} else {
		var defaultValue int32 = 100
		r.limit = &defaultValue
	}
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"text/plain", "application/json", "text/json"}

	// set Accept header
	localVarHTTPHeaderAccept := selectHeaderAccept(localVarHTTPHeaderAccepts)
	if localVarHTTPHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHTTPHeaderAccept
	}
	if r.ctx != nil {
		// API Key Authentication
		if auth, ok := r.ctx.Value(ContextAPIKeys).(map[string]APIKey); ok {
			if apiKey, ok := auth["APIKey"]; ok {
				var key string
				if apiKey.Prefix != "" {
					key = apiKey.Prefix + " " + apiKey.Key
				} else {
					key = apiKey.Key
				}
				localVarHeaderParams["Authorization"] = key
			}
		}
	}
	req, err := a.client.prepareRequest(r.ctx, localVarPath, localVarHTTPMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, formFiles)
	if err != nil {
		return localVarReturnValue, nil, err
	}

	localVarHTTPResponse, err := a.client.callAPI(req)
	if err != nil || localVarHTTPResponse == nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	localVarBody, err := io.ReadAll(localVarHTTPResponse.Body)
	localVarHTTPResponse.Body.Close()
	localVarHTTPResponse.Body = io.NopCloser(bytes.NewBuffer(localVarBody))
	if err != nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	if localVarHTTPResponse.StatusCode >= 300 {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: localVarHTTPResponse.Status,
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	err = a.client.decode(&localVarReturnValue, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
	if err != nil {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: err.Error(),
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	return localVarReturnValue, localVarHTTPResponse, nil
}

type ApiV1OhlcvPeriodsGetRequest struct {
	ctx context.Context
	ApiService *OhlcvAPIService
}

func (r ApiV1OhlcvPeriodsGetRequest) Execute() ([]OHLCVTimeseriesPeriod, *http.Response, error) {
	return r.ApiService.V1OhlcvPeriodsGetExecute(r)
}

/*
V1OhlcvPeriodsGet List all periods

Get full list of supported time periods available for requesting OHLCV timeseries data.
            
### Available periods
            
Time unit | Period identifiers
--------- | -----------
Second | 1SEC, 2SEC, 3SEC, 4SEC, 5SEC, 6SEC, 10SEC, 15SEC, 20SEC, 30SEC
Minute | 1MIN, 2MIN, 3MIN, 4MIN, 5MIN, 6MIN, 10MIN, 15MIN, 20MIN, 30MIN
Hour | 1HRS, 2HRS, 3HRS, 4HRS, 6HRS, 8HRS, 12HRS
Day | 1DAY, 2DAY, 3DAY, 5DAY, 7DAY, 10DAY
Month | 1MTH, 2MTH, 3MTH, 4MTH, 6MTH
Year | 1YRS, 2YRS, 3YRS, 4YRS, 5YRS
            
:::tip
You can assume that we will not remove any periods from this response, however, we may add new ones.
:::

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiV1OhlcvPeriodsGetRequest
*/
func (a *OhlcvAPIService) V1OhlcvPeriodsGet(ctx context.Context) ApiV1OhlcvPeriodsGetRequest {
	return ApiV1OhlcvPeriodsGetRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return []OHLCVTimeseriesPeriod
func (a *OhlcvAPIService) V1OhlcvPeriodsGetExecute(r ApiV1OhlcvPeriodsGetRequest) ([]OHLCVTimeseriesPeriod, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  []OHLCVTimeseriesPeriod
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "OhlcvAPIService.V1OhlcvPeriodsGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v1/ohlcv/periods"

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}

	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"text/plain", "application/json", "text/json"}

	// set Accept header
	localVarHTTPHeaderAccept := selectHeaderAccept(localVarHTTPHeaderAccepts)
	if localVarHTTPHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHTTPHeaderAccept
	}
	if r.ctx != nil {
		// API Key Authentication
		if auth, ok := r.ctx.Value(ContextAPIKeys).(map[string]APIKey); ok {
			if apiKey, ok := auth["APIKey"]; ok {
				var key string
				if apiKey.Prefix != "" {
					key = apiKey.Prefix + " " + apiKey.Key
				} else {
					key = apiKey.Key
				}
				localVarHeaderParams["Authorization"] = key
			}
		}
	}
	req, err := a.client.prepareRequest(r.ctx, localVarPath, localVarHTTPMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, formFiles)
	if err != nil {
		return localVarReturnValue, nil, err
	}

	localVarHTTPResponse, err := a.client.callAPI(req)
	if err != nil || localVarHTTPResponse == nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	localVarBody, err := io.ReadAll(localVarHTTPResponse.Body)
	localVarHTTPResponse.Body.Close()
	localVarHTTPResponse.Body = io.NopCloser(bytes.NewBuffer(localVarBody))
	if err != nil {
		return localVarReturnValue, localVarHTTPResponse, err
	}

	if localVarHTTPResponse.StatusCode >= 300 {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: localVarHTTPResponse.Status,
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	err = a.client.decode(&localVarReturnValue, localVarBody, localVarHTTPResponse.Header.Get("Content-Type"))
	if err != nil {
		newErr := &GenericOpenAPIError{
			body:  localVarBody,
			error: err.Error(),
		}
		return localVarReturnValue, localVarHTTPResponse, newErr
	}

	return localVarReturnValue, localVarHTTPResponse, nil
}
