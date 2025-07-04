/*
 * FinFeedAPI SEC REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.DTOSecFilingResultDto;
import org.openapitools.client.model.MvcProblemDetails;
import org.openapitools.client.model.MvcValidationProblemDetails;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for FullTextSearchApi
 */
@Disabled
public class FullTextSearchApiTest {

    private final FullTextSearchApi api = new FullTextSearchApi();

    /**
     * Full-text search of SEC filing documents
     *
     * Search across SEC filing documents with advanced filtering and sorting capabilities.  ### Available Sort Fields  Field Name | Description -----------|------------- AccessionNumber | SEC filing accession number FormType | Type of the filing document FilingDate | Date when filing was submitted CompanyName | Name of the company CIK | Central Index Key DocumentFilename | Name of the filing document DocumentDescription | Description of the document  ### Search Options  Option | Description --------|------------- text_contains | Keywords that must appear in the document text_not_contain | Keywords that must not appear in the document  ### Date Format All dates must be provided in YYYY-MM-DD format  :::tip Use text_contains and text_not_contain with multiple keywords separated by commas for more precise searches :::  :::note The search is case-insensitive and supports partial word matches :::
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void v1FullTextGetTest() throws ApiException {
        String formType = null;
        String fillingDateStart = null;
        String fillingDateEnd = null;
        String textContains = null;
        String textNotContain = null;
        Integer pageSize = null;
        Integer pageNumber = null;
        String sortBy = null;
        String sortOrder = null;
        List<DTOSecFilingResultDto> response = api.v1FullTextGet(formType, fillingDateStart, fillingDateEnd, textContains, textNotContain, pageSize, pageNumber, sortBy, sortOrder);
        // TODO: test validations
    }

}
