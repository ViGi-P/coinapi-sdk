//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class IndexInputDataApi {
  IndexInputDataApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Returns all data inputs for a specific index definition
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] indexDefinitionId (required):
  Future<Response> v1IndexdefInputDataIndexDefinitionIdAllGetWithHttpInfo(String indexDefinitionId,) async {
    // ignore: prefer_const_declarations
    final path = r'/v1/indexdef/input-data/{index_definition_id}/all'
      .replaceAll('{index_definition_id}', indexDefinitionId);

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

  /// Returns all data inputs for a specific index definition
  ///
  /// Parameters:
  ///
  /// * [String] indexDefinitionId (required):
  Future<List<ModelsIndexDefinitionInputData>?> v1IndexdefInputDataIndexDefinitionIdAllGet(String indexDefinitionId,) async {
    final response = await v1IndexdefInputDataIndexDefinitionIdAllGetWithHttpInfo(indexDefinitionId,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<ModelsIndexDefinitionInputData>') as List)
        .cast<ModelsIndexDefinitionInputData>()
        .toList(growable: false);

    }
    return null;
  }

  /// Returns data inputs for certain index definition and time
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] indexDefinitionId (required):
  ///
  /// * [DateTime] time:
  ///
  /// * [bool] enabledOnly:
  ///
  /// * [bool] pendingOnly:
  ///
  /// * [String] filterAssetId:
  ///
  /// * [bool] withStatusInfo:
  Future<Response> v1IndexdefInputDataIndexDefinitionIdGetWithHttpInfo(String indexDefinitionId, { DateTime? time, bool? enabledOnly, bool? pendingOnly, String? filterAssetId, bool? withStatusInfo, }) async {
    // ignore: prefer_const_declarations
    final path = r'/v1/indexdef/input-data/{index_definition_id}'
      .replaceAll('{index_definition_id}', indexDefinitionId);

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (time != null) {
      queryParams.addAll(_queryParams('', 'time', time));
    }
    if (enabledOnly != null) {
      queryParams.addAll(_queryParams('', 'enabled_only', enabledOnly));
    }
    if (pendingOnly != null) {
      queryParams.addAll(_queryParams('', 'pending_only', pendingOnly));
    }
    if (filterAssetId != null) {
      queryParams.addAll(_queryParams('', 'filter_asset_id', filterAssetId));
    }
    if (withStatusInfo != null) {
      queryParams.addAll(_queryParams('', 'with_status_info', withStatusInfo));
    }

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

  /// Returns data inputs for certain index definition and time
  ///
  /// Parameters:
  ///
  /// * [String] indexDefinitionId (required):
  ///
  /// * [DateTime] time:
  ///
  /// * [bool] enabledOnly:
  ///
  /// * [bool] pendingOnly:
  ///
  /// * [String] filterAssetId:
  ///
  /// * [bool] withStatusInfo:
  Future<List<ModelsIndexDefinitionSnapshotEntry>?> v1IndexdefInputDataIndexDefinitionIdGet(String indexDefinitionId, { DateTime? time, bool? enabledOnly, bool? pendingOnly, String? filterAssetId, bool? withStatusInfo, }) async {
    final response = await v1IndexdefInputDataIndexDefinitionIdGetWithHttpInfo(indexDefinitionId,  time: time, enabledOnly: enabledOnly, pendingOnly: pendingOnly, filterAssetId: filterAssetId, withStatusInfo: withStatusInfo, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<ModelsIndexDefinitionSnapshotEntry>') as List)
        .cast<ModelsIndexDefinitionSnapshotEntry>()
        .toList(growable: false);

    }
    return null;
  }
}
