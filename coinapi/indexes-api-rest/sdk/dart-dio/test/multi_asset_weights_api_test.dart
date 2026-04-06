import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for MultiAssetWeightsApi
void main() {
  final instance = Openapi().getMultiAssetWeightsApi();

  group(MultiAssetWeightsApi, () {
    // Get all multi-asset weights
    //
    //Future<BuiltList<ModelsIndexMultiAssetWeight>> v1IndexdefMultiassetGet() async
    test('test v1IndexdefMultiassetGet', () async {
      // TODO
    });

    // Get multi-asset weights for specific index
    //
    //Future<BuiltList<ModelsIndexMultiAssetWeight>> v1IndexdefMultiassetIndexIdGet(String indexId) async
    test('test v1IndexdefMultiassetIndexIdGet', () async {
      // TODO
    });

  });
}
