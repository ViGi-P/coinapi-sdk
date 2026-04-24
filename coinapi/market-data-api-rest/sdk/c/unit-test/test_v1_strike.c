#ifndef v1_strike_TEST
#define v1_strike_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_strike_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_strike.h"
v1_strike_t* instantiate_v1_strike(int include_optional);

#include "test_v1_quote_trade.c"
#include "test_v1_quote_trade.c"


v1_strike_t* instantiate_v1_strike(int include_optional) {
  v1_strike_t* v1_strike = NULL;
  if (include_optional) {
    v1_strike = v1_strike_create(
      1.337,
       // false, not to have infinite recursion
      instantiate_v1_quote_trade(0),
       // false, not to have infinite recursion
      instantiate_v1_quote_trade(0)
    );
  } else {
    v1_strike = v1_strike_create(
      1.337,
      NULL,
      NULL
    );
  }

  return v1_strike;
}


#ifdef v1_strike_MAIN

void test_v1_strike(int include_optional) {
    v1_strike_t* v1_strike_1 = instantiate_v1_strike(include_optional);

	cJSON* jsonv1_strike_1 = v1_strike_convertToJSON(v1_strike_1);
	printf("v1_strike :\n%s\n", cJSON_Print(jsonv1_strike_1));
	v1_strike_t* v1_strike_2 = v1_strike_parseFromJSON(jsonv1_strike_1);
	cJSON* jsonv1_strike_2 = v1_strike_convertToJSON(v1_strike_2);
	printf("repeating v1_strike:\n%s\n", cJSON_Print(jsonv1_strike_2));
}

int main() {
  test_v1_strike(1);
  test_v1_strike(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_strike_MAIN
#endif // v1_strike_TEST
