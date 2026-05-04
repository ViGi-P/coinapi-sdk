#ifndef ohlcv_time_series_timeseries_period_TEST
#define ohlcv_time_series_timeseries_period_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ohlcv_time_series_timeseries_period_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ohlcv_time_series_timeseries_period.h"
ohlcv_time_series_timeseries_period_t* instantiate_ohlcv_time_series_timeseries_period(int include_optional);



ohlcv_time_series_timeseries_period_t* instantiate_ohlcv_time_series_timeseries_period(int include_optional) {
  ohlcv_time_series_timeseries_period_t* ohlcv_time_series_timeseries_period = NULL;
  if (include_optional) {
    ohlcv_time_series_timeseries_period = ohlcv_time_series_timeseries_period_create(
      "0",
      56,
      56,
      56,
      "0",
      "0"
    );
  } else {
    ohlcv_time_series_timeseries_period = ohlcv_time_series_timeseries_period_create(
      "0",
      56,
      56,
      56,
      "0",
      "0"
    );
  }

  return ohlcv_time_series_timeseries_period;
}


#ifdef ohlcv_time_series_timeseries_period_MAIN

void test_ohlcv_time_series_timeseries_period(int include_optional) {
    ohlcv_time_series_timeseries_period_t* ohlcv_time_series_timeseries_period_1 = instantiate_ohlcv_time_series_timeseries_period(include_optional);

	cJSON* jsonohlcv_time_series_timeseries_period_1 = ohlcv_time_series_timeseries_period_convertToJSON(ohlcv_time_series_timeseries_period_1);
	printf("ohlcv_time_series_timeseries_period :\n%s\n", cJSON_Print(jsonohlcv_time_series_timeseries_period_1));
	ohlcv_time_series_timeseries_period_t* ohlcv_time_series_timeseries_period_2 = ohlcv_time_series_timeseries_period_parseFromJSON(jsonohlcv_time_series_timeseries_period_1);
	cJSON* jsonohlcv_time_series_timeseries_period_2 = ohlcv_time_series_timeseries_period_convertToJSON(ohlcv_time_series_timeseries_period_2);
	printf("repeating ohlcv_time_series_timeseries_period:\n%s\n", cJSON_Print(jsonohlcv_time_series_timeseries_period_2));
}

int main() {
  test_ohlcv_time_series_timeseries_period(1);
  test_ohlcv_time_series_timeseries_period(0);

  printf("Hello world \n");
  return 0;
}

#endif // ohlcv_time_series_timeseries_period_MAIN
#endif // ohlcv_time_series_timeseries_period_TEST
