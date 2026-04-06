//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class MultiAssetWeightsApi {
  MultiAssetWeightsApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Get all multi-asset weights
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> v1IndexdefMultiassetGetWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/v1/indexdef/multiasset';

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

  /// Get all multi-asset weights
  Future<List<ModelsIndexMultiAssetWeight>?> v1IndexdefMultiassetGet() async {
    final response = await v1IndexdefMultiassetGetWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<ModelsIndexMultiAssetWeight>') as List)
        .cast<ModelsIndexMultiAssetWeight>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get multi-asset weights for specific index
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] indexId (required):
  Future<Response> v1IndexdefMultiassetIndexIdGetWithHttpInfo(String indexId,) async {
    // ignore: prefer_const_declarations
    final path = r'/v1/indexdef/multiasset/{index_id}'
      .replaceAll('{index_id}', indexId);

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

  /// Get multi-asset weights for specific index
  ///
  /// Parameters:
  ///
  /// * [String] indexId (required):
  Future<List<ModelsIndexMultiAssetWeight>?> v1IndexdefMultiassetIndexIdGet(String indexId,) async {
    final response = await v1IndexdefMultiassetIndexIdGetWithHttpInfo(indexId,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<ModelsIndexMultiAssetWeight>') as List)
        .cast<ModelsIndexMultiAssetWeight>()
        .toList(growable: false);

    }
    return null;
  }
}
