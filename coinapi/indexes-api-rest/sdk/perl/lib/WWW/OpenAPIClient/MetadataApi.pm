=begin comment

CoinAPI Indexes REST API

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
package WWW::OpenAPIClient::MetadataApi;

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
# api_metadata_exchanges_exchange_id_get
#
# List all exchanges by exchange_id
#
# @param string $exchange_id The ID of the exchange. (required)
{
    my $params = {
    'exchange_id' => {
        data_type => 'string',
        description => 'The ID of the exchange.',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'api_metadata_exchanges_exchange_id_get' } = {
        summary => 'List all exchanges by exchange_id',
        params => $params,
        returns => 'ARRAY[MetadataExchange]',
        };
}
# @return ARRAY[MetadataExchange]
#
sub api_metadata_exchanges_exchange_id_get {
    my ($self, %args) = @_;

    # verify the required parameter 'exchange_id' is set
    unless (exists $args{'exchange_id'}) {
      croak("Missing the required parameter 'exchange_id' when calling api_metadata_exchanges_exchange_id_get");
    }

    # parse inputs
    my $_resource_path = '/api/metadata/exchanges/{exchange_id}';

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

    # path params
    if ( exists $args{'exchange_id'}) {
        my $_base_variable = "{" . "exchange_id" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'exchange_id'});
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
    my $_response_object = $self->{api_client}->deserialize('ARRAY[MetadataExchange]', $response);
    return $_response_object;
}

#
# api_metadata_exchanges_get
#
# List all exchanges
#
# @param string $filter_exchange_id Comma or semicolon delimited exchange identifiers used to filter response. (optional, eg. &#x60;BITSTAMP;GEMINI&#x60;) (optional)
{
    my $params = {
    'filter_exchange_id' => {
        data_type => 'string',
        description => 'Comma or semicolon delimited exchange identifiers used to filter response. (optional, eg. &#x60;BITSTAMP;GEMINI&#x60;)',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'api_metadata_exchanges_get' } = {
        summary => 'List all exchanges',
        params => $params,
        returns => 'ARRAY[MetadataExchange]',
        };
}
# @return ARRAY[MetadataExchange]
#
sub api_metadata_exchanges_get {
    my ($self, %args) = @_;

    # parse inputs
    my $_resource_path = '/api/metadata/exchanges';

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
    if ( exists $args{'filter_exchange_id'}) {
        $query_params->{'filter_exchange_id'} = $self->{api_client}->to_query_value($args{'filter_exchange_id'});
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
    my $_response_object = $self->{api_client}->deserialize('ARRAY[MetadataExchange]', $response);
    return $_response_object;
}

1;
