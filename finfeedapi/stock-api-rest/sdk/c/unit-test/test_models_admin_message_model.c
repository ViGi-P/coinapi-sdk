#ifndef models_admin_message_model_TEST
#define models_admin_message_model_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_admin_message_model_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_admin_message_model.h"
models_admin_message_model_t* instantiate_models_admin_message_model(int include_optional);

#include "test_models_trading_status_model.c"
#include "test_models_official_price_model.c"
#include "test_models_security_event_model.c"
#include "test_models_auction_information_model.c"
#include "test_models_short_sale_price_test_status_model.c"
#include "test_models_operational_halt_status_model.c"
#include "test_models_retail_liquidity_indicator_model.c"
#include "test_iex_system_event_system_event_model.c"
#include "test_models_security_directory_model.c"


models_admin_message_model_t* instantiate_models_admin_message_model(int include_optional) {
  models_admin_message_model_t* models_admin_message_model = NULL;
  if (include_optional) {
    models_admin_message_model = models_admin_message_model_create(
       // false, not to have infinite recursion
      instantiate_models_trading_status_model(0),
       // false, not to have infinite recursion
      instantiate_models_official_price_model(0),
       // false, not to have infinite recursion
      instantiate_models_security_event_model(0),
       // false, not to have infinite recursion
      instantiate_models_auction_information_model(0),
       // false, not to have infinite recursion
      instantiate_models_short_sale_price_test_status_model(0),
       // false, not to have infinite recursion
      instantiate_models_operational_halt_status_model(0),
       // false, not to have infinite recursion
      instantiate_models_retail_liquidity_indicator_model(0),
       // false, not to have infinite recursion
      instantiate_iex_system_event_system_event_model(0),
       // false, not to have infinite recursion
      instantiate_models_security_directory_model(0)
    );
  } else {
    models_admin_message_model = models_admin_message_model_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return models_admin_message_model;
}


#ifdef models_admin_message_model_MAIN

void test_models_admin_message_model(int include_optional) {
    models_admin_message_model_t* models_admin_message_model_1 = instantiate_models_admin_message_model(include_optional);

	cJSON* jsonmodels_admin_message_model_1 = models_admin_message_model_convertToJSON(models_admin_message_model_1);
	printf("models_admin_message_model :\n%s\n", cJSON_Print(jsonmodels_admin_message_model_1));
	models_admin_message_model_t* models_admin_message_model_2 = models_admin_message_model_parseFromJSON(jsonmodels_admin_message_model_1);
	cJSON* jsonmodels_admin_message_model_2 = models_admin_message_model_convertToJSON(models_admin_message_model_2);
	printf("repeating models_admin_message_model:\n%s\n", cJSON_Print(jsonmodels_admin_message_model_2));
}

int main() {
  test_models_admin_message_model(1);
  test_models_admin_message_model(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_admin_message_model_MAIN
#endif // models_admin_message_model_TEST
