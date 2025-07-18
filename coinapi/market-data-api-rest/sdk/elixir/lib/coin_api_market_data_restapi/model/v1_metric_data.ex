# NOTE: This file is auto generated by OpenAPI Generator 7.14.0 (https://openapi-generator.tech).
# Do not edit this file manually.

defmodule CoinAPIMarketDataRESTAPI.Model.V1MetricData do
  @moduledoc """
  Represents a data model for metric data.
  """

  @derive JSON.Encoder
  defstruct [
    :symbol_id,
    :time,
    :value
  ]

  @type t :: %__MODULE__{
    :symbol_id => String.t | nil,
    :time => DateTime.t | nil,
    :value => float() | nil
  }

  def decode(value) do
    value
  end
end

