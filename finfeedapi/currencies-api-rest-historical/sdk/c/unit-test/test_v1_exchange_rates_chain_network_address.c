#ifndef v1_exchange_rates_chain_network_address_TEST
#define v1_exchange_rates_chain_network_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_exchange_rates_chain_network_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_exchange_rates_chain_network_address.h"
v1_exchange_rates_chain_network_address_t* instantiate_v1_exchange_rates_chain_network_address(int include_optional);



v1_exchange_rates_chain_network_address_t* instantiate_v1_exchange_rates_chain_network_address(int include_optional) {
  v1_exchange_rates_chain_network_address_t* v1_exchange_rates_chain_network_address = NULL;
  if (include_optional) {
    v1_exchange_rates_chain_network_address = v1_exchange_rates_chain_network_address_create(
      "0",
      "0",
      "0"
    );
  } else {
    v1_exchange_rates_chain_network_address = v1_exchange_rates_chain_network_address_create(
      "0",
      "0",
      "0"
    );
  }

  return v1_exchange_rates_chain_network_address;
}


#ifdef v1_exchange_rates_chain_network_address_MAIN

void test_v1_exchange_rates_chain_network_address(int include_optional) {
    v1_exchange_rates_chain_network_address_t* v1_exchange_rates_chain_network_address_1 = instantiate_v1_exchange_rates_chain_network_address(include_optional);

	cJSON* jsonv1_exchange_rates_chain_network_address_1 = v1_exchange_rates_chain_network_address_convertToJSON(v1_exchange_rates_chain_network_address_1);
	printf("v1_exchange_rates_chain_network_address :\n%s\n", cJSON_Print(jsonv1_exchange_rates_chain_network_address_1));
	v1_exchange_rates_chain_network_address_t* v1_exchange_rates_chain_network_address_2 = v1_exchange_rates_chain_network_address_parseFromJSON(jsonv1_exchange_rates_chain_network_address_1);
	cJSON* jsonv1_exchange_rates_chain_network_address_2 = v1_exchange_rates_chain_network_address_convertToJSON(v1_exchange_rates_chain_network_address_2);
	printf("repeating v1_exchange_rates_chain_network_address:\n%s\n", cJSON_Print(jsonv1_exchange_rates_chain_network_address_2));
}

int main() {
  test_v1_exchange_rates_chain_network_address(1);
  test_v1_exchange_rates_chain_network_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_exchange_rates_chain_network_address_MAIN
#endif // v1_exchange_rates_chain_network_address_TEST
