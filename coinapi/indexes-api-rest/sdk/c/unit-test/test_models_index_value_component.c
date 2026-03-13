#ifndef models_index_value_component_TEST
#define models_index_value_component_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_index_value_component_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_index_value_component.h"
models_index_value_component_t* instantiate_models_index_value_component(int include_optional);



models_index_value_component_t* instantiate_models_index_value_component(int include_optional) {
  models_index_value_component_t* models_index_value_component = NULL;
  if (include_optional) {
    models_index_value_component = models_index_value_component_create(
      "0",
      1.337
    );
  } else {
    models_index_value_component = models_index_value_component_create(
      "0",
      1.337
    );
  }

  return models_index_value_component;
}


#ifdef models_index_value_component_MAIN

void test_models_index_value_component(int include_optional) {
    models_index_value_component_t* models_index_value_component_1 = instantiate_models_index_value_component(include_optional);

	cJSON* jsonmodels_index_value_component_1 = models_index_value_component_convertToJSON(models_index_value_component_1);
	printf("models_index_value_component :\n%s\n", cJSON_Print(jsonmodels_index_value_component_1));
	models_index_value_component_t* models_index_value_component_2 = models_index_value_component_parseFromJSON(jsonmodels_index_value_component_1);
	cJSON* jsonmodels_index_value_component_2 = models_index_value_component_convertToJSON(models_index_value_component_2);
	printf("repeating models_index_value_component:\n%s\n", cJSON_Print(jsonmodels_index_value_component_2));
}

int main() {
  test_models_index_value_component(1);
  test_models_index_value_component(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_index_value_component_MAIN
#endif // models_index_value_component_TEST
