# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule OEML-RESTAPI.Api.Orders do
  @moduledoc """
  API calls for all endpoints tagged `Orders`.
  """

  alias OEML-RESTAPI.Connection
  import OEML-RESTAPI.RequestBuilder


  @doc """
  Cancel all orders request
  This request cancels all open orders on single specified exchange.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - order_cancel_all_request (OrderCancelAllRequest): OrderCancelAllRequest object.
  - opts (KeywordList): [optional] Optional parameters
  ## Returns

  {:ok, %OEML-RESTAPI.Model.Message{}} on success
  {:error, info} on failure
  """
  @spec v1_orders_cancel_all_post(Tesla.Env.client, OEML-RESTAPI.Model.OrderCancelAllRequest.t, keyword()) :: {:ok, OEML-RESTAPI.Model.Message.t} | {:error, Tesla.Env.t}
  def v1_orders_cancel_all_post(connection, order_cancel_all_request, _opts \\ []) do
    %{}
    |> method(:post)
    |> url("/v1/orders/cancel/all")
    |> add_param(:body, :body, order_cancel_all_request)
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, %OEML-RESTAPI.Model.Message{}},
      { 400, %OEML-RESTAPI.Model.ValidationError{}},
      { 490, %OEML-RESTAPI.Model.Message{}}
    ])
  end

  @doc """
  Cancel order request
  Request cancel for an existing order. The order can be canceled using the `client_order_id` or `exchange_order_id`.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - order_cancel_single_request (OrderCancelSingleRequest): OrderCancelSingleRequest object.
  - opts (KeywordList): [optional] Optional parameters
  ## Returns

  {:ok, %OEML-RESTAPI.Model.OrderExecutionReport{}} on success
  {:error, info} on failure
  """
  @spec v1_orders_cancel_post(Tesla.Env.client, OEML-RESTAPI.Model.OrderCancelSingleRequest.t, keyword()) :: {:ok, OEML-RESTAPI.Model.OrderExecutionReport.t} | {:error, Tesla.Env.t}
  def v1_orders_cancel_post(connection, order_cancel_single_request, _opts \\ []) do
    %{}
    |> method(:post)
    |> url("/v1/orders/cancel")
    |> add_param(:body, :body, order_cancel_single_request)
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, %OEML-RESTAPI.Model.OrderExecutionReport{}},
      { 400, %OEML-RESTAPI.Model.ValidationError{}},
      { 490, %OEML-RESTAPI.Model.Message{}}
    ])
  end

  @doc """
  Get open orders
  Get last execution reports for open orders across all or single exchange.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - opts (KeywordList): [optional] Optional parameters
    - :exchange_id (String.t): Filter the open orders to the specific exchange.
  ## Returns

  {:ok, [%OrderExecutionReport{}, ...]} on success
  {:error, info} on failure
  """
  @spec v1_orders_get(Tesla.Env.client, keyword()) :: {:ok, list(OEML-RESTAPI.Model.OrderExecutionReport.t)} | {:error, Tesla.Env.t}
  def v1_orders_get(connection, opts \\ []) do
    optional_params = %{
      :"exchange_id" => :query
    }
    %{}
    |> method(:get)
    |> url("/v1/orders")
    |> add_optional_params(optional_params, opts)
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, [%OEML-RESTAPI.Model.OrderExecutionReport{}]},
      { 490, %OEML-RESTAPI.Model.Message{}}
    ])
  end

  @doc """
  Send new order
  This request creating new order for the specific exchange.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - order_new_single_request (OrderNewSingleRequest): OrderNewSingleRequest object.
  - opts (KeywordList): [optional] Optional parameters
  ## Returns

  {:ok, %OEML-RESTAPI.Model.OrderExecutionReport{}} on success
  {:error, info} on failure
  """
  @spec v1_orders_post(Tesla.Env.client, OEML-RESTAPI.Model.OrderNewSingleRequest.t, keyword()) :: {:ok, OEML-RESTAPI.Model.OrderExecutionReport.t} | {:error, Tesla.Env.t}
  def v1_orders_post(connection, order_new_single_request, _opts \\ []) do
    %{}
    |> method(:post)
    |> url("/v1/orders")
    |> add_param(:body, :body, order_new_single_request)
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, %OEML-RESTAPI.Model.OrderExecutionReport{}},
      { 400, %OEML-RESTAPI.Model.ValidationError{}},
      { 490, %OEML-RESTAPI.Model.Message{}},
      { 504, %OEML-RESTAPI.Model.Message{}}
    ])
  end

  @doc """
  Get order execution report
  Get the last order execution report for the specified order. The requested order does not need to be active or opened.

  ## Parameters

  - connection (OEML-RESTAPI.Connection): Connection to server
  - client_order_id (String.t): The unique identifier of the order assigned by the client.
  - opts (KeywordList): [optional] Optional parameters
  ## Returns

  {:ok, %OEML-RESTAPI.Model.OrderExecutionReport{}} on success
  {:error, info} on failure
  """
  @spec v1_orders_status_client_order_id_get(Tesla.Env.client, String.t, keyword()) :: {:ok, OEML-RESTAPI.Model.OrderExecutionReport.t} | {:error, Tesla.Env.t}
  def v1_orders_status_client_order_id_get(connection, client_order_id, _opts \\ []) do
    %{}
    |> method(:get)
    |> url("/v1/orders/status/#{client_order_id}")
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> evaluate_response([
      { 200, %OEML-RESTAPI.Model.OrderExecutionReport{}},
      { 404, %OEML-RESTAPI.Model.Message{}}
    ])
  end
end