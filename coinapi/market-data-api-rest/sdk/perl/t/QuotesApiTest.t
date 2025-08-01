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

use_ok('WWW::OpenAPIClient::QuotesApi');

my $api = WWW::OpenAPIClient::QuotesApi->new();
isa_ok($api, 'WWW::OpenAPIClient::QuotesApi');

#
# v1_quotes_current_get test
#
# uncomment below and update the test
#my $v1_quotes_current_get_filter_symbol_id = undef; # replace NULL with a proper value
#my $v1_quotes_current_get_result = $api->v1_quotes_current_get(filter_symbol_id => $v1_quotes_current_get_filter_symbol_id);

#
# v1_quotes_latest_get test
#
# uncomment below and update the test
#my $v1_quotes_latest_get_filter_symbol_id = undef; # replace NULL with a proper value
#my $v1_quotes_latest_get_limit = undef; # replace NULL with a proper value
#my $v1_quotes_latest_get_result = $api->v1_quotes_latest_get(filter_symbol_id => $v1_quotes_latest_get_filter_symbol_id, limit => $v1_quotes_latest_get_limit);

#
# v1_quotes_symbol_id_current_get test
#
# uncomment below and update the test
#my $v1_quotes_symbol_id_current_get_symbol_id = undef; # replace NULL with a proper value
#my $v1_quotes_symbol_id_current_get_result = $api->v1_quotes_symbol_id_current_get(symbol_id => $v1_quotes_symbol_id_current_get_symbol_id);

#
# v1_quotes_symbol_id_history_get test
#
# uncomment below and update the test
#my $v1_quotes_symbol_id_history_get_symbol_id = undef; # replace NULL with a proper value
#my $v1_quotes_symbol_id_history_get_date = undef; # replace NULL with a proper value
#my $v1_quotes_symbol_id_history_get_time_start = undef; # replace NULL with a proper value
#my $v1_quotes_symbol_id_history_get_time_end = undef; # replace NULL with a proper value
#my $v1_quotes_symbol_id_history_get_limit = undef; # replace NULL with a proper value
#my $v1_quotes_symbol_id_history_get_result = $api->v1_quotes_symbol_id_history_get(symbol_id => $v1_quotes_symbol_id_history_get_symbol_id, date => $v1_quotes_symbol_id_history_get_date, time_start => $v1_quotes_symbol_id_history_get_time_start, time_end => $v1_quotes_symbol_id_history_get_time_end, limit => $v1_quotes_symbol_id_history_get_limit);

#
# v1_quotes_symbol_id_latest_get test
#
# uncomment below and update the test
#my $v1_quotes_symbol_id_latest_get_symbol_id = undef; # replace NULL with a proper value
#my $v1_quotes_symbol_id_latest_get_limit = undef; # replace NULL with a proper value
#my $v1_quotes_symbol_id_latest_get_result = $api->v1_quotes_symbol_id_latest_get(symbol_id => $v1_quotes_symbol_id_latest_get_symbol_id, limit => $v1_quotes_symbol_id_latest_get_limit);


done_testing();
