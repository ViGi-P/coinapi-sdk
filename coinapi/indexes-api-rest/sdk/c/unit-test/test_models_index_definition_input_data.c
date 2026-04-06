#ifndef models_index_definition_input_data_TEST
#define models_index_definition_input_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_index_definition_input_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_index_definition_input_data.h"
models_index_definition_input_data_t* instantiate_models_index_definition_input_data(int include_optional);



models_index_definition_input_data_t* instantiate_models_index_definition_input_data(int include_optional) {
  models_index_definition_input_data_t* models_index_definition_input_data = NULL;
  if (include_optional) {
    models_index_definition_input_data = models_index_definition_input_data_create(
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    models_index_definition_input_data = models_index_definition_input_data_create(
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return models_index_definition_input_data;
}


#ifdef models_index_definition_input_data_MAIN

void test_models_index_definition_input_data(int include_optional) {
    models_index_definition_input_data_t* models_index_definition_input_data_1 = instantiate_models_index_definition_input_data(include_optional);

	cJSON* jsonmodels_index_definition_input_data_1 = models_index_definition_input_data_convertToJSON(models_index_definition_input_data_1);
	printf("models_index_definition_input_data :\n%s\n", cJSON_Print(jsonmodels_index_definition_input_data_1));
	models_index_definition_input_data_t* models_index_definition_input_data_2 = models_index_definition_input_data_parseFromJSON(jsonmodels_index_definition_input_data_1);
	cJSON* jsonmodels_index_definition_input_data_2 = models_index_definition_input_data_convertToJSON(models_index_definition_input_data_2);
	printf("repeating models_index_definition_input_data:\n%s\n", cJSON_Print(jsonmodels_index_definition_input_data_2));
}

int main() {
  test_models_index_definition_input_data(1);
  test_models_index_definition_input_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_index_definition_input_data_MAIN
#endif // models_index_definition_input_data_TEST
