#ifndef models_index_multi_asset_weight_TEST
#define models_index_multi_asset_weight_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_index_multi_asset_weight_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_index_multi_asset_weight.h"
models_index_multi_asset_weight_t* instantiate_models_index_multi_asset_weight(int include_optional);



models_index_multi_asset_weight_t* instantiate_models_index_multi_asset_weight(int include_optional) {
  models_index_multi_asset_weight_t* models_index_multi_asset_weight = NULL;
  if (include_optional) {
    models_index_multi_asset_weight = models_index_multi_asset_weight_create(
      "0",
      "0",
      1.337
    );
  } else {
    models_index_multi_asset_weight = models_index_multi_asset_weight_create(
      "0",
      "0",
      1.337
    );
  }

  return models_index_multi_asset_weight;
}


#ifdef models_index_multi_asset_weight_MAIN

void test_models_index_multi_asset_weight(int include_optional) {
    models_index_multi_asset_weight_t* models_index_multi_asset_weight_1 = instantiate_models_index_multi_asset_weight(include_optional);

	cJSON* jsonmodels_index_multi_asset_weight_1 = models_index_multi_asset_weight_convertToJSON(models_index_multi_asset_weight_1);
	printf("models_index_multi_asset_weight :\n%s\n", cJSON_Print(jsonmodels_index_multi_asset_weight_1));
	models_index_multi_asset_weight_t* models_index_multi_asset_weight_2 = models_index_multi_asset_weight_parseFromJSON(jsonmodels_index_multi_asset_weight_1);
	cJSON* jsonmodels_index_multi_asset_weight_2 = models_index_multi_asset_weight_convertToJSON(models_index_multi_asset_weight_2);
	printf("repeating models_index_multi_asset_weight:\n%s\n", cJSON_Print(jsonmodels_index_multi_asset_weight_2));
}

int main() {
  test_models_index_multi_asset_weight(1);
  test_models_index_multi_asset_weight(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_index_multi_asset_weight_MAIN
#endif // models_index_multi_asset_weight_TEST
