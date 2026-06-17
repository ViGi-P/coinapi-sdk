#ifndef market_data_metadata_symbol_TEST
#define market_data_metadata_symbol_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define market_data_metadata_symbol_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/market_data_metadata_symbol.h"
market_data_metadata_symbol_t* instantiate_market_data_metadata_symbol(int include_optional);



market_data_metadata_symbol_t* instantiate_market_data_metadata_symbol(int include_optional) {
  market_data_metadata_symbol_t* market_data_metadata_symbol = NULL;
  if (include_optional) {
    market_data_metadata_symbol = market_data_metadata_symbol_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      1.337,
      1.337,
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1.337,
      "0",
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
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      1.337,
      1.337,
      list_createList(),
      1,
      1,
      1.337,
      1.337,
      "0",
      1.337,
      "0",
      56
    );
  } else {
    market_data_metadata_symbol = market_data_metadata_symbol_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      1.337,
      1.337,
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      1.337,
      "0",
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
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      1.337,
      1.337,
      list_createList(),
      1,
      1,
      1.337,
      1.337,
      "0",
      1.337,
      "0",
      56
    );
  }

  return market_data_metadata_symbol;
}


#ifdef market_data_metadata_symbol_MAIN

void test_market_data_metadata_symbol(int include_optional) {
    market_data_metadata_symbol_t* market_data_metadata_symbol_1 = instantiate_market_data_metadata_symbol(include_optional);

	cJSON* jsonmarket_data_metadata_symbol_1 = market_data_metadata_symbol_convertToJSON(market_data_metadata_symbol_1);
	printf("market_data_metadata_symbol :\n%s\n", cJSON_Print(jsonmarket_data_metadata_symbol_1));
	market_data_metadata_symbol_t* market_data_metadata_symbol_2 = market_data_metadata_symbol_parseFromJSON(jsonmarket_data_metadata_symbol_1);
	cJSON* jsonmarket_data_metadata_symbol_2 = market_data_metadata_symbol_convertToJSON(market_data_metadata_symbol_2);
	printf("repeating market_data_metadata_symbol:\n%s\n", cJSON_Print(jsonmarket_data_metadata_symbol_2));
}

int main() {
  test_market_data_metadata_symbol(1);
  test_market_data_metadata_symbol(0);

  printf("Hello world \n");
  return 0;
}

#endif // market_data_metadata_symbol_MAIN
#endif // market_data_metadata_symbol_TEST
