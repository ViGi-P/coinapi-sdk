#ifndef v1_option_exchange_group_TEST
#define v1_option_exchange_group_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_option_exchange_group_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_option_exchange_group.h"
v1_option_exchange_group_t* instantiate_v1_option_exchange_group(int include_optional);



v1_option_exchange_group_t* instantiate_v1_option_exchange_group(int include_optional) {
  v1_option_exchange_group_t* v1_option_exchange_group = NULL;
  if (include_optional) {
    v1_option_exchange_group = v1_option_exchange_group_create(
      "0",
      "0",
      1.337,
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  } else {
    v1_option_exchange_group = v1_option_exchange_group_create(
      "0",
      "0",
      1.337,
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  }

  return v1_option_exchange_group;
}


#ifdef v1_option_exchange_group_MAIN

void test_v1_option_exchange_group(int include_optional) {
    v1_option_exchange_group_t* v1_option_exchange_group_1 = instantiate_v1_option_exchange_group(include_optional);

	cJSON* jsonv1_option_exchange_group_1 = v1_option_exchange_group_convertToJSON(v1_option_exchange_group_1);
	printf("v1_option_exchange_group :\n%s\n", cJSON_Print(jsonv1_option_exchange_group_1));
	v1_option_exchange_group_t* v1_option_exchange_group_2 = v1_option_exchange_group_parseFromJSON(jsonv1_option_exchange_group_1);
	cJSON* jsonv1_option_exchange_group_2 = v1_option_exchange_group_convertToJSON(v1_option_exchange_group_2);
	printf("repeating v1_option_exchange_group:\n%s\n", cJSON_Print(jsonv1_option_exchange_group_2));
}

int main() {
  test_v1_option_exchange_group(1);
  test_v1_option_exchange_group(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_option_exchange_group_MAIN
#endif // v1_option_exchange_group_TEST
