--[[
  FinFeedAPI Stock REST API

  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

  The version of the OpenAPI document: v1
  Contact: support@apibricks.io
  Generated by: https://openapi-generator.tech
]]

-- level3_order_book_model class
local level3_order_book_model = {}
local level3_order_book_model_mt = {
	__name = "level3_order_book_model";
	__index = level3_order_book_model;
}

local function cast_level3_order_book_model(t)
	return setmetatable(t, level3_order_book_model_mt)
end

local function new_level3_order_book_model(add_order, delete_order, modify_order, executed_order, clear_book)
	return cast_level3_order_book_model({
		["add_order"] = add_order;
		["delete_order"] = delete_order;
		["modify_order"] = modify_order;
		["executed_order"] = executed_order;
		["clear_book"] = clear_book;
	})
end

return {
	cast = cast_level3_order_book_model;
	new = new_level3_order_book_model;
}
