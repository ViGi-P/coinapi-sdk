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
	"time"
)


// NativeIEXAPIService NativeIEXAPI service
type NativeIEXAPIService service

type ApiV1NativeIexAdminMessagesSymbolGetRequest struct {
	ctx context.Context
	ApiService *NativeIEXAPIService
	symbol string
	date *time.Time
}

// Optional date in format YYYY-MM-DD (defaults to latest available data)
func (r ApiV1NativeIexAdminMessagesSymbolGetRequest) Date(date time.Time) ApiV1NativeIexAdminMessagesSymbolGetRequest {
	r.date = &date
	return r
}

func (r ApiV1NativeIexAdminMessagesSymbolGetRequest) Execute() ([]AdminAdminMessageModel, *http.Response, error) {
	return r.ApiService.V1NativeIexAdminMessagesSymbolGetExecute(r)
}

/*
V1NativeIexAdminMessagesSymbolGet Get Admin Messages

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param symbol The symbol identifier
 @return ApiV1NativeIexAdminMessagesSymbolGetRequest
*/
func (a *NativeIEXAPIService) V1NativeIexAdminMessagesSymbolGet(ctx context.Context, symbol string) ApiV1NativeIexAdminMessagesSymbolGetRequest {
	return ApiV1NativeIexAdminMessagesSymbolGetRequest{
		ApiService: a,
		ctx: ctx,
		symbol: symbol,
	}
}

// Execute executes the request
//  @return []AdminAdminMessageModel
func (a *NativeIEXAPIService) V1NativeIexAdminMessagesSymbolGetExecute(r ApiV1NativeIexAdminMessagesSymbolGetRequest) ([]AdminAdminMessageModel, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  []AdminAdminMessageModel
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "NativeIEXAPIService.V1NativeIexAdminMessagesSymbolGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v1/native/iex/admin/messages/{symbol}"
	localVarPath = strings.Replace(localVarPath, "{"+"symbol"+"}", url.PathEscape(parameterValueToString(r.symbol, "symbol")), -1)

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}
	if r.date == nil {
		return localVarReturnValue, nil, reportError("date is required and must be specified")
	}

	parameterAddToHeaderOrQuery(localVarQueryParams, "date", r.date, "form", "")
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

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

type ApiV1NativeIexAdminSystemEventGetRequest struct {
	ctx context.Context
	ApiService *NativeIEXAPIService
	date *time.Time
}

// Date in format YYYY-MM-DD
func (r ApiV1NativeIexAdminSystemEventGetRequest) Date(date time.Time) ApiV1NativeIexAdminSystemEventGetRequest {
	r.date = &date
	return r
}

func (r ApiV1NativeIexAdminSystemEventGetRequest) Execute() ([]AdminSystemEventModel, *http.Response, error) {
	return r.ApiService.V1NativeIexAdminSystemEventGetExecute(r)
}

/*
V1NativeIexAdminSystemEventGet Get System Events

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @return ApiV1NativeIexAdminSystemEventGetRequest
*/
func (a *NativeIEXAPIService) V1NativeIexAdminSystemEventGet(ctx context.Context) ApiV1NativeIexAdminSystemEventGetRequest {
	return ApiV1NativeIexAdminSystemEventGetRequest{
		ApiService: a,
		ctx: ctx,
	}
}

// Execute executes the request
//  @return []AdminSystemEventModel
func (a *NativeIEXAPIService) V1NativeIexAdminSystemEventGetExecute(r ApiV1NativeIexAdminSystemEventGetRequest) ([]AdminSystemEventModel, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  []AdminSystemEventModel
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "NativeIEXAPIService.V1NativeIexAdminSystemEventGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v1/native/iex/admin/system-event"

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}
	if r.date == nil {
		return localVarReturnValue, nil, reportError("date is required and must be specified")
	}

	parameterAddToHeaderOrQuery(localVarQueryParams, "date", r.date, "form", "")
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

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

type ApiV1NativeIexLevel1QuoteSymbolGetRequest struct {
	ctx context.Context
	ApiService *NativeIEXAPIService
	symbol string
	date *time.Time
}

// Optional date in format YYYY-MM-DD (defaults to latest available data)
func (r ApiV1NativeIexLevel1QuoteSymbolGetRequest) Date(date time.Time) ApiV1NativeIexLevel1QuoteSymbolGetRequest {
	r.date = &date
	return r
}

func (r ApiV1NativeIexLevel1QuoteSymbolGetRequest) Execute() ([]Level1QuoteUpdateModel, *http.Response, error) {
	return r.ApiService.V1NativeIexLevel1QuoteSymbolGetExecute(r)
}

/*
V1NativeIexLevel1QuoteSymbolGet Get Level-1 Quotes

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param symbol The symbol identifier
 @return ApiV1NativeIexLevel1QuoteSymbolGetRequest
*/
func (a *NativeIEXAPIService) V1NativeIexLevel1QuoteSymbolGet(ctx context.Context, symbol string) ApiV1NativeIexLevel1QuoteSymbolGetRequest {
	return ApiV1NativeIexLevel1QuoteSymbolGetRequest{
		ApiService: a,
		ctx: ctx,
		symbol: symbol,
	}
}

// Execute executes the request
//  @return []Level1QuoteUpdateModel
func (a *NativeIEXAPIService) V1NativeIexLevel1QuoteSymbolGetExecute(r ApiV1NativeIexLevel1QuoteSymbolGetRequest) ([]Level1QuoteUpdateModel, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  []Level1QuoteUpdateModel
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "NativeIEXAPIService.V1NativeIexLevel1QuoteSymbolGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v1/native/iex/level1-quote/{symbol}"
	localVarPath = strings.Replace(localVarPath, "{"+"symbol"+"}", url.PathEscape(parameterValueToString(r.symbol, "symbol")), -1)

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}
	if r.date == nil {
		return localVarReturnValue, nil, reportError("date is required and must be specified")
	}

	parameterAddToHeaderOrQuery(localVarQueryParams, "date", r.date, "form", "")
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

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

type ApiV1NativeIexLevel2PriceLevelUpdateSymbolGetRequest struct {
	ctx context.Context
	ApiService *NativeIEXAPIService
	symbol string
	date *time.Time
}

// Optional date in format YYYY-MM-DD (defaults to latest available data)
func (r ApiV1NativeIexLevel2PriceLevelUpdateSymbolGetRequest) Date(date time.Time) ApiV1NativeIexLevel2PriceLevelUpdateSymbolGetRequest {
	r.date = &date
	return r
}

func (r ApiV1NativeIexLevel2PriceLevelUpdateSymbolGetRequest) Execute() ([]Level2PriceLevelUpdateModel, *http.Response, error) {
	return r.ApiService.V1NativeIexLevel2PriceLevelUpdateSymbolGetExecute(r)
}

/*
V1NativeIexLevel2PriceLevelUpdateSymbolGet Get Level-2 Price Level Book

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param symbol The symbol identifier
 @return ApiV1NativeIexLevel2PriceLevelUpdateSymbolGetRequest
*/
func (a *NativeIEXAPIService) V1NativeIexLevel2PriceLevelUpdateSymbolGet(ctx context.Context, symbol string) ApiV1NativeIexLevel2PriceLevelUpdateSymbolGetRequest {
	return ApiV1NativeIexLevel2PriceLevelUpdateSymbolGetRequest{
		ApiService: a,
		ctx: ctx,
		symbol: symbol,
	}
}

// Execute executes the request
//  @return []Level2PriceLevelUpdateModel
func (a *NativeIEXAPIService) V1NativeIexLevel2PriceLevelUpdateSymbolGetExecute(r ApiV1NativeIexLevel2PriceLevelUpdateSymbolGetRequest) ([]Level2PriceLevelUpdateModel, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  []Level2PriceLevelUpdateModel
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "NativeIEXAPIService.V1NativeIexLevel2PriceLevelUpdateSymbolGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v1/native/iex/level2-price-level-update/{symbol}"
	localVarPath = strings.Replace(localVarPath, "{"+"symbol"+"}", url.PathEscape(parameterValueToString(r.symbol, "symbol")), -1)

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}
	if r.date == nil {
		return localVarReturnValue, nil, reportError("date is required and must be specified")
	}

	parameterAddToHeaderOrQuery(localVarQueryParams, "date", r.date, "form", "")
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

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

type ApiV1NativeIexLevel3OrderBookSymbolGetRequest struct {
	ctx context.Context
	ApiService *NativeIEXAPIService
	symbol string
	date *time.Time
}

// Optional date in format YYYY-MM-DD (defaults to latest available data)
func (r ApiV1NativeIexLevel3OrderBookSymbolGetRequest) Date(date time.Time) ApiV1NativeIexLevel3OrderBookSymbolGetRequest {
	r.date = &date
	return r
}

func (r ApiV1NativeIexLevel3OrderBookSymbolGetRequest) Execute() ([]Level3OrderBookModel, *http.Response, error) {
	return r.ApiService.V1NativeIexLevel3OrderBookSymbolGetExecute(r)
}

/*
V1NativeIexLevel3OrderBookSymbolGet Get Level-3 Order Book

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param symbol The symbol identifier
 @return ApiV1NativeIexLevel3OrderBookSymbolGetRequest
*/
func (a *NativeIEXAPIService) V1NativeIexLevel3OrderBookSymbolGet(ctx context.Context, symbol string) ApiV1NativeIexLevel3OrderBookSymbolGetRequest {
	return ApiV1NativeIexLevel3OrderBookSymbolGetRequest{
		ApiService: a,
		ctx: ctx,
		symbol: symbol,
	}
}

// Execute executes the request
//  @return []Level3OrderBookModel
func (a *NativeIEXAPIService) V1NativeIexLevel3OrderBookSymbolGetExecute(r ApiV1NativeIexLevel3OrderBookSymbolGetRequest) ([]Level3OrderBookModel, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  []Level3OrderBookModel
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "NativeIEXAPIService.V1NativeIexLevel3OrderBookSymbolGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v1/native/iex/level3-order-book/{symbol}"
	localVarPath = strings.Replace(localVarPath, "{"+"symbol"+"}", url.PathEscape(parameterValueToString(r.symbol, "symbol")), -1)

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}
	if r.date == nil {
		return localVarReturnValue, nil, reportError("date is required and must be specified")
	}

	parameterAddToHeaderOrQuery(localVarQueryParams, "date", r.date, "form", "")
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

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

type ApiV1NativeIexTradeSymbolGetRequest struct {
	ctx context.Context
	ApiService *NativeIEXAPIService
	symbol string
	date *time.Time
}

// Optional date in format YYYY-MM-DD (defaults to latest available data)
func (r ApiV1NativeIexTradeSymbolGetRequest) Date(date time.Time) ApiV1NativeIexTradeSymbolGetRequest {
	r.date = &date
	return r
}

func (r ApiV1NativeIexTradeSymbolGetRequest) Execute() ([]TradeTradeModel, *http.Response, error) {
	return r.ApiService.V1NativeIexTradeSymbolGetExecute(r)
}

/*
V1NativeIexTradeSymbolGet Get Trades

 @param ctx context.Context - for authentication, logging, cancellation, deadlines, tracing, etc. Passed from http.Request or context.Background().
 @param symbol The symbol identifier
 @return ApiV1NativeIexTradeSymbolGetRequest
*/
func (a *NativeIEXAPIService) V1NativeIexTradeSymbolGet(ctx context.Context, symbol string) ApiV1NativeIexTradeSymbolGetRequest {
	return ApiV1NativeIexTradeSymbolGetRequest{
		ApiService: a,
		ctx: ctx,
		symbol: symbol,
	}
}

// Execute executes the request
//  @return []TradeTradeModel
func (a *NativeIEXAPIService) V1NativeIexTradeSymbolGetExecute(r ApiV1NativeIexTradeSymbolGetRequest) ([]TradeTradeModel, *http.Response, error) {
	var (
		localVarHTTPMethod   = http.MethodGet
		localVarPostBody     interface{}
		formFiles            []formFile
		localVarReturnValue  []TradeTradeModel
	)

	localBasePath, err := a.client.cfg.ServerURLWithContext(r.ctx, "NativeIEXAPIService.V1NativeIexTradeSymbolGet")
	if err != nil {
		return localVarReturnValue, nil, &GenericOpenAPIError{error: err.Error()}
	}

	localVarPath := localBasePath + "/v1/native/iex/trade/{symbol}"
	localVarPath = strings.Replace(localVarPath, "{"+"symbol"+"}", url.PathEscape(parameterValueToString(r.symbol, "symbol")), -1)

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := url.Values{}
	if r.date == nil {
		return localVarReturnValue, nil, reportError("date is required and must be specified")
	}

	parameterAddToHeaderOrQuery(localVarQueryParams, "date", r.date, "form", "")
	// to determine the Content-Type header
	localVarHTTPContentTypes := []string{}

	// set Content-Type header
	localVarHTTPContentType := selectHeaderContentType(localVarHTTPContentTypes)
	if localVarHTTPContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHTTPContentType
	}

	// to determine the Accept header
	localVarHTTPHeaderAccepts := []string{"application/json"}

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
