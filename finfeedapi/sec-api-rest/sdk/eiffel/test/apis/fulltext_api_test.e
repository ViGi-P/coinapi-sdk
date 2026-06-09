note
    description: "API tests for FULLTEXT_API"
    date: "$Date$"
    revision: "$Revision$"


class FULLTEXT_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_v1_full_text_get
            -- Full-text search of SEC filing documents
            --
            -- Search across SEC filing documents with advanced filtering and sorting capabilities.  ### Available Sort Fields  Field Name | Description -----------|------------- AccessionNumber | SEC filing accession number FormType | Type of the filing document FilingDate | Date when filing was submitted CompanyName | Name of the company CIK | Central Index Key DocumentFilename | Name of the filing document DocumentDescription | Description of the document  ### Search Options  Option | Description --------|------------- text_contains | Keywords that must appear in the document text_not_contain | Keywords that must not appear in the document  ### Date Format All dates must be provided in YYYY-MM-DD format  ### Pagination Results are always paginated. When &#x60;page_size&#x60; or &#x60;page_number&#x60; are omitted, defaults apply (&#x60;page_size&#x60;: 100, &#x60;page_number&#x60;: 1). Maximum &#x60;page_size&#x60; is 200. Use &#x60;page_number&#x60; to fetch additional pages.  :::tip Use text_contains and text_not_contain with multiple keywords separated by commas for more precise searches :::  :::note The search is case-insensitive and supports partial word matches :::
        local
            l_response: LIST [DTO_SEC_FILING_RESULT_DTO]
            l_form_type: STRING_32
            l_filling_date_start: STRING_32
            l_filling_date_end: STRING_32
            l_text_contains: STRING_32
            l_text_not_contain: STRING_32
            l_page_size: INTEGER_32
            l_page_number: INTEGER_32
            l_sort_by: STRING_32
            l_sort_order: STRING_32
        do
            -- TODO: Initialize required params.

            -- l_response := api.v1_full_text_get(l_form_type, l_filling_date_start, l_filling_date_end, l_text_contains, l_text_not_contain, l_page_size, l_page_number, l_sort_by, l_sort_order)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: FULLTEXT_API
            -- Create an object instance of `FULLTEXT_API'.
        once
            create { FULLTEXT_API } Result
        end

end
