#ifndef market_data_metadata_icon_TEST
#define market_data_metadata_icon_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define market_data_metadata_icon_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/market_data_metadata_icon.h"
market_data_metadata_icon_t* instantiate_market_data_metadata_icon(int include_optional);



market_data_metadata_icon_t* instantiate_market_data_metadata_icon(int include_optional) {
  market_data_metadata_icon_t* market_data_metadata_icon = NULL;
  if (include_optional) {
    market_data_metadata_icon = market_data_metadata_icon_create(
      "0",
      "0",
      "0"
    );
  } else {
    market_data_metadata_icon = market_data_metadata_icon_create(
      "0",
      "0",
      "0"
    );
  }

  return market_data_metadata_icon;
}


#ifdef market_data_metadata_icon_MAIN

void test_market_data_metadata_icon(int include_optional) {
    market_data_metadata_icon_t* market_data_metadata_icon_1 = instantiate_market_data_metadata_icon(include_optional);

	cJSON* jsonmarket_data_metadata_icon_1 = market_data_metadata_icon_convertToJSON(market_data_metadata_icon_1);
	printf("market_data_metadata_icon :\n%s\n", cJSON_Print(jsonmarket_data_metadata_icon_1));
	market_data_metadata_icon_t* market_data_metadata_icon_2 = market_data_metadata_icon_parseFromJSON(jsonmarket_data_metadata_icon_1);
	cJSON* jsonmarket_data_metadata_icon_2 = market_data_metadata_icon_convertToJSON(market_data_metadata_icon_2);
	printf("repeating market_data_metadata_icon:\n%s\n", cJSON_Print(jsonmarket_data_metadata_icon_2));
}

int main() {
  test_market_data_metadata_icon(1);
  test_market_data_metadata_icon(0);

  printf("Hello world \n");
  return 0;
}

#endif // market_data_metadata_icon_MAIN
#endif // market_data_metadata_icon_TEST
