note
 description:"[
		FinFeedAPI SEC REST API
 		No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
  		The version of the OpenAPI document: v1
 	    Contact: support@apibricks.io

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"

class
	API_DESERIALIZER

feature -- Access

	deserializer (f: FUNCTION [TUPLE [content_type:READABLE_STRING_8; body:READABLE_STRING_8; type:TYPE [detachable ANY]], detachable ANY]; a_content_type: READABLE_STRING_8; a_body: READABLE_STRING_8; a_type:TYPE [detachable ANY]): detachable ANY
			-- From a given response deserialize body `a_body' with content_type `a_content_type' to a target object of type `a_type'.
		do
			Result := f.item ([a_content_type, a_body, a_type])
		end
end
