note
    description: "API tests for RATELIMIT_API"
    date: "$Date$"
    revision: "$Revision$"


class RATELIMIT_API_TEST

inherit

    EQA_TEST_SET

feature -- Test routines


    test_internal_ratelimit_wsconcon_apikey_get
            -- 
            --
            -- 
        local
        do
            -- TODO: Initialize required params.

            -- api.internal_ratelimit_wsconcon_apikey_get
            assert ("not_implemented", False)
        end

    test_internal_ratelimit_wshello_ip_get
            -- 
            --
            -- 
        local
        do
            -- TODO: Initialize required params.

            -- api.internal_ratelimit_wshello_ip_get
            assert ("not_implemented", False)
        end

    test_internal_ratelimit_wsreq_ip_get
            -- 
            --
            -- 
        local
        do
            -- TODO: Initialize required params.

            -- api.internal_ratelimit_wsreq_ip_get
            assert ("not_implemented", False)
        end

feature {NONE} -- Implementation

    api: RATELIMIT_API
            -- Create an object instance of `RATELIMIT_API'.
        once
            create { RATELIMIT_API } Result
        end

end
