//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class RateLimitApi {
  RateLimitApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Performs an HTTP 'GET /internal/ratelimit/wsconcon/apikey' operation and returns the [Response].
  Future<Response> internalRatelimitWsconconApikeyGetWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/internal/ratelimit/wsconcon/apikey';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  Future<void> internalRatelimitWsconconApikeyGet() async {
    final response = await internalRatelimitWsconconApikeyGetWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Performs an HTTP 'GET /internal/ratelimit/wshello/ip' operation and returns the [Response].
  Future<Response> internalRatelimitWshelloIpGetWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/internal/ratelimit/wshello/ip';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  Future<void> internalRatelimitWshelloIpGet() async {
    final response = await internalRatelimitWshelloIpGetWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Performs an HTTP 'GET /internal/ratelimit/wsreq/ip' operation and returns the [Response].
  Future<Response> internalRatelimitWsreqIpGetWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/internal/ratelimit/wsreq/ip';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  Future<void> internalRatelimitWsreqIpGet() async {
    final response = await internalRatelimitWsreqIpGetWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }
}
