=begin comment

FX Realtime REST API

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

use_ok('WWW::OpenAPIClient::ExchangeRatesApi');

my $api = WWW::OpenAPIClient::ExchangeRatesApi->new();
isa_ok($api, 'WWW::OpenAPIClient::ExchangeRatesApi');

#
# get_specific_rate test
#
# uncomment below and update the test
#my $get_specific_rate_asset_id_base = undef; # replace NULL with a proper value
#my $get_specific_rate_asset_id_quote = undef; # replace NULL with a proper value
#my $get_specific_rate_result = $api->get_specific_rate(asset_id_base => $get_specific_rate_asset_id_base, asset_id_quote => $get_specific_rate_asset_id_quote);

#
# v1_exchangerate_asset_id_base_get test
#
# uncomment below and update the test
#my $v1_exchangerate_asset_id_base_get_asset_id_base = undef; # replace NULL with a proper value
#my $v1_exchangerate_asset_id_base_get_filter_asset_id = undef; # replace NULL with a proper value
#my $v1_exchangerate_asset_id_base_get_invert = undef; # replace NULL with a proper value
#my $v1_exchangerate_asset_id_base_get_result = $api->v1_exchangerate_asset_id_base_get(asset_id_base => $v1_exchangerate_asset_id_base_get_asset_id_base, filter_asset_id => $v1_exchangerate_asset_id_base_get_filter_asset_id, invert => $v1_exchangerate_asset_id_base_get_invert);


done_testing();
