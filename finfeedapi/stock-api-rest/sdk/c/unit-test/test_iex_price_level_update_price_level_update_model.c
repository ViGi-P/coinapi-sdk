#ifndef iex_price_level_update_price_level_update_model_TEST
#define iex_price_level_update_price_level_update_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define iex_price_level_update_price_level_update_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/iex_price_level_update_price_level_update_model.h"
iex_price_level_update_price_level_update_model_t* instantiate_iex_price_level_update_price_level_update_model(int include_optional);



iex_price_level_update_price_level_update_model_t* instantiate_iex_price_level_update_price_level_update_model(int include_optional) {
  iex_price_level_update_price_level_update_model_t* iex_price_level_update_price_level_update_model = NULL;
  if (include_optional) {
    iex_price_level_update_price_level_update_model = iex_price_level_update_price_level_update_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      56,
      1.337
    );
  } else {
    iex_price_level_update_price_level_update_model = iex_price_level_update_price_level_update_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      56,
      1.337
    );
  }

  return iex_price_level_update_price_level_update_model;
}


#ifdef iex_price_level_update_price_level_update_model_MAIN

void test_iex_price_level_update_price_level_update_model(int include_optional) {
    iex_price_level_update_price_level_update_model_t* iex_price_level_update_price_level_update_model_1 = instantiate_iex_price_level_update_price_level_update_model(include_optional);

	cJSON* jsoniex_price_level_update_price_level_update_model_1 = iex_price_level_update_price_level_update_model_convertToJSON(iex_price_level_update_price_level_update_model_1);
	printf("iex_price_level_update_price_level_update_model :\n%s\n", cJSON_Print(jsoniex_price_level_update_price_level_update_model_1));
	iex_price_level_update_price_level_update_model_t* iex_price_level_update_price_level_update_model_2 = iex_price_level_update_price_level_update_model_parseFromJSON(jsoniex_price_level_update_price_level_update_model_1);
	cJSON* jsoniex_price_level_update_price_level_update_model_2 = iex_price_level_update_price_level_update_model_convertToJSON(iex_price_level_update_price_level_update_model_2);
	printf("repeating iex_price_level_update_price_level_update_model:\n%s\n", cJSON_Print(jsoniex_price_level_update_price_level_update_model_2));
}

int main() {
  test_iex_price_level_update_price_level_update_model(1);
  test_iex_price_level_update_price_level_update_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // iex_price_level_update_price_level_update_model_MAIN
#endif // iex_price_level_update_price_level_update_model_TEST
