#' Create a new ModelsAdminMessageModel
#'
#' @description
#' Represents the response DTO for IEX admin information, combining all symbol-based admin message types
#'
#' @docType class
#' @title ModelsAdminMessageModel
#' @description ModelsAdminMessageModel Class
#' @format An \code{R6Class} generator object
#' @field trading_status  \link{ModelsTradingStatusModel} [optional]
#' @field official_price  \link{ModelsOfficialPriceModel} [optional]
#' @field security_event  \link{ModelsSecurityEventModel} [optional]
#' @field auction_information  \link{ModelsAuctionInformationModel} [optional]
#' @field short_sale_price_test  \link{ModelsShortSalePriceTestStatusModel} [optional]
#' @field operational_halt_status  \link{ModelsOperationalHaltStatusModel} [optional]
#' @field retail_liquidity_indicator  \link{ModelsRetailLiquidityIndicatorModel} [optional]
#' @field system_event  \link{IEXSystemEventSystemEventModel} [optional]
#' @field security_directory  \link{ModelsSecurityDirectoryModel} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ModelsAdminMessageModel <- R6::R6Class(
  "ModelsAdminMessageModel",
  public = list(
    `trading_status` = NULL,
    `official_price` = NULL,
    `security_event` = NULL,
    `auction_information` = NULL,
    `short_sale_price_test` = NULL,
    `operational_halt_status` = NULL,
    `retail_liquidity_indicator` = NULL,
    `system_event` = NULL,
    `security_directory` = NULL,

    #' @description
    #' Initialize a new ModelsAdminMessageModel class.
    #'
    #' @param trading_status trading_status
    #' @param official_price official_price
    #' @param security_event security_event
    #' @param auction_information auction_information
    #' @param short_sale_price_test short_sale_price_test
    #' @param operational_halt_status operational_halt_status
    #' @param retail_liquidity_indicator retail_liquidity_indicator
    #' @param system_event system_event
    #' @param security_directory security_directory
    #' @param ... Other optional arguments.
    initialize = function(`trading_status` = NULL, `official_price` = NULL, `security_event` = NULL, `auction_information` = NULL, `short_sale_price_test` = NULL, `operational_halt_status` = NULL, `retail_liquidity_indicator` = NULL, `system_event` = NULL, `security_directory` = NULL, ...) {
      if (!is.null(`trading_status`)) {
        stopifnot(R6::is.R6(`trading_status`))
        self$`trading_status` <- `trading_status`
      }
      if (!is.null(`official_price`)) {
        stopifnot(R6::is.R6(`official_price`))
        self$`official_price` <- `official_price`
      }
      if (!is.null(`security_event`)) {
        stopifnot(R6::is.R6(`security_event`))
        self$`security_event` <- `security_event`
      }
      if (!is.null(`auction_information`)) {
        stopifnot(R6::is.R6(`auction_information`))
        self$`auction_information` <- `auction_information`
      }
      if (!is.null(`short_sale_price_test`)) {
        stopifnot(R6::is.R6(`short_sale_price_test`))
        self$`short_sale_price_test` <- `short_sale_price_test`
      }
      if (!is.null(`operational_halt_status`)) {
        stopifnot(R6::is.R6(`operational_halt_status`))
        self$`operational_halt_status` <- `operational_halt_status`
      }
      if (!is.null(`retail_liquidity_indicator`)) {
        stopifnot(R6::is.R6(`retail_liquidity_indicator`))
        self$`retail_liquidity_indicator` <- `retail_liquidity_indicator`
      }
      if (!is.null(`system_event`)) {
        stopifnot(R6::is.R6(`system_event`))
        self$`system_event` <- `system_event`
      }
      if (!is.null(`security_directory`)) {
        stopifnot(R6::is.R6(`security_directory`))
        self$`security_directory` <- `security_directory`
      }
    },

    #' @description
    #' Convert to an R object. This method is deprecated. Use `toSimpleType()` instead.
    toJSON = function() {
      .Deprecated(new = "toSimpleType", msg = "Use the '$toSimpleType()' method instead since that is more clearly named. Use '$toJSONString()' to get a JSON string")
      return(self$toSimpleType())
    },

    #' @description
    #' Convert to a List
    #'
    #' Convert the R6 object to a list to work more easily with other tooling.
    #'
    #' @return ModelsAdminMessageModel as a base R list.
    #' @examples
    #' # convert array of ModelsAdminMessageModel (x) to a data frame
    #' \dontrun{
    #' library(purrr)
    #' library(tibble)
    #' df <- x |> map(\(y)y$toList()) |> map(as_tibble) |> list_rbind()
    #' df
    #' }
    toList = function() {
      return(self$toSimpleType())
    },

    #' @description
    #' Convert ModelsAdminMessageModel to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ModelsAdminMessageModelObject <- list()
      if (!is.null(self$`trading_status`)) {
        ModelsAdminMessageModelObject[["trading_status"]] <-
          self$extractSimpleType(self$`trading_status`)
      }
      if (!is.null(self$`official_price`)) {
        ModelsAdminMessageModelObject[["official_price"]] <-
          self$extractSimpleType(self$`official_price`)
      }
      if (!is.null(self$`security_event`)) {
        ModelsAdminMessageModelObject[["security_event"]] <-
          self$extractSimpleType(self$`security_event`)
      }
      if (!is.null(self$`auction_information`)) {
        ModelsAdminMessageModelObject[["auction_information"]] <-
          self$extractSimpleType(self$`auction_information`)
      }
      if (!is.null(self$`short_sale_price_test`)) {
        ModelsAdminMessageModelObject[["short_sale_price_test"]] <-
          self$extractSimpleType(self$`short_sale_price_test`)
      }
      if (!is.null(self$`operational_halt_status`)) {
        ModelsAdminMessageModelObject[["operational_halt_status"]] <-
          self$extractSimpleType(self$`operational_halt_status`)
      }
      if (!is.null(self$`retail_liquidity_indicator`)) {
        ModelsAdminMessageModelObject[["retail_liquidity_indicator"]] <-
          self$extractSimpleType(self$`retail_liquidity_indicator`)
      }
      if (!is.null(self$`system_event`)) {
        ModelsAdminMessageModelObject[["system_event"]] <-
          self$extractSimpleType(self$`system_event`)
      }
      if (!is.null(self$`security_directory`)) {
        ModelsAdminMessageModelObject[["security_directory"]] <-
          self$extractSimpleType(self$`security_directory`)
      }
      return(ModelsAdminMessageModelObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of ModelsAdminMessageModel
    #'
    #' @param input_json the JSON input
    #' @return the instance of ModelsAdminMessageModel
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`trading_status`)) {
        `trading_status_object` <- ModelsTradingStatusModel$new()
        `trading_status_object`$fromJSON(jsonlite::toJSON(this_object$`trading_status`, auto_unbox = TRUE, digits = NA))
        self$`trading_status` <- `trading_status_object`
      }
      if (!is.null(this_object$`official_price`)) {
        `official_price_object` <- ModelsOfficialPriceModel$new()
        `official_price_object`$fromJSON(jsonlite::toJSON(this_object$`official_price`, auto_unbox = TRUE, digits = NA))
        self$`official_price` <- `official_price_object`
      }
      if (!is.null(this_object$`security_event`)) {
        `security_event_object` <- ModelsSecurityEventModel$new()
        `security_event_object`$fromJSON(jsonlite::toJSON(this_object$`security_event`, auto_unbox = TRUE, digits = NA))
        self$`security_event` <- `security_event_object`
      }
      if (!is.null(this_object$`auction_information`)) {
        `auction_information_object` <- ModelsAuctionInformationModel$new()
        `auction_information_object`$fromJSON(jsonlite::toJSON(this_object$`auction_information`, auto_unbox = TRUE, digits = NA))
        self$`auction_information` <- `auction_information_object`
      }
      if (!is.null(this_object$`short_sale_price_test`)) {
        `short_sale_price_test_object` <- ModelsShortSalePriceTestStatusModel$new()
        `short_sale_price_test_object`$fromJSON(jsonlite::toJSON(this_object$`short_sale_price_test`, auto_unbox = TRUE, digits = NA))
        self$`short_sale_price_test` <- `short_sale_price_test_object`
      }
      if (!is.null(this_object$`operational_halt_status`)) {
        `operational_halt_status_object` <- ModelsOperationalHaltStatusModel$new()
        `operational_halt_status_object`$fromJSON(jsonlite::toJSON(this_object$`operational_halt_status`, auto_unbox = TRUE, digits = NA))
        self$`operational_halt_status` <- `operational_halt_status_object`
      }
      if (!is.null(this_object$`retail_liquidity_indicator`)) {
        `retail_liquidity_indicator_object` <- ModelsRetailLiquidityIndicatorModel$new()
        `retail_liquidity_indicator_object`$fromJSON(jsonlite::toJSON(this_object$`retail_liquidity_indicator`, auto_unbox = TRUE, digits = NA))
        self$`retail_liquidity_indicator` <- `retail_liquidity_indicator_object`
      }
      if (!is.null(this_object$`system_event`)) {
        `system_event_object` <- IEXSystemEventSystemEventModel$new()
        `system_event_object`$fromJSON(jsonlite::toJSON(this_object$`system_event`, auto_unbox = TRUE, digits = NA))
        self$`system_event` <- `system_event_object`
      }
      if (!is.null(this_object$`security_directory`)) {
        `security_directory_object` <- ModelsSecurityDirectoryModel$new()
        `security_directory_object`$fromJSON(jsonlite::toJSON(this_object$`security_directory`, auto_unbox = TRUE, digits = NA))
        self$`security_directory` <- `security_directory_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ModelsAdminMessageModel in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ModelsAdminMessageModel
    #'
    #' @param input_json the JSON input
    #' @return the instance of ModelsAdminMessageModel
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`trading_status` <- ModelsTradingStatusModel$new()$fromJSON(jsonlite::toJSON(this_object$`trading_status`, auto_unbox = TRUE, digits = NA))
      self$`official_price` <- ModelsOfficialPriceModel$new()$fromJSON(jsonlite::toJSON(this_object$`official_price`, auto_unbox = TRUE, digits = NA))
      self$`security_event` <- ModelsSecurityEventModel$new()$fromJSON(jsonlite::toJSON(this_object$`security_event`, auto_unbox = TRUE, digits = NA))
      self$`auction_information` <- ModelsAuctionInformationModel$new()$fromJSON(jsonlite::toJSON(this_object$`auction_information`, auto_unbox = TRUE, digits = NA))
      self$`short_sale_price_test` <- ModelsShortSalePriceTestStatusModel$new()$fromJSON(jsonlite::toJSON(this_object$`short_sale_price_test`, auto_unbox = TRUE, digits = NA))
      self$`operational_halt_status` <- ModelsOperationalHaltStatusModel$new()$fromJSON(jsonlite::toJSON(this_object$`operational_halt_status`, auto_unbox = TRUE, digits = NA))
      self$`retail_liquidity_indicator` <- ModelsRetailLiquidityIndicatorModel$new()$fromJSON(jsonlite::toJSON(this_object$`retail_liquidity_indicator`, auto_unbox = TRUE, digits = NA))
      self$`system_event` <- IEXSystemEventSystemEventModel$new()$fromJSON(jsonlite::toJSON(this_object$`system_event`, auto_unbox = TRUE, digits = NA))
      self$`security_directory` <- ModelsSecurityDirectoryModel$new()$fromJSON(jsonlite::toJSON(this_object$`security_directory`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ModelsAdminMessageModel and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ModelsAdminMessageModel
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      invalid_fields
    },

    #' @description
    #' Print the object
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# ModelsAdminMessageModel$unlock()
#
## Below is an example to define the print function
# ModelsAdminMessageModel$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ModelsAdminMessageModel$lock()

