#ifndef models_clear_book_model_TEST
#define models_clear_book_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_clear_book_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_clear_book_model.h"
models_clear_book_model_t* instantiate_models_clear_book_model(int include_optional);



models_clear_book_model_t* instantiate_models_clear_book_model(int include_optional) {
  models_clear_book_model_t* models_clear_book_model = NULL;
  if (include_optional) {
    models_clear_book_model = models_clear_book_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    models_clear_book_model = models_clear_book_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return models_clear_book_model;
}


#ifdef models_clear_book_model_MAIN

void test_models_clear_book_model(int include_optional) {
    models_clear_book_model_t* models_clear_book_model_1 = instantiate_models_clear_book_model(include_optional);

	cJSON* jsonmodels_clear_book_model_1 = models_clear_book_model_convertToJSON(models_clear_book_model_1);
	printf("models_clear_book_model :\n%s\n", cJSON_Print(jsonmodels_clear_book_model_1));
	models_clear_book_model_t* models_clear_book_model_2 = models_clear_book_model_parseFromJSON(jsonmodels_clear_book_model_1);
	cJSON* jsonmodels_clear_book_model_2 = models_clear_book_model_convertToJSON(models_clear_book_model_2);
	printf("repeating models_clear_book_model:\n%s\n", cJSON_Print(jsonmodels_clear_book_model_2));
}

int main() {
  test_models_clear_book_model(1);
  test_models_clear_book_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_clear_book_model_MAIN
#endif // models_clear_book_model_TEST
