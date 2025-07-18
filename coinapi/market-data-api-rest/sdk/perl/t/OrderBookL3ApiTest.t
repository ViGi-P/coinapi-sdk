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

use_ok('WWW::OpenAPIClient::OrderBookL3Api');

my $api = WWW::OpenAPIClient::OrderBookL3Api->new();
isa_ok($api, 'WWW::OpenAPIClient::OrderBookL3Api');

#
# v1_orderbooks3_current_get test
#
# uncomment below and update the test
#my $v1_orderbooks3_current_get_filter_symbol_id = undef; # replace NULL with a proper value
#my $v1_orderbooks3_current_get_limit_levels = undef; # replace NULL with a proper value
#my $v1_orderbooks3_current_get_result = $api->v1_orderbooks3_current_get(filter_symbol_id => $v1_orderbooks3_current_get_filter_symbol_id, limit_levels => $v1_orderbooks3_current_get_limit_levels);

#
# v1_orderbooks3_symbol_id_current_get test
#
# uncomment below and update the test
#my $v1_orderbooks3_symbol_id_current_get_symbol_id = undef; # replace NULL with a proper value
#my $v1_orderbooks3_symbol_id_current_get_limit_levels = undef; # replace NULL with a proper value
#my $v1_orderbooks3_symbol_id_current_get_result = $api->v1_orderbooks3_symbol_id_current_get(symbol_id => $v1_orderbooks3_symbol_id_current_get_symbol_id, limit_levels => $v1_orderbooks3_symbol_id_current_get_limit_levels);


done_testing();
