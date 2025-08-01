# NOTE: This file is auto generated by OpenAPI Generator 7.14.0 (https://openapi-generator.tech).
# Do not edit this file manually.

defmodule CoinAPIMarketDataRESTAPI.Model.V1ExchangeRate do
  @moduledoc """
  Represents an exchange rate.
  """

  @derive JSON.Encoder
  defstruct [
    :time,
    :asset_id_base,
    :asset_id_quote,
    :rate
  ]

  @type t :: %__MODULE__{
    :time => DateTime.t | nil,
    :asset_id_base => String.t | nil,
    :asset_id_quote => String.t | nil,
    :rate => float() | nil
  }

  def decode(value) do
    value
  end
end

