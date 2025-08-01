=begin comment

CoinAPI Market Data REST API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: v1
Contact: support@apibricks.io
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator
# Please update the test cases below to test the API endpoints.
# Ref: https://openapi-generator.tech
#
use Test::More;
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::OpenAPIClient::OhlcvApi');

my $api = WWW::OpenAPIClient::OhlcvApi->new();
isa_ok($api, 'WWW::OpenAPIClient::OhlcvApi');

#
# v1_ohlcv_exchanges_exchange_id_history_get test
#
# uncomment below and update the test
#my $v1_ohlcv_exchanges_exchange_id_history_get_exchange_id = undef; # replace NULL with a proper value
#my $v1_ohlcv_exchanges_exchange_id_history_get_period_id = undef; # replace NULL with a proper value
#my $v1_ohlcv_exchanges_exchange_id_history_get_time_start = undef; # replace NULL with a proper value
#my $v1_ohlcv_exchanges_exchange_id_history_get_time_end = undef; # replace NULL with a proper value
#my $v1_ohlcv_exchanges_exchange_id_history_get_result = $api->v1_ohlcv_exchanges_exchange_id_history_get(exchange_id => $v1_ohlcv_exchanges_exchange_id_history_get_exchange_id, period_id => $v1_ohlcv_exchanges_exchange_id_history_get_period_id, time_start => $v1_ohlcv_exchanges_exchange_id_history_get_time_start, time_end => $v1_ohlcv_exchanges_exchange_id_history_get_time_end);

#
# v1_ohlcv_periods_get test
#
# uncomment below and update the test
#my $v1_ohlcv_periods_get_result = $api->v1_ohlcv_periods_get();

#
# v1_ohlcv_symbol_id_history_get test
#
# uncomment below and update the test
#my $v1_ohlcv_symbol_id_history_get_symbol_id = undef; # replace NULL with a proper value
#my $v1_ohlcv_symbol_id_history_get_period_id = undef; # replace NULL with a proper value
#my $v1_ohlcv_symbol_id_history_get_time_start = undef; # replace NULL with a proper value
#my $v1_ohlcv_symbol_id_history_get_time_end = undef; # replace NULL with a proper value
#my $v1_ohlcv_symbol_id_history_get_limit = undef; # replace NULL with a proper value
#my $v1_ohlcv_symbol_id_history_get_include_empty_items = undef; # replace NULL with a proper value
#my $v1_ohlcv_symbol_id_history_get_result = $api->v1_ohlcv_symbol_id_history_get(symbol_id => $v1_ohlcv_symbol_id_history_get_symbol_id, period_id => $v1_ohlcv_symbol_id_history_get_period_id, time_start => $v1_ohlcv_symbol_id_history_get_time_start, time_end => $v1_ohlcv_symbol_id_history_get_time_end, limit => $v1_ohlcv_symbol_id_history_get_limit, include_empty_items => $v1_ohlcv_symbol_id_history_get_include_empty_items);

#
# v1_ohlcv_symbol_id_latest_get test
#
# uncomment below and update the test
#my $v1_ohlcv_symbol_id_latest_get_symbol_id = undef; # replace NULL with a proper value
#my $v1_ohlcv_symbol_id_latest_get_period_id = undef; # replace NULL with a proper value
#my $v1_ohlcv_symbol_id_latest_get_limit = undef; # replace NULL with a proper value
#my $v1_ohlcv_symbol_id_latest_get_include_empty_items = undef; # replace NULL with a proper value
#my $v1_ohlcv_symbol_id_latest_get_result = $api->v1_ohlcv_symbol_id_latest_get(symbol_id => $v1_ohlcv_symbol_id_latest_get_symbol_id, period_id => $v1_ohlcv_symbol_id_latest_get_period_id, limit => $v1_ohlcv_symbol_id_latest_get_limit, include_empty_items => $v1_ohlcv_symbol_id_latest_get_include_empty_items);


done_testing();
