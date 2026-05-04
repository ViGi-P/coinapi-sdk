//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

library openapi.api;

import 'dart:async';
import 'dart:convert';
import 'dart:io';

import 'package:collection/collection.dart';
import 'package:http/http.dart';
import 'package:intl/intl.dart';
import 'package:meta/meta.dart';

part 'api_client.dart';
part 'api_helper.dart';
part 'api_exception.dart';
part 'auth/authentication.dart';
part 'auth/api_key_auth.dart';
part 'auth/oauth.dart';
part 'auth/http_basic_auth.dart';
part 'auth/http_bearer_auth.dart';

part 'api/metadata_api.dart';
part 'api/native_iex_api.dart';
part 'api/ohlcv_api.dart';

part 'model/fin_feed_api_exchange_model.dart';
part 'model/fin_feed_api_symbol_model.dart';
part 'model/iex_price_level_update_price_level_update_model.dart';
part 'model/iex_quote_update_quote_update_model.dart';
part 'model/iex_system_event_system_event_model.dart';
part 'model/iex_trade_trade_model.dart';
part 'model/models_add_order_model.dart';
part 'model/models_admin_message_model.dart';
part 'model/models_auction_information_model.dart';
part 'model/models_clear_book_model.dart';
part 'model/models_delete_order_model.dart';
part 'model/models_executed_order_model.dart';
part 'model/models_modify_order_model.dart';
part 'model/models_official_price_model.dart';
part 'model/models_operational_halt_status_model.dart';
part 'model/models_order_book_model.dart';
part 'model/models_retail_liquidity_indicator_model.dart';
part 'model/models_security_directory_model.dart';
part 'model/models_security_event_model.dart';
part 'model/models_short_sale_price_test_status_model.dart';
part 'model/models_trading_status_model.dart';
part 'model/ohlcv_time_series_exchange_timeseries_item.dart';
part 'model/ohlcv_time_series_timeseries_item.dart';
part 'model/ohlcv_time_series_timeseries_period.dart';


/// An [ApiClient] instance that uses the default values obtained from
/// the OpenAPI specification file.
var defaultApiClient = ApiClient();

const _delimiters = {'csv': ',', 'ssv': ' ', 'tsv': '\t', 'pipes': '|'};
const _dateEpochMarker = 'epoch';
const _deepEquality = DeepCollectionEquality();
final _dateFormatter = DateFormat('yyyy-MM-dd');
final _regList = RegExp(r'^List<(.*)>$');
final _regSet = RegExp(r'^Set<(.*)>$');
final _regMap = RegExp(r'^Map<String,(.*)>$');

bool _isEpochMarker(String? pattern) => pattern == _dateEpochMarker || pattern == '/$_dateEpochMarker/';
