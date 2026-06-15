//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class NativeIEXApi {
  NativeIEXApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Get Admin Messages
  ///
  /// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] symbol (required):
  ///   The symbol identifier
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<Response> v1NativeIexAdminMessagesSymbolGetWithHttpInfo(String symbol, DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    // ignore: prefer_const_declarations
    final path = r'/v1/native/iex/admin/messages/{symbol}'
      .replaceAll('{symbol}', symbol);

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'date', date));
    if (limit != null) {
      queryParams.addAll(_queryParams('', 'limit', limit));
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
      abortTrigger: abortTrigger,
    );
  }

  /// Get Admin Messages
  ///
  /// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
  ///
  /// Parameters:
  ///
  /// * [String] symbol (required):
  ///   The symbol identifier
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<List<ModelsAdminMessageModel>?> v1NativeIexAdminMessagesSymbolGet(String symbol, DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    final response = await v1NativeIexAdminMessagesSymbolGetWithHttpInfo(symbol, date, limit: limit, abortTrigger: abortTrigger,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<ModelsAdminMessageModel>') as List)
        .cast<ModelsAdminMessageModel>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get System Events
  ///
  /// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<Response> v1NativeIexAdminSystemEventGetWithHttpInfo(DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    // ignore: prefer_const_declarations
    final path = r'/v1/native/iex/admin/system-event';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'date', date));
    if (limit != null) {
      queryParams.addAll(_queryParams('', 'limit', limit));
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
      abortTrigger: abortTrigger,
    );
  }

  /// Get System Events
  ///
  /// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
  ///
  /// Parameters:
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<List<IEXSystemEventSystemEventModel>?> v1NativeIexAdminSystemEventGet(DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    final response = await v1NativeIexAdminSystemEventGetWithHttpInfo(date, limit: limit, abortTrigger: abortTrigger,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<IEXSystemEventSystemEventModel>') as List)
        .cast<IEXSystemEventSystemEventModel>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get Level-1 Quotes
  ///
  /// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] symbol (required):
  ///   The symbol identifier
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<Response> v1NativeIexLevel1QuoteSymbolGetWithHttpInfo(String symbol, DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    // ignore: prefer_const_declarations
    final path = r'/v1/native/iex/level1-quote/{symbol}'
      .replaceAll('{symbol}', symbol);

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'date', date));
    if (limit != null) {
      queryParams.addAll(_queryParams('', 'limit', limit));
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
      abortTrigger: abortTrigger,
    );
  }

  /// Get Level-1 Quotes
  ///
  /// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
  ///
  /// Parameters:
  ///
  /// * [String] symbol (required):
  ///   The symbol identifier
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<List<IEXQuoteUpdateQuoteUpdateModel>?> v1NativeIexLevel1QuoteSymbolGet(String symbol, DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    final response = await v1NativeIexLevel1QuoteSymbolGetWithHttpInfo(symbol, date, limit: limit, abortTrigger: abortTrigger,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<IEXQuoteUpdateQuoteUpdateModel>') as List)
        .cast<IEXQuoteUpdateQuoteUpdateModel>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get Level-2 Price Level Book
  ///
  /// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] symbol (required):
  ///   The symbol identifier
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<Response> v1NativeIexLevel2PriceLevelUpdateSymbolGetWithHttpInfo(String symbol, DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    // ignore: prefer_const_declarations
    final path = r'/v1/native/iex/level2-price-level-update/{symbol}'
      .replaceAll('{symbol}', symbol);

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'date', date));
    if (limit != null) {
      queryParams.addAll(_queryParams('', 'limit', limit));
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
      abortTrigger: abortTrigger,
    );
  }

  /// Get Level-2 Price Level Book
  ///
  /// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
  ///
  /// Parameters:
  ///
  /// * [String] symbol (required):
  ///   The symbol identifier
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<List<IEXPriceLevelUpdatePriceLevelUpdateModel>?> v1NativeIexLevel2PriceLevelUpdateSymbolGet(String symbol, DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    final response = await v1NativeIexLevel2PriceLevelUpdateSymbolGetWithHttpInfo(symbol, date, limit: limit, abortTrigger: abortTrigger,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<IEXPriceLevelUpdatePriceLevelUpdateModel>') as List)
        .cast<IEXPriceLevelUpdatePriceLevelUpdateModel>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get Level-3 Order Book
  ///
  /// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] symbol (required):
  ///   The symbol identifier
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<Response> v1NativeIexLevel3OrderBookSymbolGetWithHttpInfo(String symbol, DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    // ignore: prefer_const_declarations
    final path = r'/v1/native/iex/level3-order-book/{symbol}'
      .replaceAll('{symbol}', symbol);

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'date', date));
    if (limit != null) {
      queryParams.addAll(_queryParams('', 'limit', limit));
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
      abortTrigger: abortTrigger,
    );
  }

  /// Get Level-3 Order Book
  ///
  /// Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).
  ///
  /// Parameters:
  ///
  /// * [String] symbol (required):
  ///   The symbol identifier
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<List<ModelsOrderBookModel>?> v1NativeIexLevel3OrderBookSymbolGet(String symbol, DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    final response = await v1NativeIexLevel3OrderBookSymbolGetWithHttpInfo(symbol, date, limit: limit, abortTrigger: abortTrigger,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<ModelsOrderBookModel>') as List)
        .cast<ModelsOrderBookModel>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get Trades
  ///
  /// Streaming endpoint. Use `limit` to cap the number of trade records returned (default 100, max 10000).
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] symbol (required):
  ///   The symbol identifier
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<Response> v1NativeIexTradeSymbolGetWithHttpInfo(String symbol, DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    // ignore: prefer_const_declarations
    final path = r'/v1/native/iex/trade/{symbol}'
      .replaceAll('{symbol}', symbol);

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'date', date));
    if (limit != null) {
      queryParams.addAll(_queryParams('', 'limit', limit));
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
      abortTrigger: abortTrigger,
    );
  }

  /// Get Trades
  ///
  /// Streaming endpoint. Use `limit` to cap the number of trade records returned (default 100, max 10000).
  ///
  /// Parameters:
  ///
  /// * [String] symbol (required):
  ///   The symbol identifier
  ///
  /// * [DateTime] date (required):
  ///   Date in format YYYY-MM-DD
  ///
  /// * [int] limit:
  ///   Maximum number of records to return (1-10000, default 100)
  Future<List<IEXTradeTradeModel>?> v1NativeIexTradeSymbolGet(String symbol, DateTime date, { int? limit, Future<void>? abortTrigger, }) async {
    final response = await v1NativeIexTradeSymbolGetWithHttpInfo(symbol, date, limit: limit, abortTrigger: abortTrigger,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<IEXTradeTradeModel>') as List)
        .cast<IEXTradeTradeModel>()
        .toList(growable: false);

    }
    return null;
  }
}
