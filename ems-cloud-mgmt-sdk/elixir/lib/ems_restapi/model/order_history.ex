# NOTE: This file is auto generated by OpenAPI Generator 6.2.1 (https://openapi-generator.tech).
# Do not edit this file manually.

defmodule EMS-RESTAPI.Model.OrderHistory do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :apikey,
    :exchangeId,
    :clientOrderId,
    :symbolIdExchange,
    :symbolIdCoinapi,
    :amountOrder,
    :price,
    :side,
    :orderType,
    :timeInForce,
    :expireTime,
    :execInst,
    :clientOrderIdFormatExchange,
    :exchangeOrderId,
    :amountOpen,
    :amountFilled,
    :avgPx,
    :status,
    :statusHistoryStatus,
    :statusHistoryTime,
    :errorMessageResult,
    :errorMessageReason,
    :errorMessageMessage,
    :fillsTime,
    :fillsPrice,
    :fillsAmount,
    :createdTime
  ]

  @type t :: %__MODULE__{
    :apikey => String.t | nil,
    :exchangeId => String.t | nil,
    :clientOrderId => String.t | nil,
    :symbolIdExchange => String.t | nil,
    :symbolIdCoinapi => String.t | nil,
    :amountOrder => float() | nil,
    :price => float() | nil,
    :side => float() | nil,
    :orderType => String.t | nil,
    :timeInForce => String.t | nil,
    :expireTime => DateTime | nil,
    :execInst => [String.t] | nil,
    :clientOrderIdFormatExchange => String.t | nil,
    :exchangeOrderId => String.t | nil,
    :amountOpen => float() | nil,
    :amountFilled => float() | nil,
    :avgPx => float() | nil,
    :status => String.t | nil,
    :statusHistoryStatus => [String.t] | nil,
    :statusHistoryTime => [DateTime] | nil,
    :errorMessageResult => String.t | nil,
    :errorMessageReason => String.t | nil,
    :errorMessageMessage => String.t | nil,
    :fillsTime => [DateTime] | nil,
    :fillsPrice => [float()] | nil,
    :fillsAmount => [float()] | nil,
    :createdTime => DateTime | nil
  }
end

defimpl Poison.Decoder, for: EMS-RESTAPI.Model.OrderHistory do
  import EMS-RESTAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:expireTime, :struct, EMS-RESTAPI.Model.Date, options)
    |> deserialize(:statusHistoryTime, :list, EMS-RESTAPI.Model.Date, options)
    |> deserialize(:fillsTime, :list, EMS-RESTAPI.Model.Date, options)
    |> deserialize(:createdTime, :struct, EMS-RESTAPI.Model.Date, options)
  end
end
