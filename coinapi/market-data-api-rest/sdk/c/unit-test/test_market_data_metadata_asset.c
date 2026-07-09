#ifndef market_data_metadata_asset_TEST
#define market_data_metadata_asset_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define market_data_metadata_asset_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/market_data_metadata_asset.h"
market_data_metadata_asset_t* instantiate_market_data_metadata_asset(int include_optional);



market_data_metadata_asset_t* instantiate_market_data_metadata_asset(int include_optional) {
  market_data_metadata_asset_t* market_data_metadata_asset = NULL;
  if (include_optional) {
    market_data_metadata_asset = market_data_metadata_asset_create(
      "0",
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      56,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      1.337,
      1.337,
      1.337,
      list_createList(),
      "0",
      "0",
      "0"
    );
  } else {
    market_data_metadata_asset = market_data_metadata_asset_create(
      "0",
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      56,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      1.337,
      1.337,
      1.337,
      list_createList(),
      "0",
      "0",
      "0"
    );
  }

  return market_data_metadata_asset;
}


#ifdef market_data_metadata_asset_MAIN

void test_market_data_metadata_asset(int include_optional) {
    market_data_metadata_asset_t* market_data_metadata_asset_1 = instantiate_market_data_metadata_asset(include_optional);

	cJSON* jsonmarket_data_metadata_asset_1 = market_data_metadata_asset_convertToJSON(market_data_metadata_asset_1);
	printf("market_data_metadata_asset :\n%s\n", cJSON_Print(jsonmarket_data_metadata_asset_1));
	market_data_metadata_asset_t* market_data_metadata_asset_2 = market_data_metadata_asset_parseFromJSON(jsonmarket_data_metadata_asset_1);
	cJSON* jsonmarket_data_metadata_asset_2 = market_data_metadata_asset_convertToJSON(market_data_metadata_asset_2);
	printf("repeating market_data_metadata_asset:\n%s\n", cJSON_Print(jsonmarket_data_metadata_asset_2));
}

int main() {
  test_market_data_metadata_asset(1);
  test_market_data_metadata_asset(0);

  printf("Hello world \n");
  return 0;
}

#endif // market_data_metadata_asset_MAIN
#endif // market_data_metadata_asset_TEST
