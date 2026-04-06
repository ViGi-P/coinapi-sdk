import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for IndexesApi
void main() {
  final instance = Openapi().getIndexesApi();

  group(IndexesApi, () {
    // List indexes
    //
    //Future<BuiltList<ModelsIndexIdentifier>> v1IndexesGet() async
    test('test v1IndexesGet', () async {
      // TODO
    });

    // Current Index Values for index definition
    //
    //Future<BuiltList<ModelsIndexDefinitionSnapshotEntry>> v1IndexesIndexDefinitionIdCurrentSnapshotGet(String indexDefinitionId) async
    test('test v1IndexesIndexDefinitionIdCurrentSnapshotGet', () async {
      // TODO
    });

    // Historical Index Values for index definition
    //
    //Future<BuiltList<ModelsIndexDefinitionSnapshotEntry>> v1IndexesIndexDefinitionIdHistorySnapshotGet(String indexDefinitionId, { DateTime time }) async
    test('test v1IndexesIndexDefinitionIdHistorySnapshotGet', () async {
      // TODO
    });

    // Current Index Value
    //
    //Future<ModelsIndexValue> v1IndexesIndexIdCurrentGet(String indexId) async
    test('test v1IndexesIndexIdCurrentGet', () async {
      // TODO
    });

    // Historical Index Value w/Composition
    //
    //Future<BuiltList<ModelsIndexValue>> v1IndexesIndexIdHistoryGet(String indexId, { DateTime timeStart, DateTime timeEnd, int limit }) async
    test('test v1IndexesIndexIdHistoryGet', () async {
      // TODO
    });

    // Timeseries Index Value
    //
    //Future<BuiltList<ModelsIndexTimeseriesItem>> v1IndexesIndexIdTimeseriesGet(String indexId, String periodId, String timeStart, String timeEnd, { int limit }) async
    test('test v1IndexesIndexIdTimeseriesGet', () async {
      // TODO
    });

  });
}
