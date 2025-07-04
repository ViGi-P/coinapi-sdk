/**
 * FinFeedAPI Stock REST API
 *
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
/* tslint:disable:no-unused-variable member-ordering */

import { Inject, Injectable, Optional }                      from '@angular/core';
import { HttpClient, HttpHeaders, HttpParams,
         HttpResponse, HttpEvent, HttpParameterCodec, HttpContext 
        }       from '@angular/common/http';
import { CustomHttpParameterCodec }                          from '../encoder';
import { Observable }                                        from 'rxjs';

// @ts-ignore
import { AdminAdminMessageModel } from '../model/adminAdminMessageModel';
// @ts-ignore
import { AdminSystemEventModel } from '../model/adminSystemEventModel';
// @ts-ignore
import { Level1QuoteUpdateModel } from '../model/level1QuoteUpdateModel';
// @ts-ignore
import { Level2PriceLevelUpdateModel } from '../model/level2PriceLevelUpdateModel';
// @ts-ignore
import { Level3OrderBookModel } from '../model/level3OrderBookModel';
// @ts-ignore
import { TradeTradeModel } from '../model/tradeTradeModel';

// @ts-ignore
import { BASE_PATH, COLLECTION_FORMATS }                     from '../variables';
import { Configuration }                                     from '../configuration';
import { BaseService } from '../api.base.service';



@Injectable({
  providedIn: 'root'
})
export class NativeIEXService extends BaseService {

    constructor(protected httpClient: HttpClient, @Optional() @Inject(BASE_PATH) basePath: string|string[], @Optional() configuration?: Configuration) {
        super(basePath, configuration);
    }

    /**
     * Get Admin Messages
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public v1NativeIexAdminMessagesSymbolGet(symbol: string, date: string, observe?: 'body', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<Array<AdminAdminMessageModel>>;
    public v1NativeIexAdminMessagesSymbolGet(symbol: string, date: string, observe?: 'response', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpResponse<Array<AdminAdminMessageModel>>>;
    public v1NativeIexAdminMessagesSymbolGet(symbol: string, date: string, observe?: 'events', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpEvent<Array<AdminAdminMessageModel>>>;
    public v1NativeIexAdminMessagesSymbolGet(symbol: string, date: string, observe: any = 'body', reportProgress: boolean = false, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<any> {
        if (symbol === null || symbol === undefined) {
            throw new Error('Required parameter symbol was null or undefined when calling v1NativeIexAdminMessagesSymbolGet.');
        }
        if (date === null || date === undefined) {
            throw new Error('Required parameter date was null or undefined when calling v1NativeIexAdminMessagesSymbolGet.');
        }

        let localVarQueryParameters = new HttpParams({encoder: this.encoder});
        localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
          <any>date, 'date');

        let localVarHeaders = this.defaultHeaders;

        // authentication (APIKey) required
        localVarHeaders = this.configuration.addCredentialToHeaders('APIKey', 'Authorization', localVarHeaders);

        // authentication (JWT) required
        localVarHeaders = this.configuration.addCredentialToHeaders('JWT', 'Authorization', localVarHeaders, 'Bearer ');

        const localVarHttpHeaderAcceptSelected: string | undefined = options?.httpHeaderAccept ?? this.configuration.selectHeaderAccept([
            'application/json'
        ]);
        if (localVarHttpHeaderAcceptSelected !== undefined) {
            localVarHeaders = localVarHeaders.set('Accept', localVarHttpHeaderAcceptSelected);
        }

        const localVarHttpContext: HttpContext = options?.context ?? new HttpContext();

        const localVarTransferCache: boolean = options?.transferCache ?? true;


        let responseType_: 'text' | 'json' | 'blob' = 'json';
        if (localVarHttpHeaderAcceptSelected) {
            if (localVarHttpHeaderAcceptSelected.startsWith('text')) {
                responseType_ = 'text';
            } else if (this.configuration.isJsonMime(localVarHttpHeaderAcceptSelected)) {
                responseType_ = 'json';
            } else {
                responseType_ = 'blob';
            }
        }

        let localVarPath = `/v1/native/iex/admin/messages/${this.configuration.encodeParam({name: "symbol", value: symbol, in: "path", style: "simple", explode: false, dataType: "string", dataFormat: undefined})}`;
        const { basePath, withCredentials } = this.configuration;
        return this.httpClient.request<Array<AdminAdminMessageModel>>('get', `${basePath}${localVarPath}`,
            {
                context: localVarHttpContext,
                params: localVarQueryParameters,
                responseType: <any>responseType_,
                ...(withCredentials ? { withCredentials } : {}),
                headers: localVarHeaders,
                observe: observe,
                transferCache: localVarTransferCache,
                reportProgress: reportProgress
            }
        );
    }

    /**
     * Get System Events
     * @param date Date in format YYYY-MM-DD
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public v1NativeIexAdminSystemEventGet(date: string, observe?: 'body', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<Array<AdminSystemEventModel>>;
    public v1NativeIexAdminSystemEventGet(date: string, observe?: 'response', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpResponse<Array<AdminSystemEventModel>>>;
    public v1NativeIexAdminSystemEventGet(date: string, observe?: 'events', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpEvent<Array<AdminSystemEventModel>>>;
    public v1NativeIexAdminSystemEventGet(date: string, observe: any = 'body', reportProgress: boolean = false, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<any> {
        if (date === null || date === undefined) {
            throw new Error('Required parameter date was null or undefined when calling v1NativeIexAdminSystemEventGet.');
        }

        let localVarQueryParameters = new HttpParams({encoder: this.encoder});
        localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
          <any>date, 'date');

        let localVarHeaders = this.defaultHeaders;

        // authentication (APIKey) required
        localVarHeaders = this.configuration.addCredentialToHeaders('APIKey', 'Authorization', localVarHeaders);

        // authentication (JWT) required
        localVarHeaders = this.configuration.addCredentialToHeaders('JWT', 'Authorization', localVarHeaders, 'Bearer ');

        const localVarHttpHeaderAcceptSelected: string | undefined = options?.httpHeaderAccept ?? this.configuration.selectHeaderAccept([
            'application/json'
        ]);
        if (localVarHttpHeaderAcceptSelected !== undefined) {
            localVarHeaders = localVarHeaders.set('Accept', localVarHttpHeaderAcceptSelected);
        }

        const localVarHttpContext: HttpContext = options?.context ?? new HttpContext();

        const localVarTransferCache: boolean = options?.transferCache ?? true;


        let responseType_: 'text' | 'json' | 'blob' = 'json';
        if (localVarHttpHeaderAcceptSelected) {
            if (localVarHttpHeaderAcceptSelected.startsWith('text')) {
                responseType_ = 'text';
            } else if (this.configuration.isJsonMime(localVarHttpHeaderAcceptSelected)) {
                responseType_ = 'json';
            } else {
                responseType_ = 'blob';
            }
        }

        let localVarPath = `/v1/native/iex/admin/system-event`;
        const { basePath, withCredentials } = this.configuration;
        return this.httpClient.request<Array<AdminSystemEventModel>>('get', `${basePath}${localVarPath}`,
            {
                context: localVarHttpContext,
                params: localVarQueryParameters,
                responseType: <any>responseType_,
                ...(withCredentials ? { withCredentials } : {}),
                headers: localVarHeaders,
                observe: observe,
                transferCache: localVarTransferCache,
                reportProgress: reportProgress
            }
        );
    }

    /**
     * Get Level-1 Quotes
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public v1NativeIexLevel1QuoteSymbolGet(symbol: string, date: string, observe?: 'body', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<Array<Level1QuoteUpdateModel>>;
    public v1NativeIexLevel1QuoteSymbolGet(symbol: string, date: string, observe?: 'response', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpResponse<Array<Level1QuoteUpdateModel>>>;
    public v1NativeIexLevel1QuoteSymbolGet(symbol: string, date: string, observe?: 'events', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpEvent<Array<Level1QuoteUpdateModel>>>;
    public v1NativeIexLevel1QuoteSymbolGet(symbol: string, date: string, observe: any = 'body', reportProgress: boolean = false, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<any> {
        if (symbol === null || symbol === undefined) {
            throw new Error('Required parameter symbol was null or undefined when calling v1NativeIexLevel1QuoteSymbolGet.');
        }
        if (date === null || date === undefined) {
            throw new Error('Required parameter date was null or undefined when calling v1NativeIexLevel1QuoteSymbolGet.');
        }

        let localVarQueryParameters = new HttpParams({encoder: this.encoder});
        localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
          <any>date, 'date');

        let localVarHeaders = this.defaultHeaders;

        // authentication (APIKey) required
        localVarHeaders = this.configuration.addCredentialToHeaders('APIKey', 'Authorization', localVarHeaders);

        // authentication (JWT) required
        localVarHeaders = this.configuration.addCredentialToHeaders('JWT', 'Authorization', localVarHeaders, 'Bearer ');

        const localVarHttpHeaderAcceptSelected: string | undefined = options?.httpHeaderAccept ?? this.configuration.selectHeaderAccept([
            'application/json'
        ]);
        if (localVarHttpHeaderAcceptSelected !== undefined) {
            localVarHeaders = localVarHeaders.set('Accept', localVarHttpHeaderAcceptSelected);
        }

        const localVarHttpContext: HttpContext = options?.context ?? new HttpContext();

        const localVarTransferCache: boolean = options?.transferCache ?? true;


        let responseType_: 'text' | 'json' | 'blob' = 'json';
        if (localVarHttpHeaderAcceptSelected) {
            if (localVarHttpHeaderAcceptSelected.startsWith('text')) {
                responseType_ = 'text';
            } else if (this.configuration.isJsonMime(localVarHttpHeaderAcceptSelected)) {
                responseType_ = 'json';
            } else {
                responseType_ = 'blob';
            }
        }

        let localVarPath = `/v1/native/iex/level1-quote/${this.configuration.encodeParam({name: "symbol", value: symbol, in: "path", style: "simple", explode: false, dataType: "string", dataFormat: undefined})}`;
        const { basePath, withCredentials } = this.configuration;
        return this.httpClient.request<Array<Level1QuoteUpdateModel>>('get', `${basePath}${localVarPath}`,
            {
                context: localVarHttpContext,
                params: localVarQueryParameters,
                responseType: <any>responseType_,
                ...(withCredentials ? { withCredentials } : {}),
                headers: localVarHeaders,
                observe: observe,
                transferCache: localVarTransferCache,
                reportProgress: reportProgress
            }
        );
    }

    /**
     * Get Level-2 Price Level Book
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol: string, date: string, observe?: 'body', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<Array<Level2PriceLevelUpdateModel>>;
    public v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol: string, date: string, observe?: 'response', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpResponse<Array<Level2PriceLevelUpdateModel>>>;
    public v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol: string, date: string, observe?: 'events', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpEvent<Array<Level2PriceLevelUpdateModel>>>;
    public v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol: string, date: string, observe: any = 'body', reportProgress: boolean = false, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<any> {
        if (symbol === null || symbol === undefined) {
            throw new Error('Required parameter symbol was null or undefined when calling v1NativeIexLevel2PriceLevelUpdateSymbolGet.');
        }
        if (date === null || date === undefined) {
            throw new Error('Required parameter date was null or undefined when calling v1NativeIexLevel2PriceLevelUpdateSymbolGet.');
        }

        let localVarQueryParameters = new HttpParams({encoder: this.encoder});
        localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
          <any>date, 'date');

        let localVarHeaders = this.defaultHeaders;

        // authentication (APIKey) required
        localVarHeaders = this.configuration.addCredentialToHeaders('APIKey', 'Authorization', localVarHeaders);

        // authentication (JWT) required
        localVarHeaders = this.configuration.addCredentialToHeaders('JWT', 'Authorization', localVarHeaders, 'Bearer ');

        const localVarHttpHeaderAcceptSelected: string | undefined = options?.httpHeaderAccept ?? this.configuration.selectHeaderAccept([
            'application/json'
        ]);
        if (localVarHttpHeaderAcceptSelected !== undefined) {
            localVarHeaders = localVarHeaders.set('Accept', localVarHttpHeaderAcceptSelected);
        }

        const localVarHttpContext: HttpContext = options?.context ?? new HttpContext();

        const localVarTransferCache: boolean = options?.transferCache ?? true;


        let responseType_: 'text' | 'json' | 'blob' = 'json';
        if (localVarHttpHeaderAcceptSelected) {
            if (localVarHttpHeaderAcceptSelected.startsWith('text')) {
                responseType_ = 'text';
            } else if (this.configuration.isJsonMime(localVarHttpHeaderAcceptSelected)) {
                responseType_ = 'json';
            } else {
                responseType_ = 'blob';
            }
        }

        let localVarPath = `/v1/native/iex/level2-price-level-update/${this.configuration.encodeParam({name: "symbol", value: symbol, in: "path", style: "simple", explode: false, dataType: "string", dataFormat: undefined})}`;
        const { basePath, withCredentials } = this.configuration;
        return this.httpClient.request<Array<Level2PriceLevelUpdateModel>>('get', `${basePath}${localVarPath}`,
            {
                context: localVarHttpContext,
                params: localVarQueryParameters,
                responseType: <any>responseType_,
                ...(withCredentials ? { withCredentials } : {}),
                headers: localVarHeaders,
                observe: observe,
                transferCache: localVarTransferCache,
                reportProgress: reportProgress
            }
        );
    }

    /**
     * Get Level-3 Order Book
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public v1NativeIexLevel3OrderBookSymbolGet(symbol: string, date: string, observe?: 'body', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<Array<Level3OrderBookModel>>;
    public v1NativeIexLevel3OrderBookSymbolGet(symbol: string, date: string, observe?: 'response', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpResponse<Array<Level3OrderBookModel>>>;
    public v1NativeIexLevel3OrderBookSymbolGet(symbol: string, date: string, observe?: 'events', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpEvent<Array<Level3OrderBookModel>>>;
    public v1NativeIexLevel3OrderBookSymbolGet(symbol: string, date: string, observe: any = 'body', reportProgress: boolean = false, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<any> {
        if (symbol === null || symbol === undefined) {
            throw new Error('Required parameter symbol was null or undefined when calling v1NativeIexLevel3OrderBookSymbolGet.');
        }
        if (date === null || date === undefined) {
            throw new Error('Required parameter date was null or undefined when calling v1NativeIexLevel3OrderBookSymbolGet.');
        }

        let localVarQueryParameters = new HttpParams({encoder: this.encoder});
        localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
          <any>date, 'date');

        let localVarHeaders = this.defaultHeaders;

        // authentication (APIKey) required
        localVarHeaders = this.configuration.addCredentialToHeaders('APIKey', 'Authorization', localVarHeaders);

        // authentication (JWT) required
        localVarHeaders = this.configuration.addCredentialToHeaders('JWT', 'Authorization', localVarHeaders, 'Bearer ');

        const localVarHttpHeaderAcceptSelected: string | undefined = options?.httpHeaderAccept ?? this.configuration.selectHeaderAccept([
            'application/json'
        ]);
        if (localVarHttpHeaderAcceptSelected !== undefined) {
            localVarHeaders = localVarHeaders.set('Accept', localVarHttpHeaderAcceptSelected);
        }

        const localVarHttpContext: HttpContext = options?.context ?? new HttpContext();

        const localVarTransferCache: boolean = options?.transferCache ?? true;


        let responseType_: 'text' | 'json' | 'blob' = 'json';
        if (localVarHttpHeaderAcceptSelected) {
            if (localVarHttpHeaderAcceptSelected.startsWith('text')) {
                responseType_ = 'text';
            } else if (this.configuration.isJsonMime(localVarHttpHeaderAcceptSelected)) {
                responseType_ = 'json';
            } else {
                responseType_ = 'blob';
            }
        }

        let localVarPath = `/v1/native/iex/level3-order-book/${this.configuration.encodeParam({name: "symbol", value: symbol, in: "path", style: "simple", explode: false, dataType: "string", dataFormat: undefined})}`;
        const { basePath, withCredentials } = this.configuration;
        return this.httpClient.request<Array<Level3OrderBookModel>>('get', `${basePath}${localVarPath}`,
            {
                context: localVarHttpContext,
                params: localVarQueryParameters,
                responseType: <any>responseType_,
                ...(withCredentials ? { withCredentials } : {}),
                headers: localVarHeaders,
                observe: observe,
                transferCache: localVarTransferCache,
                reportProgress: reportProgress
            }
        );
    }

    /**
     * Get Trades
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @param observe set whether or not to return the data Observable as the body, response or events. defaults to returning the body.
     * @param reportProgress flag to report request and response progress.
     */
    public v1NativeIexTradeSymbolGet(symbol: string, date: string, observe?: 'body', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<Array<TradeTradeModel>>;
    public v1NativeIexTradeSymbolGet(symbol: string, date: string, observe?: 'response', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpResponse<Array<TradeTradeModel>>>;
    public v1NativeIexTradeSymbolGet(symbol: string, date: string, observe?: 'events', reportProgress?: boolean, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<HttpEvent<Array<TradeTradeModel>>>;
    public v1NativeIexTradeSymbolGet(symbol: string, date: string, observe: any = 'body', reportProgress: boolean = false, options?: {httpHeaderAccept?: 'application/json', context?: HttpContext, transferCache?: boolean}): Observable<any> {
        if (symbol === null || symbol === undefined) {
            throw new Error('Required parameter symbol was null or undefined when calling v1NativeIexTradeSymbolGet.');
        }
        if (date === null || date === undefined) {
            throw new Error('Required parameter date was null or undefined when calling v1NativeIexTradeSymbolGet.');
        }

        let localVarQueryParameters = new HttpParams({encoder: this.encoder});
        localVarQueryParameters = this.addToHttpParams(localVarQueryParameters,
          <any>date, 'date');

        let localVarHeaders = this.defaultHeaders;

        // authentication (APIKey) required
        localVarHeaders = this.configuration.addCredentialToHeaders('APIKey', 'Authorization', localVarHeaders);

        // authentication (JWT) required
        localVarHeaders = this.configuration.addCredentialToHeaders('JWT', 'Authorization', localVarHeaders, 'Bearer ');

        const localVarHttpHeaderAcceptSelected: string | undefined = options?.httpHeaderAccept ?? this.configuration.selectHeaderAccept([
            'application/json'
        ]);
        if (localVarHttpHeaderAcceptSelected !== undefined) {
            localVarHeaders = localVarHeaders.set('Accept', localVarHttpHeaderAcceptSelected);
        }

        const localVarHttpContext: HttpContext = options?.context ?? new HttpContext();

        const localVarTransferCache: boolean = options?.transferCache ?? true;


        let responseType_: 'text' | 'json' | 'blob' = 'json';
        if (localVarHttpHeaderAcceptSelected) {
            if (localVarHttpHeaderAcceptSelected.startsWith('text')) {
                responseType_ = 'text';
            } else if (this.configuration.isJsonMime(localVarHttpHeaderAcceptSelected)) {
                responseType_ = 'json';
            } else {
                responseType_ = 'blob';
            }
        }

        let localVarPath = `/v1/native/iex/trade/${this.configuration.encodeParam({name: "symbol", value: symbol, in: "path", style: "simple", explode: false, dataType: "string", dataFormat: undefined})}`;
        const { basePath, withCredentials } = this.configuration;
        return this.httpClient.request<Array<TradeTradeModel>>('get', `${basePath}${localVarPath}`,
            {
                context: localVarHttpContext,
                params: localVarQueryParameters,
                responseType: <any>responseType_,
                ...(withCredentials ? { withCredentials } : {}),
                headers: localVarHeaders,
                observe: observe,
                transferCache: localVarTransferCache,
                reportProgress: reportProgress
            }
        );
    }

}
