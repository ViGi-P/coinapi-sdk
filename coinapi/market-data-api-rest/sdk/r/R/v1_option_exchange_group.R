#' Create a new V1OptionExchangeGroup
#'
#' @description
#' Represents an option exchange group data model.
#'
#' @docType class
#' @title V1OptionExchangeGroup
#' @description V1OptionExchangeGroup Class
#' @format An \code{R6Class} generator object
#' @field asset_id_base Gets or sets the base asset identifier. character [optional]
#' @field asset_id_quote Gets or sets the quote asset identifier. character [optional]
#' @field underlying_price Gets or sets the underlying price of the option. numeric [optional]
#' @field time_expiration Gets or sets the expiration time of the option. character [optional]
#' @field strikes Gets or sets the list of strikes available. list(\link{V1Strike}) [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
V1OptionExchangeGroup <- R6::R6Class(
  "V1OptionExchangeGroup",
  public = list(
    `asset_id_base` = NULL,
    `asset_id_quote` = NULL,
    `underlying_price` = NULL,
    `time_expiration` = NULL,
    `strikes` = NULL,

    #' @description
    #' Initialize a new V1OptionExchangeGroup class.
    #'
    #' @param asset_id_base Gets or sets the base asset identifier.
    #' @param asset_id_quote Gets or sets the quote asset identifier.
    #' @param underlying_price Gets or sets the underlying price of the option.
    #' @param time_expiration Gets or sets the expiration time of the option.
    #' @param strikes Gets or sets the list of strikes available.
    #' @param ... Other optional arguments.
    initialize = function(`asset_id_base` = NULL, `asset_id_quote` = NULL, `underlying_price` = NULL, `time_expiration` = NULL, `strikes` = NULL, ...) {
      if (!is.null(`asset_id_base`)) {
        if (!(is.character(`asset_id_base`) && length(`asset_id_base`) == 1)) {
          stop(paste("Error! Invalid data for `asset_id_base`. Must be a string:", `asset_id_base`))
        }
        self$`asset_id_base` <- `asset_id_base`
      }
      if (!is.null(`asset_id_quote`)) {
        if (!(is.character(`asset_id_quote`) && length(`asset_id_quote`) == 1)) {
          stop(paste("Error! Invalid data for `asset_id_quote`. Must be a string:", `asset_id_quote`))
        }
        self$`asset_id_quote` <- `asset_id_quote`
      }
      if (!is.null(`underlying_price`)) {
        if (!(is.numeric(`underlying_price`) && length(`underlying_price`) == 1)) {
          stop(paste("Error! Invalid data for `underlying_price`. Must be a number:", `underlying_price`))
        }
        self$`underlying_price` <- `underlying_price`
      }
      if (!is.null(`time_expiration`)) {
        if (!is.character(`time_expiration`)) {
          stop(paste("Error! Invalid data for `time_expiration`. Must be a string:", `time_expiration`))
        }
        self$`time_expiration` <- `time_expiration`
      }
      if (!is.null(`strikes`)) {
        stopifnot(is.vector(`strikes`), length(`strikes`) != 0)
        sapply(`strikes`, function(x) stopifnot(R6::is.R6(x)))
        self$`strikes` <- `strikes`
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
    #' @return V1OptionExchangeGroup as a base R list.
    #' @examples
    #' # convert array of V1OptionExchangeGroup (x) to a data frame
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
    #' Convert V1OptionExchangeGroup to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      V1OptionExchangeGroupObject <- list()
      if (!is.null(self$`asset_id_base`)) {
        V1OptionExchangeGroupObject[["asset_id_base"]] <-
          self$`asset_id_base`
      }
      if (!is.null(self$`asset_id_quote`)) {
        V1OptionExchangeGroupObject[["asset_id_quote"]] <-
          self$`asset_id_quote`
      }
      if (!is.null(self$`underlying_price`)) {
        V1OptionExchangeGroupObject[["underlying_price"]] <-
          self$`underlying_price`
      }
      if (!is.null(self$`time_expiration`)) {
        V1OptionExchangeGroupObject[["time_expiration"]] <-
          self$`time_expiration`
      }
      if (!is.null(self$`strikes`)) {
        V1OptionExchangeGroupObject[["strikes"]] <-
          self$extractSimpleType(self$`strikes`)
      }
      return(V1OptionExchangeGroupObject)
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
    #' Deserialize JSON string into an instance of V1OptionExchangeGroup
    #'
    #' @param input_json the JSON input
    #' @return the instance of V1OptionExchangeGroup
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`asset_id_base`)) {
        self$`asset_id_base` <- this_object$`asset_id_base`
      }
      if (!is.null(this_object$`asset_id_quote`)) {
        self$`asset_id_quote` <- this_object$`asset_id_quote`
      }
      if (!is.null(this_object$`underlying_price`)) {
        self$`underlying_price` <- this_object$`underlying_price`
      }
      if (!is.null(this_object$`time_expiration`)) {
        self$`time_expiration` <- this_object$`time_expiration`
      }
      if (!is.null(this_object$`strikes`)) {
        self$`strikes` <- ApiClient$new()$deserializeObj(this_object$`strikes`, "array[V1Strike]", loadNamespace("openapi"))
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return V1OptionExchangeGroup in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of V1OptionExchangeGroup
    #'
    #' @param input_json the JSON input
    #' @return the instance of V1OptionExchangeGroup
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`asset_id_base` <- this_object$`asset_id_base`
      self$`asset_id_quote` <- this_object$`asset_id_quote`
      self$`underlying_price` <- this_object$`underlying_price`
      self$`time_expiration` <- this_object$`time_expiration`
      self$`strikes` <- ApiClient$new()$deserializeObj(this_object$`strikes`, "array[V1Strike]", loadNamespace("openapi"))
      self
    },

    #' @description
    #' Validate JSON input with respect to V1OptionExchangeGroup and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of V1OptionExchangeGroup
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
# V1OptionExchangeGroup$unlock()
#
## Below is an example to define the print function
# V1OptionExchangeGroup$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# V1OptionExchangeGroup$lock()

