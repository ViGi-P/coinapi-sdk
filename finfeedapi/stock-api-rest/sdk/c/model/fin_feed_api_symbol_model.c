#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fin_feed_api_symbol_model.h"



static fin_feed_api_symbol_model_t *fin_feed_api_symbol_model_create_internal(
    char *symbol_id,
    char *exchange_id,
    char *security_category,
    char *name,
    char *date,
    char *asset_class,
    char *cfi_code,
    char *cfi_category,
    char *cfi_group,
    char *cfi_attribute1,
    char *cfi_attribute2,
    char *cfi_attribute3,
    char *cfi_attribute4,
    char *cfi_category_desc,
    char *cfi_group_desc,
    char *cfi_attribute1_desc,
    char *cfi_attribute2_desc,
    char *cfi_attribute3_desc,
    char *cfi_attribute4_desc
    ) {
    fin_feed_api_symbol_model_t *fin_feed_api_symbol_model_local_var = malloc(sizeof(fin_feed_api_symbol_model_t));
    if (!fin_feed_api_symbol_model_local_var) {
        return NULL;
    }
    memset(fin_feed_api_symbol_model_local_var, 0, sizeof(fin_feed_api_symbol_model_t));
    fin_feed_api_symbol_model_local_var->_library_owned = 1;
    fin_feed_api_symbol_model_local_var->symbol_id = symbol_id;
    fin_feed_api_symbol_model_local_var->exchange_id = exchange_id;
    fin_feed_api_symbol_model_local_var->security_category = security_category;
    fin_feed_api_symbol_model_local_var->name = name;
    fin_feed_api_symbol_model_local_var->date = date;
    fin_feed_api_symbol_model_local_var->asset_class = asset_class;
    fin_feed_api_symbol_model_local_var->cfi_code = cfi_code;
    fin_feed_api_symbol_model_local_var->cfi_category = cfi_category;
    fin_feed_api_symbol_model_local_var->cfi_group = cfi_group;
    fin_feed_api_symbol_model_local_var->cfi_attribute1 = cfi_attribute1;
    fin_feed_api_symbol_model_local_var->cfi_attribute2 = cfi_attribute2;
    fin_feed_api_symbol_model_local_var->cfi_attribute3 = cfi_attribute3;
    fin_feed_api_symbol_model_local_var->cfi_attribute4 = cfi_attribute4;
    fin_feed_api_symbol_model_local_var->cfi_category_desc = cfi_category_desc;
    fin_feed_api_symbol_model_local_var->cfi_group_desc = cfi_group_desc;
    fin_feed_api_symbol_model_local_var->cfi_attribute1_desc = cfi_attribute1_desc;
    fin_feed_api_symbol_model_local_var->cfi_attribute2_desc = cfi_attribute2_desc;
    fin_feed_api_symbol_model_local_var->cfi_attribute3_desc = cfi_attribute3_desc;
    fin_feed_api_symbol_model_local_var->cfi_attribute4_desc = cfi_attribute4_desc;
    return fin_feed_api_symbol_model_local_var;
}

__attribute__((deprecated)) fin_feed_api_symbol_model_t *fin_feed_api_symbol_model_create(
    char *symbol_id,
    char *exchange_id,
    char *security_category,
    char *name,
    char *date,
    char *asset_class,
    char *cfi_code,
    char *cfi_category,
    char *cfi_group,
    char *cfi_attribute1,
    char *cfi_attribute2,
    char *cfi_attribute3,
    char *cfi_attribute4,
    char *cfi_category_desc,
    char *cfi_group_desc,
    char *cfi_attribute1_desc,
    char *cfi_attribute2_desc,
    char *cfi_attribute3_desc,
    char *cfi_attribute4_desc
    ) {
    fin_feed_api_symbol_model_t *result = fin_feed_api_symbol_model_create_internal (
        symbol_id,
        exchange_id,
        security_category,
        name,
        date,
        asset_class,
        cfi_code,
        cfi_category,
        cfi_group,
        cfi_attribute1,
        cfi_attribute2,
        cfi_attribute3,
        cfi_attribute4,
        cfi_category_desc,
        cfi_group_desc,
        cfi_attribute1_desc,
        cfi_attribute2_desc,
        cfi_attribute3_desc,
        cfi_attribute4_desc
        );
    if (!result) {
    }
    return result;
}

void fin_feed_api_symbol_model_free(fin_feed_api_symbol_model_t *fin_feed_api_symbol_model) {
    if(NULL == fin_feed_api_symbol_model){
        return ;
    }
    if(fin_feed_api_symbol_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "fin_feed_api_symbol_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (fin_feed_api_symbol_model->symbol_id) {
        free(fin_feed_api_symbol_model->symbol_id);
        fin_feed_api_symbol_model->symbol_id = NULL;
    }
    if (fin_feed_api_symbol_model->exchange_id) {
        free(fin_feed_api_symbol_model->exchange_id);
        fin_feed_api_symbol_model->exchange_id = NULL;
    }
    if (fin_feed_api_symbol_model->security_category) {
        free(fin_feed_api_symbol_model->security_category);
        fin_feed_api_symbol_model->security_category = NULL;
    }
    if (fin_feed_api_symbol_model->name) {
        free(fin_feed_api_symbol_model->name);
        fin_feed_api_symbol_model->name = NULL;
    }
    if (fin_feed_api_symbol_model->date) {
        free(fin_feed_api_symbol_model->date);
        fin_feed_api_symbol_model->date = NULL;
    }
    if (fin_feed_api_symbol_model->asset_class) {
        free(fin_feed_api_symbol_model->asset_class);
        fin_feed_api_symbol_model->asset_class = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_code) {
        free(fin_feed_api_symbol_model->cfi_code);
        fin_feed_api_symbol_model->cfi_code = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_category) {
        free(fin_feed_api_symbol_model->cfi_category);
        fin_feed_api_symbol_model->cfi_category = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_group) {
        free(fin_feed_api_symbol_model->cfi_group);
        fin_feed_api_symbol_model->cfi_group = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_attribute1) {
        free(fin_feed_api_symbol_model->cfi_attribute1);
        fin_feed_api_symbol_model->cfi_attribute1 = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_attribute2) {
        free(fin_feed_api_symbol_model->cfi_attribute2);
        fin_feed_api_symbol_model->cfi_attribute2 = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_attribute3) {
        free(fin_feed_api_symbol_model->cfi_attribute3);
        fin_feed_api_symbol_model->cfi_attribute3 = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_attribute4) {
        free(fin_feed_api_symbol_model->cfi_attribute4);
        fin_feed_api_symbol_model->cfi_attribute4 = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_category_desc) {
        free(fin_feed_api_symbol_model->cfi_category_desc);
        fin_feed_api_symbol_model->cfi_category_desc = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_group_desc) {
        free(fin_feed_api_symbol_model->cfi_group_desc);
        fin_feed_api_symbol_model->cfi_group_desc = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_attribute1_desc) {
        free(fin_feed_api_symbol_model->cfi_attribute1_desc);
        fin_feed_api_symbol_model->cfi_attribute1_desc = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_attribute2_desc) {
        free(fin_feed_api_symbol_model->cfi_attribute2_desc);
        fin_feed_api_symbol_model->cfi_attribute2_desc = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_attribute3_desc) {
        free(fin_feed_api_symbol_model->cfi_attribute3_desc);
        fin_feed_api_symbol_model->cfi_attribute3_desc = NULL;
    }
    if (fin_feed_api_symbol_model->cfi_attribute4_desc) {
        free(fin_feed_api_symbol_model->cfi_attribute4_desc);
        fin_feed_api_symbol_model->cfi_attribute4_desc = NULL;
    }
    free(fin_feed_api_symbol_model);
}

cJSON *fin_feed_api_symbol_model_convertToJSON(fin_feed_api_symbol_model_t *fin_feed_api_symbol_model) {
    cJSON *item = cJSON_CreateObject();

    // fin_feed_api_symbol_model->symbol_id
    if(fin_feed_api_symbol_model->symbol_id) {
    if(cJSON_AddStringToObject(item, "symbol_id", fin_feed_api_symbol_model->symbol_id) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->exchange_id
    if(fin_feed_api_symbol_model->exchange_id) {
    if(cJSON_AddStringToObject(item, "exchange_id", fin_feed_api_symbol_model->exchange_id) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->security_category
    if(fin_feed_api_symbol_model->security_category) {
    if(cJSON_AddStringToObject(item, "security_category", fin_feed_api_symbol_model->security_category) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->name
    if(fin_feed_api_symbol_model->name) {
    if(cJSON_AddStringToObject(item, "name", fin_feed_api_symbol_model->name) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->date
    if(fin_feed_api_symbol_model->date) {
    if(cJSON_AddStringToObject(item, "date", fin_feed_api_symbol_model->date) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->asset_class
    if(fin_feed_api_symbol_model->asset_class) {
    if(cJSON_AddStringToObject(item, "asset_class", fin_feed_api_symbol_model->asset_class) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_code
    if(fin_feed_api_symbol_model->cfi_code) {
    if(cJSON_AddStringToObject(item, "cfi_code", fin_feed_api_symbol_model->cfi_code) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_category
    if(fin_feed_api_symbol_model->cfi_category) {
    if(cJSON_AddStringToObject(item, "cfi_category", fin_feed_api_symbol_model->cfi_category) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_group
    if(fin_feed_api_symbol_model->cfi_group) {
    if(cJSON_AddStringToObject(item, "cfi_group", fin_feed_api_symbol_model->cfi_group) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_attribute1
    if(fin_feed_api_symbol_model->cfi_attribute1) {
    if(cJSON_AddStringToObject(item, "cfi_attribute1", fin_feed_api_symbol_model->cfi_attribute1) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_attribute2
    if(fin_feed_api_symbol_model->cfi_attribute2) {
    if(cJSON_AddStringToObject(item, "cfi_attribute2", fin_feed_api_symbol_model->cfi_attribute2) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_attribute3
    if(fin_feed_api_symbol_model->cfi_attribute3) {
    if(cJSON_AddStringToObject(item, "cfi_attribute3", fin_feed_api_symbol_model->cfi_attribute3) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_attribute4
    if(fin_feed_api_symbol_model->cfi_attribute4) {
    if(cJSON_AddStringToObject(item, "cfi_attribute4", fin_feed_api_symbol_model->cfi_attribute4) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_category_desc
    if(fin_feed_api_symbol_model->cfi_category_desc) {
    if(cJSON_AddStringToObject(item, "cfi_category_desc", fin_feed_api_symbol_model->cfi_category_desc) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_group_desc
    if(fin_feed_api_symbol_model->cfi_group_desc) {
    if(cJSON_AddStringToObject(item, "cfi_group_desc", fin_feed_api_symbol_model->cfi_group_desc) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_attribute1_desc
    if(fin_feed_api_symbol_model->cfi_attribute1_desc) {
    if(cJSON_AddStringToObject(item, "cfi_attribute1_desc", fin_feed_api_symbol_model->cfi_attribute1_desc) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_attribute2_desc
    if(fin_feed_api_symbol_model->cfi_attribute2_desc) {
    if(cJSON_AddStringToObject(item, "cfi_attribute2_desc", fin_feed_api_symbol_model->cfi_attribute2_desc) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_attribute3_desc
    if(fin_feed_api_symbol_model->cfi_attribute3_desc) {
    if(cJSON_AddStringToObject(item, "cfi_attribute3_desc", fin_feed_api_symbol_model->cfi_attribute3_desc) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_symbol_model->cfi_attribute4_desc
    if(fin_feed_api_symbol_model->cfi_attribute4_desc) {
    if(cJSON_AddStringToObject(item, "cfi_attribute4_desc", fin_feed_api_symbol_model->cfi_attribute4_desc) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

fin_feed_api_symbol_model_t *fin_feed_api_symbol_model_parseFromJSON(cJSON *fin_feed_api_symbol_modelJSON){

    fin_feed_api_symbol_model_t *fin_feed_api_symbol_model_local_var = NULL;

    char *symbol_id_local_str = NULL;

    char *exchange_id_local_str = NULL;

    char *security_category_local_str = NULL;

    char *name_local_str = NULL;

    char *date_local_str = NULL;

    char *asset_class_local_str = NULL;

    char *cfi_code_local_str = NULL;

    char *cfi_category_local_str = NULL;

    char *cfi_group_local_str = NULL;

    char *cfi_attribute1_local_str = NULL;

    char *cfi_attribute2_local_str = NULL;

    char *cfi_attribute3_local_str = NULL;

    char *cfi_attribute4_local_str = NULL;

    char *cfi_category_desc_local_str = NULL;

    char *cfi_group_desc_local_str = NULL;

    char *cfi_attribute1_desc_local_str = NULL;

    char *cfi_attribute2_desc_local_str = NULL;

    char *cfi_attribute3_desc_local_str = NULL;

    char *cfi_attribute4_desc_local_str = NULL;

    // fin_feed_api_symbol_model->symbol_id
    cJSON *symbol_id = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "symbol_id");
    if (cJSON_IsNull(symbol_id)) {
        symbol_id = NULL;
    }
    if (symbol_id) { 
    if(!cJSON_IsString(symbol_id) && !cJSON_IsNull(symbol_id))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->exchange_id
    cJSON *exchange_id = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "exchange_id");
    if (cJSON_IsNull(exchange_id)) {
        exchange_id = NULL;
    }
    if (exchange_id) { 
    if(!cJSON_IsString(exchange_id) && !cJSON_IsNull(exchange_id))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->security_category
    cJSON *security_category = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "security_category");
    if (cJSON_IsNull(security_category)) {
        security_category = NULL;
    }
    if (security_category) { 
    if(!cJSON_IsString(security_category) && !cJSON_IsNull(security_category))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->asset_class
    cJSON *asset_class = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "asset_class");
    if (cJSON_IsNull(asset_class)) {
        asset_class = NULL;
    }
    if (asset_class) { 
    if(!cJSON_IsString(asset_class) && !cJSON_IsNull(asset_class))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_code
    cJSON *cfi_code = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_code");
    if (cJSON_IsNull(cfi_code)) {
        cfi_code = NULL;
    }
    if (cfi_code) { 
    if(!cJSON_IsString(cfi_code) && !cJSON_IsNull(cfi_code))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_category
    cJSON *cfi_category = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_category");
    if (cJSON_IsNull(cfi_category)) {
        cfi_category = NULL;
    }
    if (cfi_category) { 
    if(!cJSON_IsString(cfi_category) && !cJSON_IsNull(cfi_category))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_group
    cJSON *cfi_group = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_group");
    if (cJSON_IsNull(cfi_group)) {
        cfi_group = NULL;
    }
    if (cfi_group) { 
    if(!cJSON_IsString(cfi_group) && !cJSON_IsNull(cfi_group))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_attribute1
    cJSON *cfi_attribute1 = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_attribute1");
    if (cJSON_IsNull(cfi_attribute1)) {
        cfi_attribute1 = NULL;
    }
    if (cfi_attribute1) { 
    if(!cJSON_IsString(cfi_attribute1) && !cJSON_IsNull(cfi_attribute1))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_attribute2
    cJSON *cfi_attribute2 = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_attribute2");
    if (cJSON_IsNull(cfi_attribute2)) {
        cfi_attribute2 = NULL;
    }
    if (cfi_attribute2) { 
    if(!cJSON_IsString(cfi_attribute2) && !cJSON_IsNull(cfi_attribute2))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_attribute3
    cJSON *cfi_attribute3 = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_attribute3");
    if (cJSON_IsNull(cfi_attribute3)) {
        cfi_attribute3 = NULL;
    }
    if (cfi_attribute3) { 
    if(!cJSON_IsString(cfi_attribute3) && !cJSON_IsNull(cfi_attribute3))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_attribute4
    cJSON *cfi_attribute4 = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_attribute4");
    if (cJSON_IsNull(cfi_attribute4)) {
        cfi_attribute4 = NULL;
    }
    if (cfi_attribute4) { 
    if(!cJSON_IsString(cfi_attribute4) && !cJSON_IsNull(cfi_attribute4))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_category_desc
    cJSON *cfi_category_desc = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_category_desc");
    if (cJSON_IsNull(cfi_category_desc)) {
        cfi_category_desc = NULL;
    }
    if (cfi_category_desc) { 
    if(!cJSON_IsString(cfi_category_desc) && !cJSON_IsNull(cfi_category_desc))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_group_desc
    cJSON *cfi_group_desc = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_group_desc");
    if (cJSON_IsNull(cfi_group_desc)) {
        cfi_group_desc = NULL;
    }
    if (cfi_group_desc) { 
    if(!cJSON_IsString(cfi_group_desc) && !cJSON_IsNull(cfi_group_desc))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_attribute1_desc
    cJSON *cfi_attribute1_desc = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_attribute1_desc");
    if (cJSON_IsNull(cfi_attribute1_desc)) {
        cfi_attribute1_desc = NULL;
    }
    if (cfi_attribute1_desc) { 
    if(!cJSON_IsString(cfi_attribute1_desc) && !cJSON_IsNull(cfi_attribute1_desc))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_attribute2_desc
    cJSON *cfi_attribute2_desc = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_attribute2_desc");
    if (cJSON_IsNull(cfi_attribute2_desc)) {
        cfi_attribute2_desc = NULL;
    }
    if (cfi_attribute2_desc) { 
    if(!cJSON_IsString(cfi_attribute2_desc) && !cJSON_IsNull(cfi_attribute2_desc))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_attribute3_desc
    cJSON *cfi_attribute3_desc = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_attribute3_desc");
    if (cJSON_IsNull(cfi_attribute3_desc)) {
        cfi_attribute3_desc = NULL;
    }
    if (cfi_attribute3_desc) { 
    if(!cJSON_IsString(cfi_attribute3_desc) && !cJSON_IsNull(cfi_attribute3_desc))
    {
    goto end; //String
    }
    }

    // fin_feed_api_symbol_model->cfi_attribute4_desc
    cJSON *cfi_attribute4_desc = cJSON_GetObjectItemCaseSensitive(fin_feed_api_symbol_modelJSON, "cfi_attribute4_desc");
    if (cJSON_IsNull(cfi_attribute4_desc)) {
        cfi_attribute4_desc = NULL;
    }
    if (cfi_attribute4_desc) { 
    if(!cJSON_IsString(cfi_attribute4_desc) && !cJSON_IsNull(cfi_attribute4_desc))
    {
    goto end; //String
    }
    }


    if (symbol_id && !cJSON_IsNull(symbol_id)) symbol_id_local_str = strdup(symbol_id->valuestring);
    if (exchange_id && !cJSON_IsNull(exchange_id)) exchange_id_local_str = strdup(exchange_id->valuestring);
    if (security_category && !cJSON_IsNull(security_category)) security_category_local_str = strdup(security_category->valuestring);
    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (date && !cJSON_IsNull(date)) date_local_str = strdup(date->valuestring);
    if (asset_class && !cJSON_IsNull(asset_class)) asset_class_local_str = strdup(asset_class->valuestring);
    if (cfi_code && !cJSON_IsNull(cfi_code)) cfi_code_local_str = strdup(cfi_code->valuestring);
    if (cfi_category && !cJSON_IsNull(cfi_category)) cfi_category_local_str = strdup(cfi_category->valuestring);
    if (cfi_group && !cJSON_IsNull(cfi_group)) cfi_group_local_str = strdup(cfi_group->valuestring);
    if (cfi_attribute1 && !cJSON_IsNull(cfi_attribute1)) cfi_attribute1_local_str = strdup(cfi_attribute1->valuestring);
    if (cfi_attribute2 && !cJSON_IsNull(cfi_attribute2)) cfi_attribute2_local_str = strdup(cfi_attribute2->valuestring);
    if (cfi_attribute3 && !cJSON_IsNull(cfi_attribute3)) cfi_attribute3_local_str = strdup(cfi_attribute3->valuestring);
    if (cfi_attribute4 && !cJSON_IsNull(cfi_attribute4)) cfi_attribute4_local_str = strdup(cfi_attribute4->valuestring);
    if (cfi_category_desc && !cJSON_IsNull(cfi_category_desc)) cfi_category_desc_local_str = strdup(cfi_category_desc->valuestring);
    if (cfi_group_desc && !cJSON_IsNull(cfi_group_desc)) cfi_group_desc_local_str = strdup(cfi_group_desc->valuestring);
    if (cfi_attribute1_desc && !cJSON_IsNull(cfi_attribute1_desc)) cfi_attribute1_desc_local_str = strdup(cfi_attribute1_desc->valuestring);
    if (cfi_attribute2_desc && !cJSON_IsNull(cfi_attribute2_desc)) cfi_attribute2_desc_local_str = strdup(cfi_attribute2_desc->valuestring);
    if (cfi_attribute3_desc && !cJSON_IsNull(cfi_attribute3_desc)) cfi_attribute3_desc_local_str = strdup(cfi_attribute3_desc->valuestring);
    if (cfi_attribute4_desc && !cJSON_IsNull(cfi_attribute4_desc)) cfi_attribute4_desc_local_str = strdup(cfi_attribute4_desc->valuestring);

    fin_feed_api_symbol_model_local_var = fin_feed_api_symbol_model_create_internal (
        symbol_id_local_str,
        exchange_id_local_str,
        security_category_local_str,
        name_local_str,
        date_local_str,
        asset_class_local_str,
        cfi_code_local_str,
        cfi_category_local_str,
        cfi_group_local_str,
        cfi_attribute1_local_str,
        cfi_attribute2_local_str,
        cfi_attribute3_local_str,
        cfi_attribute4_local_str,
        cfi_category_desc_local_str,
        cfi_group_desc_local_str,
        cfi_attribute1_desc_local_str,
        cfi_attribute2_desc_local_str,
        cfi_attribute3_desc_local_str,
        cfi_attribute4_desc_local_str
        );

    if (!fin_feed_api_symbol_model_local_var) {
        goto end;
    }

    return fin_feed_api_symbol_model_local_var;
end:
    if (symbol_id_local_str) {
        free(symbol_id_local_str);
        symbol_id_local_str = NULL;
    }
    if (exchange_id_local_str) {
        free(exchange_id_local_str);
        exchange_id_local_str = NULL;
    }
    if (security_category_local_str) {
        free(security_category_local_str);
        security_category_local_str = NULL;
    }
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (date_local_str) {
        free(date_local_str);
        date_local_str = NULL;
    }
    if (asset_class_local_str) {
        free(asset_class_local_str);
        asset_class_local_str = NULL;
    }
    if (cfi_code_local_str) {
        free(cfi_code_local_str);
        cfi_code_local_str = NULL;
    }
    if (cfi_category_local_str) {
        free(cfi_category_local_str);
        cfi_category_local_str = NULL;
    }
    if (cfi_group_local_str) {
        free(cfi_group_local_str);
        cfi_group_local_str = NULL;
    }
    if (cfi_attribute1_local_str) {
        free(cfi_attribute1_local_str);
        cfi_attribute1_local_str = NULL;
    }
    if (cfi_attribute2_local_str) {
        free(cfi_attribute2_local_str);
        cfi_attribute2_local_str = NULL;
    }
    if (cfi_attribute3_local_str) {
        free(cfi_attribute3_local_str);
        cfi_attribute3_local_str = NULL;
    }
    if (cfi_attribute4_local_str) {
        free(cfi_attribute4_local_str);
        cfi_attribute4_local_str = NULL;
    }
    if (cfi_category_desc_local_str) {
        free(cfi_category_desc_local_str);
        cfi_category_desc_local_str = NULL;
    }
    if (cfi_group_desc_local_str) {
        free(cfi_group_desc_local_str);
        cfi_group_desc_local_str = NULL;
    }
    if (cfi_attribute1_desc_local_str) {
        free(cfi_attribute1_desc_local_str);
        cfi_attribute1_desc_local_str = NULL;
    }
    if (cfi_attribute2_desc_local_str) {
        free(cfi_attribute2_desc_local_str);
        cfi_attribute2_desc_local_str = NULL;
    }
    if (cfi_attribute3_desc_local_str) {
        free(cfi_attribute3_desc_local_str);
        cfi_attribute3_desc_local_str = NULL;
    }
    if (cfi_attribute4_desc_local_str) {
        free(cfi_attribute4_desc_local_str);
        cfi_attribute4_desc_local_str = NULL;
    }
    return NULL;

}
