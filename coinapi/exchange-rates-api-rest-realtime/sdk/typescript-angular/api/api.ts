export * from './exchangeRates.service';
import { ExchangeRatesService } from './exchangeRates.service';
export * from './metadata.service';
import { MetadataService } from './metadata.service';
export * from './rateLimit.service';
import { RateLimitService } from './rateLimit.service';
export const APIS = [ExchangeRatesService, MetadataService, RateLimitService];
