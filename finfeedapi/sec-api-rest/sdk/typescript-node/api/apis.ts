export * from './downloadApi';
import { DownloadApi } from './downloadApi';
export * from './extractorApi';
import { ExtractorApi } from './extractorApi';
export * from './filingsApi';
import { FilingsApi } from './filingsApi';
export * from './fullTextApi';
import { FullTextApi } from './fullTextApi';
export * from './xBRLConverterApi';
import { XBRLConverterApi } from './xBRLConverterApi';
import * as http from 'http';

export class HttpError extends Error {
    constructor (public response: http.IncomingMessage, public body: any, public statusCode?: number) {
        super('HTTP request failed');
        this.name = 'HttpError';
    }
}

export { RequestFile } from '../model/models';

export const APIS = [DownloadApi, ExtractorApi, FilingsApi, FullTextApi, XBRLConverterApi];
