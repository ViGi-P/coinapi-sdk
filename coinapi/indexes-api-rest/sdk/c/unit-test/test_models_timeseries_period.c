#ifndef models_timeseries_period_TEST
#define models_timeseries_period_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_timeseries_period_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_timeseries_period.h"
models_timeseries_period_t* instantiate_models_timeseries_period(int include_optional);



models_timeseries_period_t* instantiate_models_timeseries_period(int include_optional) {
  models_timeseries_period_t* models_timeseries_period = NULL;
  if (include_optional) {
    models_timeseries_period = models_timeseries_period_create(
      "0",
      56,
      56,
      56,
      "0",
      "0"
    );
  } else {
    models_timeseries_period = models_timeseries_period_create(
      "0",
      56,
      56,
      56,
      "0",
      "0"
    );
  }

  return models_timeseries_period;
}


#ifdef models_timeseries_period_MAIN

void test_models_timeseries_period(int include_optional) {
    models_timeseries_period_t* models_timeseries_period_1 = instantiate_models_timeseries_period(include_optional);

	cJSON* jsonmodels_timeseries_period_1 = models_timeseries_period_convertToJSON(models_timeseries_period_1);
	printf("models_timeseries_period :\n%s\n", cJSON_Print(jsonmodels_timeseries_period_1));
	models_timeseries_period_t* models_timeseries_period_2 = models_timeseries_period_parseFromJSON(jsonmodels_timeseries_period_1);
	cJSON* jsonmodels_timeseries_period_2 = models_timeseries_period_convertToJSON(models_timeseries_period_2);
	printf("repeating models_timeseries_period:\n%s\n", cJSON_Print(jsonmodels_timeseries_period_2));
}

int main() {
  test_models_timeseries_period(1);
  test_models_timeseries_period(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_timeseries_period_MAIN
#endif // models_timeseries_period_TEST
