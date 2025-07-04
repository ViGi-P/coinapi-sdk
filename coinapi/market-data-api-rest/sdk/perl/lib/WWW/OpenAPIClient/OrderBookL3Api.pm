=begin comment

CoinAPI Market Data REST API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: v1
Contact: support@apibricks.io
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::OrderBookL3Api;

require 5.6.0;
use strict;
use warnings;
use utf8;
use Exporter;
use Carp qw( croak );
use Log::Any qw($log);

use WWW::OpenAPIClient::ApiClient;

use base "Class::Data::Inheritable";

__PACKAGE__->mk_classdata('method_documentation' => {});

sub new {
    my $class = shift;
    my $api_client;

    if ($_[0] && ref $_[0] && ref $_[0] eq 'WWW::OpenAPIClient::ApiClient' ) {
        $api_client = $_[0];
    } else {
        $api_client = WWW::OpenAPIClient::ApiClient->new(@_);
    }

    bless { api_client => $api_client }, $class;

}


#
# v1_orderbooks3_current_get
#
# Current order books
#
# @param string $filter_symbol_id Comma or semicolon delimited parts of symbol identifier used to filter the response. (optional)
# @param int $limit_levels The maximum number of levels to include in the response. (optional)
{
    my $params = {
    'filter_symbol_id' => {
        data_type => 'string',
        description => 'Comma or semicolon delimited parts of symbol identifier used to filter the response.',
        required => '0',
    },
    'limit_levels' => {
        data_type => 'int',
        description => 'The maximum number of levels to include in the response.',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'v1_orderbooks3_current_get' } = {
        summary => 'Current order books',
        params => $params,
        returns => 'ARRAY[V1OrderBookBase]',
        };
}
# @return ARRAY[V1OrderBookBase]
#
sub v1_orderbooks3_current_get {
    my ($self, %args) = @_;

    # parse inputs
    my $_resource_path = '/v1/orderbooks3/current';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('text/plain', 'application/json', 'text/json', 'application/x-msgpack');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'filter_symbol_id'}) {
        $query_params->{'filter_symbol_id'} = $self->{api_client}->to_query_value($args{'filter_symbol_id'});
    }

    # query params
    if ( exists $args{'limit_levels'}) {
        $query_params->{'limit_levels'} = $self->{api_client}->to_query_value($args{'limit_levels'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(APIKey JWT )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('ARRAY[V1OrderBookBase]', $response);
    return $_response_object;
}

#
# v1_orderbooks3_symbol_id_current_get
#
# Current order book by symbol_id
#
# @param string $symbol_id The symbol ID (from the Metadata -&gt; Symbols) (required)
# @param int $limit_levels The maximum number of levels to include in the response. (optional)
{
    my $params = {
    'symbol_id' => {
        data_type => 'string',
        description => 'The symbol ID (from the Metadata -&gt; Symbols)',
        required => '1',
    },
    'limit_levels' => {
        data_type => 'int',
        description => 'The maximum number of levels to include in the response.',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'v1_orderbooks3_symbol_id_current_get' } = {
        summary => 'Current order book by symbol_id',
        params => $params,
        returns => 'V1OrderBookBase',
        };
}
# @return V1OrderBookBase
#
sub v1_orderbooks3_symbol_id_current_get {
    my ($self, %args) = @_;

    # verify the required parameter 'symbol_id' is set
    unless (exists $args{'symbol_id'}) {
      croak("Missing the required parameter 'symbol_id' when calling v1_orderbooks3_symbol_id_current_get");
    }

    # parse inputs
    my $_resource_path = '/v1/orderbooks3/{symbol_id}/current';

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('text/plain', 'application/json', 'text/json', 'application/x-msgpack');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'limit_levels'}) {
        $query_params->{'limit_levels'} = $self->{api_client}->to_query_value($args{'limit_levels'});
    }

    # path params
    if ( exists $args{'symbol_id'}) {
        my $_base_variable = "{" . "symbol_id" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'symbol_id'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(APIKey JWT )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('V1OrderBookBase', $response);
    return $_response_object;
}

1;
