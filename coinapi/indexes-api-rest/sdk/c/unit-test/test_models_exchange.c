#ifndef models_exchange_TEST
#define models_exchange_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_exchange_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_exchange.h"
models_exchange_t* instantiate_models_exchange(int include_optional);



models_exchange_t* instantiate_models_exchange(int include_optional) {
  models_exchange_t* models_exchange = NULL;
  if (include_optional) {
    models_exchange = models_exchange_create(
      "0",
      "0",
      "0"
    );
  } else {
    models_exchange = models_exchange_create(
      "0",
      "0",
      "0"
    );
  }

  return models_exchange;
}


#ifdef models_exchange_MAIN

void test_models_exchange(int include_optional) {
    models_exchange_t* models_exchange_1 = instantiate_models_exchange(include_optional);

	cJSON* jsonmodels_exchange_1 = models_exchange_convertToJSON(models_exchange_1);
	printf("models_exchange :\n%s\n", cJSON_Print(jsonmodels_exchange_1));
	models_exchange_t* models_exchange_2 = models_exchange_parseFromJSON(jsonmodels_exchange_1);
	cJSON* jsonmodels_exchange_2 = models_exchange_convertToJSON(models_exchange_2);
	printf("repeating models_exchange:\n%s\n", cJSON_Print(jsonmodels_exchange_2));
}

int main() {
  test_models_exchange(1);
  test_models_exchange(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_exchange_MAIN
#endif // models_exchange_TEST
