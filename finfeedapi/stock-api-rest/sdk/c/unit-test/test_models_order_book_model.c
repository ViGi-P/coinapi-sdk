#ifndef models_order_book_model_TEST
#define models_order_book_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_order_book_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_order_book_model.h"
models_order_book_model_t* instantiate_models_order_book_model(int include_optional);

#include "test_models_add_order_model.c"
#include "test_models_delete_order_model.c"
#include "test_models_modify_order_model.c"
#include "test_models_executed_order_model.c"
#include "test_models_clear_book_model.c"


models_order_book_model_t* instantiate_models_order_book_model(int include_optional) {
  models_order_book_model_t* models_order_book_model = NULL;
  if (include_optional) {
    models_order_book_model = models_order_book_model_create(
       // false, not to have infinite recursion
      instantiate_models_add_order_model(0),
       // false, not to have infinite recursion
      instantiate_models_delete_order_model(0),
       // false, not to have infinite recursion
      instantiate_models_modify_order_model(0),
       // false, not to have infinite recursion
      instantiate_models_executed_order_model(0),
       // false, not to have infinite recursion
      instantiate_models_clear_book_model(0)
    );
  } else {
    models_order_book_model = models_order_book_model_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return models_order_book_model;
}


#ifdef models_order_book_model_MAIN

void test_models_order_book_model(int include_optional) {
    models_order_book_model_t* models_order_book_model_1 = instantiate_models_order_book_model(include_optional);

	cJSON* jsonmodels_order_book_model_1 = models_order_book_model_convertToJSON(models_order_book_model_1);
	printf("models_order_book_model :\n%s\n", cJSON_Print(jsonmodels_order_book_model_1));
	models_order_book_model_t* models_order_book_model_2 = models_order_book_model_parseFromJSON(jsonmodels_order_book_model_1);
	cJSON* jsonmodels_order_book_model_2 = models_order_book_model_convertToJSON(models_order_book_model_2);
	printf("repeating models_order_book_model:\n%s\n", cJSON_Print(jsonmodels_order_book_model_2));
}

int main() {
  test_models_order_book_model(1);
  test_models_order_book_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_order_book_model_MAIN
#endif // models_order_book_model_TEST
