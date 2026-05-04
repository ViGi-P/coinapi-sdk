#ifndef models_auction_information_model_TEST
#define models_auction_information_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_auction_information_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_auction_information_model.h"
models_auction_information_model_t* instantiate_models_auction_information_model(int include_optional);



models_auction_information_model_t* instantiate_models_auction_information_model(int include_optional) {
  models_auction_information_model_t* models_auction_information_model = NULL;
  if (include_optional) {
    models_auction_information_model = models_auction_information_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      56,
      1.337,
      1.337,
      56,
      56,
      "0",
      "0",
      1,
      1,
      1,
      56,
      56,
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      1.337,
      1.337
    );
  } else {
    models_auction_information_model = models_auction_information_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      56,
      1.337,
      1.337,
      56,
      56,
      "0",
      "0",
      1,
      1,
      1,
      56,
      56,
      "2013-10-20T19:20:30+01:00",
      1.337,
      1.337,
      1.337,
      1.337
    );
  }

  return models_auction_information_model;
}


#ifdef models_auction_information_model_MAIN

void test_models_auction_information_model(int include_optional) {
    models_auction_information_model_t* models_auction_information_model_1 = instantiate_models_auction_information_model(include_optional);

	cJSON* jsonmodels_auction_information_model_1 = models_auction_information_model_convertToJSON(models_auction_information_model_1);
	printf("models_auction_information_model :\n%s\n", cJSON_Print(jsonmodels_auction_information_model_1));
	models_auction_information_model_t* models_auction_information_model_2 = models_auction_information_model_parseFromJSON(jsonmodels_auction_information_model_1);
	cJSON* jsonmodels_auction_information_model_2 = models_auction_information_model_convertToJSON(models_auction_information_model_2);
	printf("repeating models_auction_information_model:\n%s\n", cJSON_Print(jsonmodels_auction_information_model_2));
}

int main() {
  test_models_auction_information_model(1);
  test_models_auction_information_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_auction_information_model_MAIN
#endif // models_auction_information_model_TEST
