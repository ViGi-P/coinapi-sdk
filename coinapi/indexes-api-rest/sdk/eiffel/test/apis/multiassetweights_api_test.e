note
    description: "API tests for MULTIASSETWEIGHTS_API"
    date: "$Date$"
    revision: "$Revision$"


class MULTIASSETWEIGHTS_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_v1_indexdef_multiasset_get
            -- Get all multi-asset weights
            --
            -- 
        local
            l_response: LIST [MODELS_INDEX_MULTI_ASSET_WEIGHT]
        do
            -- TODO: Initialize required params.

            -- l_response := api.v1_indexdef_multiasset_get
            assert ("not_implemented", False)
        end

    test_v1_indexdef_multiasset_index_id_get
            -- Get multi-asset weights for specific index
            --
            -- 
        local
            l_response: LIST [MODELS_INDEX_MULTI_ASSET_WEIGHT]
            l_index_id: STRING_32
        do
            -- TODO: Initialize required params.
            -- l_index_id

            -- l_response := api.v1_indexdef_multiasset_index_id_get(l_index_id)
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: MULTIASSETWEIGHTS_API
            -- Create an object instance of `MULTIASSETWEIGHTS_API'.
        once
            create { MULTIASSETWEIGHTS_API } Result
        end

end
