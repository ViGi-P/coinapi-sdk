note
    description: "API tests for INDEXINPUTDATA_API"
    date: "$Date$"
    revision: "$Revision$"


class INDEXINPUTDATA_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_v1_indexdef_input_data_index_definition_id_all_get
            -- Returns all data inputs for a specific index definition
            --
            -- 
        local
            l_response: LIST [MODELS_INDEX_DEFINITION_INPUT_DATA]
            l_index_definition_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_index_definition_id

            -- l_response := api.v1_indexdef_input_data_index_definition_id_all_get(l_index_definition_id)
            assert ("not_implemented", False)
        end

    test_v1_indexdef_input_data_index_definition_id_get
            -- Returns data inputs for certain index definition and time
            --
            -- 
        local
            l_response: LIST [MODELS_INDEX_DEFINITION_SNAPSHOT_ENTRY]
            l_index_definition_id: STRING_32
            l_time: DATE_TIME
            l_enabled_only: BOOLEAN
            l_pending_only: BOOLEAN
            l_filter_asset_id: STRING_32
            l_with_status_info: BOOLEAN
        do
            -- TODO: Initialize required params.
            -- l_index_definition_id

            -- l_response := api.v1_indexdef_input_data_index_definition_id_get(l_index_definition_id, l_time, l_enabled_only, l_pending_only, l_filter_asset_id, l_with_status_info)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: INDEXINPUTDATA_API
            -- Create an object instance of `INDEXINPUTDATA_API'.
        once
            create { INDEXINPUTDATA_API } Result
        end

end
