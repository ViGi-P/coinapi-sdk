#ifndef models_delete_order_model_TEST
#define models_delete_order_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_delete_order_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_delete_order_model.h"
models_delete_order_model_t* instantiate_models_delete_order_model(int include_optional);



models_delete_order_model_t* instantiate_models_delete_order_model(int include_optional) {
  models_delete_order_model_t* models_delete_order_model = NULL;
  if (include_optional) {
    models_delete_order_model = models_delete_order_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56
    );
  } else {
    models_delete_order_model = models_delete_order_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56
    );
  }

  return models_delete_order_model;
}


#ifdef models_delete_order_model_MAIN

void test_models_delete_order_model(int include_optional) {
    models_delete_order_model_t* models_delete_order_model_1 = instantiate_models_delete_order_model(include_optional);

	cJSON* jsonmodels_delete_order_model_1 = models_delete_order_model_convertToJSON(models_delete_order_model_1);
	printf("models_delete_order_model :\n%s\n", cJSON_Print(jsonmodels_delete_order_model_1));
	models_delete_order_model_t* models_delete_order_model_2 = models_delete_order_model_parseFromJSON(jsonmodels_delete_order_model_1);
	cJSON* jsonmodels_delete_order_model_2 = models_delete_order_model_convertToJSON(models_delete_order_model_2);
	printf("repeating models_delete_order_model:\n%s\n", cJSON_Print(jsonmodels_delete_order_model_2));
}

int main() {
  test_models_delete_order_model(1);
  test_models_delete_order_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_delete_order_model_MAIN
#endif // models_delete_order_model_TEST
