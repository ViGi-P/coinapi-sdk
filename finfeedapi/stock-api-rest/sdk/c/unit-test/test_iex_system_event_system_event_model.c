#ifndef iex_system_event_system_event_model_TEST
#define iex_system_event_system_event_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define iex_system_event_system_event_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/iex_system_event_system_event_model.h"
iex_system_event_system_event_model_t* instantiate_iex_system_event_system_event_model(int include_optional);



iex_system_event_system_event_model_t* instantiate_iex_system_event_system_event_model(int include_optional) {
  iex_system_event_system_event_model_t* iex_system_event_system_event_model = NULL;
  if (include_optional) {
    iex_system_event_system_event_model = iex_system_event_system_event_model_create(
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    iex_system_event_system_event_model = iex_system_event_system_event_model_create(
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      "0",
      1,
      1,
      1,
      1,
      1,
      1
    );
  }

  return iex_system_event_system_event_model;
}


#ifdef iex_system_event_system_event_model_MAIN

void test_iex_system_event_system_event_model(int include_optional) {
    iex_system_event_system_event_model_t* iex_system_event_system_event_model_1 = instantiate_iex_system_event_system_event_model(include_optional);

	cJSON* jsoniex_system_event_system_event_model_1 = iex_system_event_system_event_model_convertToJSON(iex_system_event_system_event_model_1);
	printf("iex_system_event_system_event_model :\n%s\n", cJSON_Print(jsoniex_system_event_system_event_model_1));
	iex_system_event_system_event_model_t* iex_system_event_system_event_model_2 = iex_system_event_system_event_model_parseFromJSON(jsoniex_system_event_system_event_model_1);
	cJSON* jsoniex_system_event_system_event_model_2 = iex_system_event_system_event_model_convertToJSON(iex_system_event_system_event_model_2);
	printf("repeating iex_system_event_system_event_model:\n%s\n", cJSON_Print(jsoniex_system_event_system_event_model_2));
}

int main() {
  test_iex_system_event_system_event_model(1);
  test_iex_system_event_system_event_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // iex_system_event_system_event_model_MAIN
#endif // iex_system_event_system_event_model_TEST
