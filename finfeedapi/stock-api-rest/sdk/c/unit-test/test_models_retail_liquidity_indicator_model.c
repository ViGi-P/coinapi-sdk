#ifndef models_retail_liquidity_indicator_model_TEST
#define models_retail_liquidity_indicator_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_retail_liquidity_indicator_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_retail_liquidity_indicator_model.h"
models_retail_liquidity_indicator_model_t* instantiate_models_retail_liquidity_indicator_model(int include_optional);



models_retail_liquidity_indicator_model_t* instantiate_models_retail_liquidity_indicator_model(int include_optional) {
  models_retail_liquidity_indicator_model_t* models_retail_liquidity_indicator_model = NULL;
  if (include_optional) {
    models_retail_liquidity_indicator_model = models_retail_liquidity_indicator_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      "0",
      1,
      1,
      1,
      1
    );
  } else {
    models_retail_liquidity_indicator_model = models_retail_liquidity_indicator_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      "0",
      1,
      1,
      1,
      1
    );
  }

  return models_retail_liquidity_indicator_model;
}


#ifdef models_retail_liquidity_indicator_model_MAIN

void test_models_retail_liquidity_indicator_model(int include_optional) {
    models_retail_liquidity_indicator_model_t* models_retail_liquidity_indicator_model_1 = instantiate_models_retail_liquidity_indicator_model(include_optional);

	cJSON* jsonmodels_retail_liquidity_indicator_model_1 = models_retail_liquidity_indicator_model_convertToJSON(models_retail_liquidity_indicator_model_1);
	printf("models_retail_liquidity_indicator_model :\n%s\n", cJSON_Print(jsonmodels_retail_liquidity_indicator_model_1));
	models_retail_liquidity_indicator_model_t* models_retail_liquidity_indicator_model_2 = models_retail_liquidity_indicator_model_parseFromJSON(jsonmodels_retail_liquidity_indicator_model_1);
	cJSON* jsonmodels_retail_liquidity_indicator_model_2 = models_retail_liquidity_indicator_model_convertToJSON(models_retail_liquidity_indicator_model_2);
	printf("repeating models_retail_liquidity_indicator_model:\n%s\n", cJSON_Print(jsonmodels_retail_liquidity_indicator_model_2));
}

int main() {
  test_models_retail_liquidity_indicator_model(1);
  test_models_retail_liquidity_indicator_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_retail_liquidity_indicator_model_MAIN
#endif // models_retail_liquidity_indicator_model_TEST
