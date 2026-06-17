#' Create a new MarketDataMetadataChain
#'
#' @description
#' Represents a blockchain chain.
#'
#' @docType class
#' @title MarketDataMetadataChain
#' @description MarketDataMetadataChain Class
#' @format An \code{R6Class} generator object
#' @field chain_id Gets or sets the chain identifier. character [optional]
#' @field name Gets or sets the name of the chain. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MarketDataMetadataChain <- R6::R6Class(
  "MarketDataMetadataChain",
  public = list(
    `chain_id` = NULL,
    `name` = NULL,

    #' @description
    #' Initialize a new MarketDataMetadataChain class.
    #'
    #' @param chain_id Gets or sets the chain identifier.
    #' @param name Gets or sets the name of the chain.
    #' @param ... Other optional arguments.
    initialize = function(`chain_id` = NULL, `name` = NULL, ...) {
      if (!is.null(`chain_id`)) {
        if (!(is.character(`chain_id`) && length(`chain_id`) == 1)) {
          stop(paste("Error! Invalid data for `chain_id`. Must be a string:", `chain_id`))
        }
        self$`chain_id` <- `chain_id`
      }
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
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
    #' @return MarketDataMetadataChain as a base R list.
    #' @examples
    #' # convert array of MarketDataMetadataChain (x) to a data frame
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
    #' Convert MarketDataMetadataChain to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MarketDataMetadataChainObject <- list()
      if (!is.null(self$`chain_id`)) {
        MarketDataMetadataChainObject[["chain_id"]] <-
          self$`chain_id`
      }
      if (!is.null(self$`name`)) {
        MarketDataMetadataChainObject[["name"]] <-
          self$`name`
      }
      return(MarketDataMetadataChainObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MarketDataMetadataChain
    #'
    #' @param input_json the JSON input
    #' @return the instance of MarketDataMetadataChain
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`chain_id`)) {
        self$`chain_id` <- this_object$`chain_id`
      }
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MarketDataMetadataChain in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MarketDataMetadataChain
    #'
    #' @param input_json the JSON input
    #' @return the instance of MarketDataMetadataChain
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`chain_id` <- this_object$`chain_id`
      self$`name` <- this_object$`name`
      self
    },

    #' @description
    #' Validate JSON input with respect to MarketDataMetadataChain and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MarketDataMetadataChain
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
# MarketDataMetadataChain$unlock()
#
## Below is an example to define the print function
# MarketDataMetadataChain$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MarketDataMetadataChain$lock()

