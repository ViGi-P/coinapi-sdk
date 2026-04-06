//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

import 'dart:async';

import 'package:built_value/json_object.dart';
import 'package:built_value/serializer.dart';
import 'package:dio/dio.dart';

import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/api_util.dart';
import 'package:openapi/src/model/models_index_definition_input_data.dart';
import 'package:openapi/src/model/models_index_definition_snapshot_entry.dart';

class IndexInputDataApi {

  final Dio _dio;

  final Serializers _serializers;

  const IndexInputDataApi(this._dio, this._serializers);

  /// Returns all data inputs for a specific index definition
  /// 
  ///
  /// Parameters:
  /// * [indexDefinitionId] 
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [BuiltList<ModelsIndexDefinitionInputData>] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<BuiltList<ModelsIndexDefinitionInputData>>> v1IndexdefInputDataIndexDefinitionIdAllGet({ 
    required String indexDefinitionId,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/v1/indexdef/input-data/{index_definition_id}/all'.replaceAll('{' r'index_definition_id' '}', encodeQueryParameter(_serializers, indexDefinitionId, const FullType(String)).toString());
    final _options = Options(
      method: r'GET',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'APIKey',
            'keyName': 'Authorization',
            'where': 'header',
          },{
            'type': 'http',
            'scheme': 'bearer',
            'name': 'JWT',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    BuiltList<ModelsIndexDefinitionInputData>? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(BuiltList, [FullType(ModelsIndexDefinitionInputData)]),
      ) as BuiltList<ModelsIndexDefinitionInputData>;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<BuiltList<ModelsIndexDefinitionInputData>>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

  /// Returns data inputs for certain index definition and time
  /// 
  ///
  /// Parameters:
  /// * [indexDefinitionId] 
  /// * [time] 
  /// * [enabledOnly] 
  /// * [pendingOnly] 
  /// * [filterAssetId] 
  /// * [withStatusInfo] 
  /// * [cancelToken] - A [CancelToken] that can be used to cancel the operation
  /// * [headers] - Can be used to add additional headers to the request
  /// * [extras] - Can be used to add flags to the request
  /// * [validateStatus] - A [ValidateStatus] callback that can be used to determine request success based on the HTTP status of the response
  /// * [onSendProgress] - A [ProgressCallback] that can be used to get the send progress
  /// * [onReceiveProgress] - A [ProgressCallback] that can be used to get the receive progress
  ///
  /// Returns a [Future] containing a [Response] with a [BuiltList<ModelsIndexDefinitionSnapshotEntry>] as data
  /// Throws [DioException] if API call or serialization fails
  Future<Response<BuiltList<ModelsIndexDefinitionSnapshotEntry>>> v1IndexdefInputDataIndexDefinitionIdGet({ 
    required String indexDefinitionId,
    DateTime? time,
    bool? enabledOnly = false,
    bool? pendingOnly = false,
    String? filterAssetId,
    bool? withStatusInfo = false,
    CancelToken? cancelToken,
    Map<String, dynamic>? headers,
    Map<String, dynamic>? extra,
    ValidateStatus? validateStatus,
    ProgressCallback? onSendProgress,
    ProgressCallback? onReceiveProgress,
  }) async {
    final _path = r'/v1/indexdef/input-data/{index_definition_id}'.replaceAll('{' r'index_definition_id' '}', encodeQueryParameter(_serializers, indexDefinitionId, const FullType(String)).toString());
    final _options = Options(
      method: r'GET',
      headers: <String, dynamic>{
        ...?headers,
      },
      extra: <String, dynamic>{
        'secure': <Map<String, String>>[
          {
            'type': 'apiKey',
            'name': 'APIKey',
            'keyName': 'Authorization',
            'where': 'header',
          },{
            'type': 'http',
            'scheme': 'bearer',
            'name': 'JWT',
          },
        ],
        ...?extra,
      },
      validateStatus: validateStatus,
    );

    final _queryParameters = <String, dynamic>{
      if (time != null) r'time': encodeQueryParameter(_serializers, time, const FullType(DateTime)),
      if (enabledOnly != null) r'enabled_only': encodeQueryParameter(_serializers, enabledOnly, const FullType(bool)),
      if (pendingOnly != null) r'pending_only': encodeQueryParameter(_serializers, pendingOnly, const FullType(bool)),
      if (filterAssetId != null) r'filter_asset_id': encodeQueryParameter(_serializers, filterAssetId, const FullType(String)),
      if (withStatusInfo != null) r'with_status_info': encodeQueryParameter(_serializers, withStatusInfo, const FullType(bool)),
    };

    final _response = await _dio.request<Object>(
      _path,
      options: _options,
      queryParameters: _queryParameters,
      cancelToken: cancelToken,
      onSendProgress: onSendProgress,
      onReceiveProgress: onReceiveProgress,
    );

    BuiltList<ModelsIndexDefinitionSnapshotEntry>? _responseData;

    try {
      final rawResponse = _response.data;
      _responseData = rawResponse == null ? null : _serializers.deserialize(
        rawResponse,
        specifiedType: const FullType(BuiltList, [FullType(ModelsIndexDefinitionSnapshotEntry)]),
      ) as BuiltList<ModelsIndexDefinitionSnapshotEntry>;

    } catch (error, stackTrace) {
      throw DioException(
        requestOptions: _response.requestOptions,
        response: _response,
        type: DioExceptionType.unknown,
        error: error,
        stackTrace: stackTrace,
      );
    }

    return Response<BuiltList<ModelsIndexDefinitionSnapshotEntry>>(
      data: _responseData,
      headers: _response.headers,
      isRedirect: _response.isRedirect,
      requestOptions: _response.requestOptions,
      redirects: _response.redirects,
      statusCode: _response.statusCode,
      statusMessage: _response.statusMessage,
      extra: _response.extra,
    );
  }

}
