#ifndef models_operational_halt_status_model_TEST
#define models_operational_halt_status_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_operational_halt_status_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_operational_halt_status_model.h"
models_operational_halt_status_model_t* instantiate_models_operational_halt_status_model(int include_optional);



models_operational_halt_status_model_t* instantiate_models_operational_halt_status_model(int include_optional) {
  models_operational_halt_status_model_t* models_operational_halt_status_model = NULL;
  if (include_optional) {
    models_operational_halt_status_model = models_operational_halt_status_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      "0",
      1,
      1
    );
  } else {
    models_operational_halt_status_model = models_operational_halt_status_model_create(
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      56,
      "0",
      "0",
      1,
      1
    );
  }

  return models_operational_halt_status_model;
}


#ifdef models_operational_halt_status_model_MAIN

void test_models_operational_halt_status_model(int include_optional) {
    models_operational_halt_status_model_t* models_operational_halt_status_model_1 = instantiate_models_operational_halt_status_model(include_optional);

	cJSON* jsonmodels_operational_halt_status_model_1 = models_operational_halt_status_model_convertToJSON(models_operational_halt_status_model_1);
	printf("models_operational_halt_status_model :\n%s\n", cJSON_Print(jsonmodels_operational_halt_status_model_1));
	models_operational_halt_status_model_t* models_operational_halt_status_model_2 = models_operational_halt_status_model_parseFromJSON(jsonmodels_operational_halt_status_model_1);
	cJSON* jsonmodels_operational_halt_status_model_2 = models_operational_halt_status_model_convertToJSON(models_operational_halt_status_model_2);
	printf("repeating models_operational_halt_status_model:\n%s\n", cJSON_Print(jsonmodels_operational_halt_status_model_2));
}

int main() {
  test_models_operational_halt_status_model(1);
  test_models_operational_halt_status_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_operational_halt_status_model_MAIN
#endif // models_operational_halt_status_model_TEST
