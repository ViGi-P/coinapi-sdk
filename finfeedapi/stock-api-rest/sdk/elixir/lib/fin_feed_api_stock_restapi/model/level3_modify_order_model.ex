# NOTE: This file is auto generated by OpenAPI Generator 7.14.0 (https://openapi-generator.tech).
# Do not edit this file manually.

defmodule FinFeedAPIStockRESTAPI.Model.Level3ModifyOrderModel do
  @moduledoc """
  Represents the response DTO for order modify information
  """

  @derive JSON.Encoder
  defstruct [
    :symbol,
    :timestamp_nanos,
    :timestamp,
    :order_id_reference,
    :is_priority_reset,
    :size,
    :price
  ]

  @type t :: %__MODULE__{
    :symbol => String.t | nil,
    :timestamp_nanos => integer() | nil,
    :timestamp => DateTime.t | nil,
    :order_id_reference => integer() | nil,
    :is_priority_reset => boolean() | nil,
    :size => integer() | nil,
    :price => float() | nil
  }

  def decode(value) do
    value
  end
end

