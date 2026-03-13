#ifndef models_index_definition_snapshot_entry_TEST
#define models_index_definition_snapshot_entry_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define models_index_definition_snapshot_entry_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/models_index_definition_snapshot_entry.h"
models_index_definition_snapshot_entry_t* instantiate_models_index_definition_snapshot_entry(int include_optional);



models_index_definition_snapshot_entry_t* instantiate_models_index_definition_snapshot_entry(int include_optional) {
  models_index_definition_snapshot_entry_t* models_index_definition_snapshot_entry = NULL;
  if (include_optional) {
    models_index_definition_snapshot_entry = models_index_definition_snapshot_entry_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337
    );
  } else {
    models_index_definition_snapshot_entry = models_index_definition_snapshot_entry_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      1.337
    );
  }

  return models_index_definition_snapshot_entry;
}


#ifdef models_index_definition_snapshot_entry_MAIN

void test_models_index_definition_snapshot_entry(int include_optional) {
    models_index_definition_snapshot_entry_t* models_index_definition_snapshot_entry_1 = instantiate_models_index_definition_snapshot_entry(include_optional);

	cJSON* jsonmodels_index_definition_snapshot_entry_1 = models_index_definition_snapshot_entry_convertToJSON(models_index_definition_snapshot_entry_1);
	printf("models_index_definition_snapshot_entry :\n%s\n", cJSON_Print(jsonmodels_index_definition_snapshot_entry_1));
	models_index_definition_snapshot_entry_t* models_index_definition_snapshot_entry_2 = models_index_definition_snapshot_entry_parseFromJSON(jsonmodels_index_definition_snapshot_entry_1);
	cJSON* jsonmodels_index_definition_snapshot_entry_2 = models_index_definition_snapshot_entry_convertToJSON(models_index_definition_snapshot_entry_2);
	printf("repeating models_index_definition_snapshot_entry:\n%s\n", cJSON_Print(jsonmodels_index_definition_snapshot_entry_2));
}

int main() {
  test_models_index_definition_snapshot_entry(1);
  test_models_index_definition_snapshot_entry(0);

  printf("Hello world \n");
  return 0;
}

#endif // models_index_definition_snapshot_entry_MAIN
#endif // models_index_definition_snapshot_entry_TEST
