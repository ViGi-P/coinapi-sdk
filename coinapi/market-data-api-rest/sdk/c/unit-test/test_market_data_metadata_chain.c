#ifndef market_data_metadata_chain_TEST
#define market_data_metadata_chain_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define market_data_metadata_chain_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/market_data_metadata_chain.h"
market_data_metadata_chain_t* instantiate_market_data_metadata_chain(int include_optional);



market_data_metadata_chain_t* instantiate_market_data_metadata_chain(int include_optional) {
  market_data_metadata_chain_t* market_data_metadata_chain = NULL;
  if (include_optional) {
    market_data_metadata_chain = market_data_metadata_chain_create(
      "0",
      "0"
    );
  } else {
    market_data_metadata_chain = market_data_metadata_chain_create(
      "0",
      "0"
    );
  }

  return market_data_metadata_chain;
}


#ifdef market_data_metadata_chain_MAIN

void test_market_data_metadata_chain(int include_optional) {
    market_data_metadata_chain_t* market_data_metadata_chain_1 = instantiate_market_data_metadata_chain(include_optional);

	cJSON* jsonmarket_data_metadata_chain_1 = market_data_metadata_chain_convertToJSON(market_data_metadata_chain_1);
	printf("market_data_metadata_chain :\n%s\n", cJSON_Print(jsonmarket_data_metadata_chain_1));
	market_data_metadata_chain_t* market_data_metadata_chain_2 = market_data_metadata_chain_parseFromJSON(jsonmarket_data_metadata_chain_1);
	cJSON* jsonmarket_data_metadata_chain_2 = market_data_metadata_chain_convertToJSON(market_data_metadata_chain_2);
	printf("repeating market_data_metadata_chain:\n%s\n", cJSON_Print(jsonmarket_data_metadata_chain_2));
}

int main() {
  test_market_data_metadata_chain(1);
  test_market_data_metadata_chain(0);

  printf("Hello world \n");
  return 0;
}

#endif // market_data_metadata_chain_MAIN
#endif // market_data_metadata_chain_TEST
