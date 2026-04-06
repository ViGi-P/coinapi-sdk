import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for IndexInputDataApi
void main() {
  final instance = Openapi().getIndexInputDataApi();

  group(IndexInputDataApi, () {
    // Returns all data inputs for a specific index definition
    //
    //Future<BuiltList<ModelsIndexDefinitionInputData>> v1IndexdefInputDataIndexDefinitionIdAllGet(String indexDefinitionId) async
    test('test v1IndexdefInputDataIndexDefinitionIdAllGet', () async {
      // TODO
    });

    // Returns data inputs for certain index definition and time
    //
    //Future<BuiltList<ModelsIndexDefinitionSnapshotEntry>> v1IndexdefInputDataIndexDefinitionIdGet(String indexDefinitionId, { DateTime time, bool enabledOnly, bool pendingOnly, String filterAssetId, bool withStatusInfo }) async
    test('test v1IndexdefInputDataIndexDefinitionIdGet', () async {
      // TODO
    });

  });
}
