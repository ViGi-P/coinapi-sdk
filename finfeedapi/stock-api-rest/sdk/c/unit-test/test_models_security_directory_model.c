#ifndef models_security_directory_model_TEST
#define models_security_directory_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_security_directory_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_security_directory_model.h"
models_security_directory_model_t* instantiate_models_security_directory_model(int include_optional);



models_security_directory_model_t* instantiate_models_security_directory_model(int include_optional) {
  models_security_directory_model_t* models_security_directory_model = NULL;
  if (include_optional) {
    models_security_directory_model = models_security_directory_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      56,
      1.337,
      56,
      "0",
      "0",
      1,
      1,
      1
    );
  } else {
    models_security_directory_model = models_security_directory_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      56,
      1.337,
      56,
      "0",
      "0",
      1,
      1,
      1
    );
  }

  return models_security_directory_model;
}


#ifdef models_security_directory_model_MAIN

void test_models_security_directory_model(int include_optional) {
    models_security_directory_model_t* models_security_directory_model_1 = instantiate_models_security_directory_model(include_optional);

	cJSON* jsonmodels_security_directory_model_1 = models_security_directory_model_convertToJSON(models_security_directory_model_1);
	printf("models_security_directory_model :\n%s\n", cJSON_Print(jsonmodels_security_directory_model_1));
	models_security_directory_model_t* models_security_directory_model_2 = models_security_directory_model_parseFromJSON(jsonmodels_security_directory_model_1);
	cJSON* jsonmodels_security_directory_model_2 = models_security_directory_model_convertToJSON(models_security_directory_model_2);
	printf("repeating models_security_directory_model:\n%s\n", cJSON_Print(jsonmodels_security_directory_model_2));
}

int main() {
  test_models_security_directory_model(1);
  test_models_security_directory_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_security_directory_model_MAIN
#endif // models_security_directory_model_TEST
