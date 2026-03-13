#ifndef models_index_value_TEST
#define models_index_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_index_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_index_value.h"
models_index_value_t* instantiate_models_index_value(int include_optional);



models_index_value_t* instantiate_models_index_value(int include_optional) {
  models_index_value_t* models_index_value = NULL;
  if (include_optional) {
    models_index_value = models_index_value_create(
      "2013-10-20T19:20:30+01:00",
      1.337,
      list_createList()
    );
  } else {
    models_index_value = models_index_value_create(
      "2013-10-20T19:20:30+01:00",
      1.337,
      list_createList()
    );
  }

  return models_index_value;
}


#ifdef models_index_value_MAIN

void test_models_index_value(int include_optional) {
    models_index_value_t* models_index_value_1 = instantiate_models_index_value(include_optional);

	cJSON* jsonmodels_index_value_1 = models_index_value_convertToJSON(models_index_value_1);
	printf("models_index_value :\n%s\n", cJSON_Print(jsonmodels_index_value_1));
	models_index_value_t* models_index_value_2 = models_index_value_parseFromJSON(jsonmodels_index_value_1);
	cJSON* jsonmodels_index_value_2 = models_index_value_convertToJSON(models_index_value_2);
	printf("repeating models_index_value:\n%s\n", cJSON_Print(jsonmodels_index_value_2));
}

int main() {
  test_models_index_value(1);
  test_models_index_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_index_value_MAIN
#endif // models_index_value_TEST
