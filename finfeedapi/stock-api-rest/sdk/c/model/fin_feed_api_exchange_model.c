#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fin_feed_api_exchange_model.h"



static fin_feed_api_exchange_model_t *fin_feed_api_exchange_model_create_internal(
    char *exchange_id,
    char *last_datapoint_date,
    char *mic,
    char *operating_mic,
    char *oprt_sgmt,
    char *market_name_institution_description,
    char *legal_entity_name,
    char *lei,
    char *market_category_code,
    char *acronym,
    char *iso_country_code,
    char *city,
    char *website,
    char *status,
    char *creation_date,
    char *last_update_date,
    char *last_validation_date,
    char *expiry_date,
    char *comments
    ) {
    fin_feed_api_exchange_model_t *fin_feed_api_exchange_model_local_var = malloc(sizeof(fin_feed_api_exchange_model_t));
    if (!fin_feed_api_exchange_model_local_var) {
        return NULL;
    }
    memset(fin_feed_api_exchange_model_local_var, 0, sizeof(fin_feed_api_exchange_model_t));
    fin_feed_api_exchange_model_local_var->_library_owned = 1;
    fin_feed_api_exchange_model_local_var->exchange_id = exchange_id;
    fin_feed_api_exchange_model_local_var->last_datapoint_date = last_datapoint_date;
    fin_feed_api_exchange_model_local_var->mic = mic;
    fin_feed_api_exchange_model_local_var->operating_mic = operating_mic;
    fin_feed_api_exchange_model_local_var->oprt_sgmt = oprt_sgmt;
    fin_feed_api_exchange_model_local_var->market_name_institution_description = market_name_institution_description;
    fin_feed_api_exchange_model_local_var->legal_entity_name = legal_entity_name;
    fin_feed_api_exchange_model_local_var->lei = lei;
    fin_feed_api_exchange_model_local_var->market_category_code = market_category_code;
    fin_feed_api_exchange_model_local_var->acronym = acronym;
    fin_feed_api_exchange_model_local_var->iso_country_code = iso_country_code;
    fin_feed_api_exchange_model_local_var->city = city;
    fin_feed_api_exchange_model_local_var->website = website;
    fin_feed_api_exchange_model_local_var->status = status;
    fin_feed_api_exchange_model_local_var->creation_date = creation_date;
    fin_feed_api_exchange_model_local_var->last_update_date = last_update_date;
    fin_feed_api_exchange_model_local_var->last_validation_date = last_validation_date;
    fin_feed_api_exchange_model_local_var->expiry_date = expiry_date;
    fin_feed_api_exchange_model_local_var->comments = comments;
    return fin_feed_api_exchange_model_local_var;
}

__attribute__((deprecated)) fin_feed_api_exchange_model_t *fin_feed_api_exchange_model_create(
    char *exchange_id,
    char *last_datapoint_date,
    char *mic,
    char *operating_mic,
    char *oprt_sgmt,
    char *market_name_institution_description,
    char *legal_entity_name,
    char *lei,
    char *market_category_code,
    char *acronym,
    char *iso_country_code,
    char *city,
    char *website,
    char *status,
    char *creation_date,
    char *last_update_date,
    char *last_validation_date,
    char *expiry_date,
    char *comments
    ) {
    fin_feed_api_exchange_model_t *result = fin_feed_api_exchange_model_create_internal (
        exchange_id,
        last_datapoint_date,
        mic,
        operating_mic,
        oprt_sgmt,
        market_name_institution_description,
        legal_entity_name,
        lei,
        market_category_code,
        acronym,
        iso_country_code,
        city,
        website,
        status,
        creation_date,
        last_update_date,
        last_validation_date,
        expiry_date,
        comments
        );
    if (!result) {
    }
    return result;
}

void fin_feed_api_exchange_model_free(fin_feed_api_exchange_model_t *fin_feed_api_exchange_model) {
    if(NULL == fin_feed_api_exchange_model){
        return ;
    }
    if(fin_feed_api_exchange_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "fin_feed_api_exchange_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (fin_feed_api_exchange_model->exchange_id) {
        free(fin_feed_api_exchange_model->exchange_id);
        fin_feed_api_exchange_model->exchange_id = NULL;
    }
    if (fin_feed_api_exchange_model->last_datapoint_date) {
        free(fin_feed_api_exchange_model->last_datapoint_date);
        fin_feed_api_exchange_model->last_datapoint_date = NULL;
    }
    if (fin_feed_api_exchange_model->mic) {
        free(fin_feed_api_exchange_model->mic);
        fin_feed_api_exchange_model->mic = NULL;
    }
    if (fin_feed_api_exchange_model->operating_mic) {
        free(fin_feed_api_exchange_model->operating_mic);
        fin_feed_api_exchange_model->operating_mic = NULL;
    }
    if (fin_feed_api_exchange_model->oprt_sgmt) {
        free(fin_feed_api_exchange_model->oprt_sgmt);
        fin_feed_api_exchange_model->oprt_sgmt = NULL;
    }
    if (fin_feed_api_exchange_model->market_name_institution_description) {
        free(fin_feed_api_exchange_model->market_name_institution_description);
        fin_feed_api_exchange_model->market_name_institution_description = NULL;
    }
    if (fin_feed_api_exchange_model->legal_entity_name) {
        free(fin_feed_api_exchange_model->legal_entity_name);
        fin_feed_api_exchange_model->legal_entity_name = NULL;
    }
    if (fin_feed_api_exchange_model->lei) {
        free(fin_feed_api_exchange_model->lei);
        fin_feed_api_exchange_model->lei = NULL;
    }
    if (fin_feed_api_exchange_model->market_category_code) {
        free(fin_feed_api_exchange_model->market_category_code);
        fin_feed_api_exchange_model->market_category_code = NULL;
    }
    if (fin_feed_api_exchange_model->acronym) {
        free(fin_feed_api_exchange_model->acronym);
        fin_feed_api_exchange_model->acronym = NULL;
    }
    if (fin_feed_api_exchange_model->iso_country_code) {
        free(fin_feed_api_exchange_model->iso_country_code);
        fin_feed_api_exchange_model->iso_country_code = NULL;
    }
    if (fin_feed_api_exchange_model->city) {
        free(fin_feed_api_exchange_model->city);
        fin_feed_api_exchange_model->city = NULL;
    }
    if (fin_feed_api_exchange_model->website) {
        free(fin_feed_api_exchange_model->website);
        fin_feed_api_exchange_model->website = NULL;
    }
    if (fin_feed_api_exchange_model->status) {
        free(fin_feed_api_exchange_model->status);
        fin_feed_api_exchange_model->status = NULL;
    }
    if (fin_feed_api_exchange_model->creation_date) {
        free(fin_feed_api_exchange_model->creation_date);
        fin_feed_api_exchange_model->creation_date = NULL;
    }
    if (fin_feed_api_exchange_model->last_update_date) {
        free(fin_feed_api_exchange_model->last_update_date);
        fin_feed_api_exchange_model->last_update_date = NULL;
    }
    if (fin_feed_api_exchange_model->last_validation_date) {
        free(fin_feed_api_exchange_model->last_validation_date);
        fin_feed_api_exchange_model->last_validation_date = NULL;
    }
    if (fin_feed_api_exchange_model->expiry_date) {
        free(fin_feed_api_exchange_model->expiry_date);
        fin_feed_api_exchange_model->expiry_date = NULL;
    }
    if (fin_feed_api_exchange_model->comments) {
        free(fin_feed_api_exchange_model->comments);
        fin_feed_api_exchange_model->comments = NULL;
    }
    free(fin_feed_api_exchange_model);
}

cJSON *fin_feed_api_exchange_model_convertToJSON(fin_feed_api_exchange_model_t *fin_feed_api_exchange_model) {
    cJSON *item = cJSON_CreateObject();

    // fin_feed_api_exchange_model->exchange_id
    if(fin_feed_api_exchange_model->exchange_id) {
    if(cJSON_AddStringToObject(item, "exchange_id", fin_feed_api_exchange_model->exchange_id) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->last_datapoint_date
    if(fin_feed_api_exchange_model->last_datapoint_date) {
    if(cJSON_AddStringToObject(item, "last_datapoint_date", fin_feed_api_exchange_model->last_datapoint_date) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->mic
    if(fin_feed_api_exchange_model->mic) {
    if(cJSON_AddStringToObject(item, "mic", fin_feed_api_exchange_model->mic) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->operating_mic
    if(fin_feed_api_exchange_model->operating_mic) {
    if(cJSON_AddStringToObject(item, "operating_mic", fin_feed_api_exchange_model->operating_mic) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->oprt_sgmt
    if(fin_feed_api_exchange_model->oprt_sgmt) {
    if(cJSON_AddStringToObject(item, "oprt_sgmt", fin_feed_api_exchange_model->oprt_sgmt) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->market_name_institution_description
    if(fin_feed_api_exchange_model->market_name_institution_description) {
    if(cJSON_AddStringToObject(item, "market_name_institution_description", fin_feed_api_exchange_model->market_name_institution_description) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->legal_entity_name
    if(fin_feed_api_exchange_model->legal_entity_name) {
    if(cJSON_AddStringToObject(item, "legal_entity_name", fin_feed_api_exchange_model->legal_entity_name) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->lei
    if(fin_feed_api_exchange_model->lei) {
    if(cJSON_AddStringToObject(item, "lei", fin_feed_api_exchange_model->lei) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->market_category_code
    if(fin_feed_api_exchange_model->market_category_code) {
    if(cJSON_AddStringToObject(item, "market_category_code", fin_feed_api_exchange_model->market_category_code) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->acronym
    if(fin_feed_api_exchange_model->acronym) {
    if(cJSON_AddStringToObject(item, "acronym", fin_feed_api_exchange_model->acronym) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->iso_country_code
    if(fin_feed_api_exchange_model->iso_country_code) {
    if(cJSON_AddStringToObject(item, "iso_country_code", fin_feed_api_exchange_model->iso_country_code) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->city
    if(fin_feed_api_exchange_model->city) {
    if(cJSON_AddStringToObject(item, "city", fin_feed_api_exchange_model->city) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->website
    if(fin_feed_api_exchange_model->website) {
    if(cJSON_AddStringToObject(item, "website", fin_feed_api_exchange_model->website) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->status
    if(fin_feed_api_exchange_model->status) {
    if(cJSON_AddStringToObject(item, "status", fin_feed_api_exchange_model->status) == NULL) {
    goto fail; //String
    }
    }


    // fin_feed_api_exchange_model->creation_date
    if(fin_feed_api_exchange_model->creation_date) {
    if(cJSON_AddStringToObject(item, "creation_date", fin_feed_api_exchange_model->creation_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fin_feed_api_exchange_model->last_update_date
    if(fin_feed_api_exchange_model->last_update_date) {
    if(cJSON_AddStringToObject(item, "last_update_date", fin_feed_api_exchange_model->last_update_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fin_feed_api_exchange_model->last_validation_date
    if(fin_feed_api_exchange_model->last_validation_date) {
    if(cJSON_AddStringToObject(item, "last_validation_date", fin_feed_api_exchange_model->last_validation_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fin_feed_api_exchange_model->expiry_date
    if(fin_feed_api_exchange_model->expiry_date) {
    if(cJSON_AddStringToObject(item, "expiry_date", fin_feed_api_exchange_model->expiry_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // fin_feed_api_exchange_model->comments
    if(fin_feed_api_exchange_model->comments) {
    if(cJSON_AddStringToObject(item, "comments", fin_feed_api_exchange_model->comments) == NULL) {
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

fin_feed_api_exchange_model_t *fin_feed_api_exchange_model_parseFromJSON(cJSON *fin_feed_api_exchange_modelJSON){

    fin_feed_api_exchange_model_t *fin_feed_api_exchange_model_local_var = NULL;

    char *exchange_id_local_str = NULL;

    char *last_datapoint_date_local_str = NULL;

    char *mic_local_str = NULL;

    char *operating_mic_local_str = NULL;

    char *oprt_sgmt_local_str = NULL;

    char *market_name_institution_description_local_str = NULL;

    char *legal_entity_name_local_str = NULL;

    char *lei_local_str = NULL;

    char *market_category_code_local_str = NULL;

    char *acronym_local_str = NULL;

    char *iso_country_code_local_str = NULL;

    char *city_local_str = NULL;

    char *website_local_str = NULL;

    char *status_local_str = NULL;

    char *creation_date_local_str = NULL;

    char *last_update_date_local_str = NULL;

    char *last_validation_date_local_str = NULL;

    char *expiry_date_local_str = NULL;

    char *comments_local_str = NULL;

    // fin_feed_api_exchange_model->exchange_id
    cJSON *exchange_id = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "exchange_id");
    if (cJSON_IsNull(exchange_id)) {
        exchange_id = NULL;
    }
    if (exchange_id) { 
    if(!cJSON_IsString(exchange_id) && !cJSON_IsNull(exchange_id))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->last_datapoint_date
    cJSON *last_datapoint_date = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "last_datapoint_date");
    if (cJSON_IsNull(last_datapoint_date)) {
        last_datapoint_date = NULL;
    }
    if (last_datapoint_date) { 
    if(!cJSON_IsString(last_datapoint_date) && !cJSON_IsNull(last_datapoint_date))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->mic
    cJSON *mic = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "mic");
    if (cJSON_IsNull(mic)) {
        mic = NULL;
    }
    if (mic) { 
    if(!cJSON_IsString(mic) && !cJSON_IsNull(mic))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->operating_mic
    cJSON *operating_mic = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "operating_mic");
    if (cJSON_IsNull(operating_mic)) {
        operating_mic = NULL;
    }
    if (operating_mic) { 
    if(!cJSON_IsString(operating_mic) && !cJSON_IsNull(operating_mic))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->oprt_sgmt
    cJSON *oprt_sgmt = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "oprt_sgmt");
    if (cJSON_IsNull(oprt_sgmt)) {
        oprt_sgmt = NULL;
    }
    if (oprt_sgmt) { 
    if(!cJSON_IsString(oprt_sgmt) && !cJSON_IsNull(oprt_sgmt))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->market_name_institution_description
    cJSON *market_name_institution_description = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "market_name_institution_description");
    if (cJSON_IsNull(market_name_institution_description)) {
        market_name_institution_description = NULL;
    }
    if (market_name_institution_description) { 
    if(!cJSON_IsString(market_name_institution_description) && !cJSON_IsNull(market_name_institution_description))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->legal_entity_name
    cJSON *legal_entity_name = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "legal_entity_name");
    if (cJSON_IsNull(legal_entity_name)) {
        legal_entity_name = NULL;
    }
    if (legal_entity_name) { 
    if(!cJSON_IsString(legal_entity_name) && !cJSON_IsNull(legal_entity_name))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->lei
    cJSON *lei = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "lei");
    if (cJSON_IsNull(lei)) {
        lei = NULL;
    }
    if (lei) { 
    if(!cJSON_IsString(lei) && !cJSON_IsNull(lei))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->market_category_code
    cJSON *market_category_code = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "market_category_code");
    if (cJSON_IsNull(market_category_code)) {
        market_category_code = NULL;
    }
    if (market_category_code) { 
    if(!cJSON_IsString(market_category_code) && !cJSON_IsNull(market_category_code))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->acronym
    cJSON *acronym = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "acronym");
    if (cJSON_IsNull(acronym)) {
        acronym = NULL;
    }
    if (acronym) { 
    if(!cJSON_IsString(acronym) && !cJSON_IsNull(acronym))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->iso_country_code
    cJSON *iso_country_code = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "iso_country_code");
    if (cJSON_IsNull(iso_country_code)) {
        iso_country_code = NULL;
    }
    if (iso_country_code) { 
    if(!cJSON_IsString(iso_country_code) && !cJSON_IsNull(iso_country_code))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "website");
    if (cJSON_IsNull(website)) {
        website = NULL;
    }
    if (website) { 
    if(!cJSON_IsString(website) && !cJSON_IsNull(website))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // fin_feed_api_exchange_model->creation_date
    cJSON *creation_date = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "creation_date");
    if (cJSON_IsNull(creation_date)) {
        creation_date = NULL;
    }
    if (creation_date) { 
    if(!cJSON_IsString(creation_date) && !cJSON_IsNull(creation_date))
    {
    goto end; //DateTime
    }
    }

    // fin_feed_api_exchange_model->last_update_date
    cJSON *last_update_date = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "last_update_date");
    if (cJSON_IsNull(last_update_date)) {
        last_update_date = NULL;
    }
    if (last_update_date) { 
    if(!cJSON_IsString(last_update_date) && !cJSON_IsNull(last_update_date))
    {
    goto end; //DateTime
    }
    }

    // fin_feed_api_exchange_model->last_validation_date
    cJSON *last_validation_date = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "last_validation_date");
    if (cJSON_IsNull(last_validation_date)) {
        last_validation_date = NULL;
    }
    if (last_validation_date) { 
    if(!cJSON_IsString(last_validation_date) && !cJSON_IsNull(last_validation_date))
    {
    goto end; //DateTime
    }
    }

    // fin_feed_api_exchange_model->expiry_date
    cJSON *expiry_date = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "expiry_date");
    if (cJSON_IsNull(expiry_date)) {
        expiry_date = NULL;
    }
    if (expiry_date) { 
    if(!cJSON_IsString(expiry_date) && !cJSON_IsNull(expiry_date))
    {
    goto end; //DateTime
    }
    }

    // fin_feed_api_exchange_model->comments
    cJSON *comments = cJSON_GetObjectItemCaseSensitive(fin_feed_api_exchange_modelJSON, "comments");
    if (cJSON_IsNull(comments)) {
        comments = NULL;
    }
    if (comments) { 
    if(!cJSON_IsString(comments) && !cJSON_IsNull(comments))
    {
    goto end; //String
    }
    }


    if (exchange_id && !cJSON_IsNull(exchange_id)) exchange_id_local_str = strdup(exchange_id->valuestring);
    if (last_datapoint_date && !cJSON_IsNull(last_datapoint_date)) last_datapoint_date_local_str = strdup(last_datapoint_date->valuestring);
    if (mic && !cJSON_IsNull(mic)) mic_local_str = strdup(mic->valuestring);
    if (operating_mic && !cJSON_IsNull(operating_mic)) operating_mic_local_str = strdup(operating_mic->valuestring);
    if (oprt_sgmt && !cJSON_IsNull(oprt_sgmt)) oprt_sgmt_local_str = strdup(oprt_sgmt->valuestring);
    if (market_name_institution_description && !cJSON_IsNull(market_name_institution_description)) market_name_institution_description_local_str = strdup(market_name_institution_description->valuestring);
    if (legal_entity_name && !cJSON_IsNull(legal_entity_name)) legal_entity_name_local_str = strdup(legal_entity_name->valuestring);
    if (lei && !cJSON_IsNull(lei)) lei_local_str = strdup(lei->valuestring);
    if (market_category_code && !cJSON_IsNull(market_category_code)) market_category_code_local_str = strdup(market_category_code->valuestring);
    if (acronym && !cJSON_IsNull(acronym)) acronym_local_str = strdup(acronym->valuestring);
    if (iso_country_code && !cJSON_IsNull(iso_country_code)) iso_country_code_local_str = strdup(iso_country_code->valuestring);
    if (city && !cJSON_IsNull(city)) city_local_str = strdup(city->valuestring);
    if (website && !cJSON_IsNull(website)) website_local_str = strdup(website->valuestring);
    if (status && !cJSON_IsNull(status)) status_local_str = strdup(status->valuestring);
    if (creation_date && !cJSON_IsNull(creation_date)) creation_date_local_str = strdup(creation_date->valuestring);
    if (last_update_date && !cJSON_IsNull(last_update_date)) last_update_date_local_str = strdup(last_update_date->valuestring);
    if (last_validation_date && !cJSON_IsNull(last_validation_date)) last_validation_date_local_str = strdup(last_validation_date->valuestring);
    if (expiry_date && !cJSON_IsNull(expiry_date)) expiry_date_local_str = strdup(expiry_date->valuestring);
    if (comments && !cJSON_IsNull(comments)) comments_local_str = strdup(comments->valuestring);

    fin_feed_api_exchange_model_local_var = fin_feed_api_exchange_model_create_internal (
        exchange_id_local_str,
        last_datapoint_date_local_str,
        mic_local_str,
        operating_mic_local_str,
        oprt_sgmt_local_str,
        market_name_institution_description_local_str,
        legal_entity_name_local_str,
        lei_local_str,
        market_category_code_local_str,
        acronym_local_str,
        iso_country_code_local_str,
        city_local_str,
        website_local_str,
        status_local_str,
        creation_date_local_str,
        last_update_date_local_str,
        last_validation_date_local_str,
        expiry_date_local_str,
        comments_local_str
        );

    if (!fin_feed_api_exchange_model_local_var) {
        goto end;
    }

    return fin_feed_api_exchange_model_local_var;
end:
    if (exchange_id_local_str) {
        free(exchange_id_local_str);
        exchange_id_local_str = NULL;
    }
    if (last_datapoint_date_local_str) {
        free(last_datapoint_date_local_str);
        last_datapoint_date_local_str = NULL;
    }
    if (mic_local_str) {
        free(mic_local_str);
        mic_local_str = NULL;
    }
    if (operating_mic_local_str) {
        free(operating_mic_local_str);
        operating_mic_local_str = NULL;
    }
    if (oprt_sgmt_local_str) {
        free(oprt_sgmt_local_str);
        oprt_sgmt_local_str = NULL;
    }
    if (market_name_institution_description_local_str) {
        free(market_name_institution_description_local_str);
        market_name_institution_description_local_str = NULL;
    }
    if (legal_entity_name_local_str) {
        free(legal_entity_name_local_str);
        legal_entity_name_local_str = NULL;
    }
    if (lei_local_str) {
        free(lei_local_str);
        lei_local_str = NULL;
    }
    if (market_category_code_local_str) {
        free(market_category_code_local_str);
        market_category_code_local_str = NULL;
    }
    if (acronym_local_str) {
        free(acronym_local_str);
        acronym_local_str = NULL;
    }
    if (iso_country_code_local_str) {
        free(iso_country_code_local_str);
        iso_country_code_local_str = NULL;
    }
    if (city_local_str) {
        free(city_local_str);
        city_local_str = NULL;
    }
    if (website_local_str) {
        free(website_local_str);
        website_local_str = NULL;
    }
    if (status_local_str) {
        free(status_local_str);
        status_local_str = NULL;
    }
    if (creation_date_local_str) {
        free(creation_date_local_str);
        creation_date_local_str = NULL;
    }
    if (last_update_date_local_str) {
        free(last_update_date_local_str);
        last_update_date_local_str = NULL;
    }
    if (last_validation_date_local_str) {
        free(last_validation_date_local_str);
        last_validation_date_local_str = NULL;
    }
    if (expiry_date_local_str) {
        free(expiry_date_local_str);
        expiry_date_local_str = NULL;
    }
    if (comments_local_str) {
        free(comments_local_str);
        comments_local_str = NULL;
    }
    return NULL;

}
