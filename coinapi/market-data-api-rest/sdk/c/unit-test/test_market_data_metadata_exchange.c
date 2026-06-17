#ifndef market_data_metadata_exchange_TEST
#define market_data_metadata_exchange_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define market_data_metadata_exchange_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/market_data_metadata_exchange.h"
market_data_metadata_exchange_t* instantiate_market_data_metadata_exchange(int include_optional);



market_data_metadata_exchange_t* instantiate_market_data_metadata_exchange(int include_optional) {
  market_data_metadata_exchange_t* market_data_metadata_exchange = NULL;
  if (include_optional) {
    market_data_metadata_exchange = market_data_metadata_exchange_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      56,
      56,
      1.337,
      1.337,
      1.337,
      list_createList(),
      list_createList(),
      1.337,
      "0"
    );
  } else {
    market_data_metadata_exchange = market_data_metadata_exchange_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      56,
      56,
      1.337,
      1.337,
      1.337,
      list_createList(),
      list_createList(),
      1.337,
      "0"
    );
  }

  return market_data_metadata_exchange;
}


#ifdef market_data_metadata_exchange_MAIN

void test_market_data_metadata_exchange(int include_optional) {
    market_data_metadata_exchange_t* market_data_metadata_exchange_1 = instantiate_market_data_metadata_exchange(include_optional);

	cJSON* jsonmarket_data_metadata_exchange_1 = market_data_metadata_exchange_convertToJSON(market_data_metadata_exchange_1);
	printf("market_data_metadata_exchange :\n%s\n", cJSON_Print(jsonmarket_data_metadata_exchange_1));
	market_data_metadata_exchange_t* market_data_metadata_exchange_2 = market_data_metadata_exchange_parseFromJSON(jsonmarket_data_metadata_exchange_1);
	cJSON* jsonmarket_data_metadata_exchange_2 = market_data_metadata_exchange_convertToJSON(market_data_metadata_exchange_2);
	printf("repeating market_data_metadata_exchange:\n%s\n", cJSON_Print(jsonmarket_data_metadata_exchange_2));
}

int main() {
  test_market_data_metadata_exchange(1);
  test_market_data_metadata_exchange(0);

  printf("Hello world \n");
  return 0;
}

#endif // market_data_metadata_exchange_MAIN
#endif // market_data_metadata_exchange_TEST
