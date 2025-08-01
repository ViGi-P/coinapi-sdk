// tslint:disable
/**
 * FinFeedAPI SEC REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import type { Observable } from 'rxjs';
import type { AjaxResponse } from 'rxjs/ajax';
import { BaseAPI, throwIfNullOrUndefined } from '../runtime';
import type { OperationOpts, HttpHeaders, HttpQuery } from '../runtime';
import type {
    DTOExtractorType,
    MvcProblemDetails,
    MvcValidationProblemDetails,
} from '../models';

export interface V1ExtractorGetRequest {
    accessionNumber: string;
    type?: DTOExtractorType;
}

export interface V1ExtractorItemGetRequest {
    accessionNumber: string;
    itemNumber: string;
    type?: DTOExtractorType;
}

/**
 * no description
 */
export class ContentExtractionApi extends BaseAPI {

    /**
     * Retrieves filing content from the EDGAR database and intelligently classifies it according to form type and item categories.  ### Supported Form Types  Form Type | Description ----------|------------ 8-K      | Current report filing 10-K     | Annual report filing 10-Q     | Quarterly report filing  ### Content Classification - 8-K forms: Content classified by item numbers (e.g., 1.01, 2.01) - 10-K/10-Q forms: Items categorized by their respective part and item structure  :::note Both HTML and plain text documents are supported for content extraction. :::
     * Extract and classify SEC filing content
     */
    v1ExtractorGet({ accessionNumber, type }: V1ExtractorGetRequest): Observable<{ [key: string]: any; }>
    v1ExtractorGet({ accessionNumber, type }: V1ExtractorGetRequest, opts?: OperationOpts): Observable<AjaxResponse<{ [key: string]: any; }>>
    v1ExtractorGet({ accessionNumber, type }: V1ExtractorGetRequest, opts?: OperationOpts): Observable<{ [key: string]: any; } | AjaxResponse<{ [key: string]: any; }>> {
        throwIfNullOrUndefined(accessionNumber, 'accessionNumber', 'v1ExtractorGet');

        const headers: HttpHeaders = {
            ...(this.configuration.apiKey && { 'Authorization': this.configuration.apiKey('Authorization') }), // APIKey authentication
        };

        const query: HttpQuery = { // required parameters are used directly since they are already checked by throwIfNullOrUndefined
            'accession_number': accessionNumber,
        };

        if (type != null) { query['type'] = type; }

        return this.request<{ [key: string]: any; }>({
            url: '/v1/extractor',
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Retrieves filing content from the EDGAR database and returns only the text content of the specified item number.  ### Item Number Format  Form Type | Item Format Examples -----------|------------------- 8-K       | 1.01, 2.01, 7.01 10-K      | 1, 2, 3 10-K/10-Q | PartI 1, PartII 2  :::tip For best results, ensure the item number matches exactly with the filing\'s structure. :::
     * Extract specific item content from SEC filing
     */
    v1ExtractorItemGet({ accessionNumber, itemNumber, type }: V1ExtractorItemGetRequest): Observable<string>
    v1ExtractorItemGet({ accessionNumber, itemNumber, type }: V1ExtractorItemGetRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    v1ExtractorItemGet({ accessionNumber, itemNumber, type }: V1ExtractorItemGetRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(accessionNumber, 'accessionNumber', 'v1ExtractorItemGet');
        throwIfNullOrUndefined(itemNumber, 'itemNumber', 'v1ExtractorItemGet');

        const headers: HttpHeaders = {
            ...(this.configuration.apiKey && { 'Authorization': this.configuration.apiKey('Authorization') }), // APIKey authentication
        };

        const query: HttpQuery = { // required parameters are used directly since they are already checked by throwIfNullOrUndefined
            'accession_number': accessionNumber,
            'item_number': itemNumber,
        };

        if (type != null) { query['type'] = type; }

        return this.request<string>({
            url: '/v1/extractor/item',
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

}
