#ifndef models_index_identifier_TEST
#define models_index_identifier_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_index_identifier_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_index_identifier.h"
models_index_identifier_t* instantiate_models_index_identifier(int include_optional);



models_index_identifier_t* instantiate_models_index_identifier(int include_optional) {
  models_index_identifier_t* models_index_identifier = NULL;
  if (include_optional) {
    models_index_identifier = models_index_identifier_create(
      "0"
    );
  } else {
    models_index_identifier = models_index_identifier_create(
      "0"
    );
  }

  return models_index_identifier;
}


#ifdef models_index_identifier_MAIN

void test_models_index_identifier(int include_optional) {
    models_index_identifier_t* models_index_identifier_1 = instantiate_models_index_identifier(include_optional);

	cJSON* jsonmodels_index_identifier_1 = models_index_identifier_convertToJSON(models_index_identifier_1);
	printf("models_index_identifier :\n%s\n", cJSON_Print(jsonmodels_index_identifier_1));
	models_index_identifier_t* models_index_identifier_2 = models_index_identifier_parseFromJSON(jsonmodels_index_identifier_1);
	cJSON* jsonmodels_index_identifier_2 = models_index_identifier_convertToJSON(models_index_identifier_2);
	printf("repeating models_index_identifier:\n%s\n", cJSON_Print(jsonmodels_index_identifier_2));
}

int main() {
  test_models_index_identifier(1);
  test_models_index_identifier(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_index_identifier_MAIN
#endif // models_index_identifier_TEST
