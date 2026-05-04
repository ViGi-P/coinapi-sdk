#ifndef iex_trade_trade_model_TEST
#define iex_trade_trade_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define iex_trade_trade_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/iex_trade_trade_model.h"
iex_trade_trade_model_t* instantiate_iex_trade_trade_model(int include_optional);



iex_trade_trade_model_t* instantiate_iex_trade_trade_model(int include_optional) {
  iex_trade_trade_model_t* iex_trade_trade_model = NULL;
  if (include_optional) {
    iex_trade_trade_model = iex_trade_trade_model_create(
      1,
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      1.337,
      56,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    iex_trade_trade_model = iex_trade_trade_model_create(
      1,
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      1.337,
      56,
      1,
      1,
      1,
      1,
      1
    );
  }

  return iex_trade_trade_model;
}


#ifdef iex_trade_trade_model_MAIN

void test_iex_trade_trade_model(int include_optional) {
    iex_trade_trade_model_t* iex_trade_trade_model_1 = instantiate_iex_trade_trade_model(include_optional);

	cJSON* jsoniex_trade_trade_model_1 = iex_trade_trade_model_convertToJSON(iex_trade_trade_model_1);
	printf("iex_trade_trade_model :\n%s\n", cJSON_Print(jsoniex_trade_trade_model_1));
	iex_trade_trade_model_t* iex_trade_trade_model_2 = iex_trade_trade_model_parseFromJSON(jsoniex_trade_trade_model_1);
	cJSON* jsoniex_trade_trade_model_2 = iex_trade_trade_model_convertToJSON(iex_trade_trade_model_2);
	printf("repeating iex_trade_trade_model:\n%s\n", cJSON_Print(jsoniex_trade_trade_model_2));
}

int main() {
  test_iex_trade_trade_model(1);
  test_iex_trade_trade_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // iex_trade_trade_model_MAIN
#endif // iex_trade_trade_model_TEST
