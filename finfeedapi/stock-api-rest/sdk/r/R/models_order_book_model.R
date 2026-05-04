#' Create a new ModelsOrderBookModel
#'
#' @description
#' Represents the response DTO for Level-3 order book information
#'
#' @docType class
#' @title ModelsOrderBookModel
#' @description ModelsOrderBookModel Class
#' @format An \code{R6Class} generator object
#' @field add_order  \link{ModelsAddOrderModel} [optional]
#' @field delete_order  \link{ModelsDeleteOrderModel} [optional]
#' @field modify_order  \link{ModelsModifyOrderModel} [optional]
#' @field executed_order  \link{ModelsExecutedOrderModel} [optional]
#' @field clear_book  \link{ModelsClearBookModel} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ModelsOrderBookModel <- R6::R6Class(
  "ModelsOrderBookModel",
  public = list(
    `add_order` = NULL,
    `delete_order` = NULL,
    `modify_order` = NULL,
    `executed_order` = NULL,
    `clear_book` = NULL,

    #' @description
    #' Initialize a new ModelsOrderBookModel class.
    #'
    #' @param add_order add_order
    #' @param delete_order delete_order
    #' @param modify_order modify_order
    #' @param executed_order executed_order
    #' @param clear_book clear_book
    #' @param ... Other optional arguments.
    initialize = function(`add_order` = NULL, `delete_order` = NULL, `modify_order` = NULL, `executed_order` = NULL, `clear_book` = NULL, ...) {
      if (!is.null(`add_order`)) {
        stopifnot(R6::is.R6(`add_order`))
        self$`add_order` <- `add_order`
      }
      if (!is.null(`delete_order`)) {
        stopifnot(R6::is.R6(`delete_order`))
        self$`delete_order` <- `delete_order`
      }
      if (!is.null(`modify_order`)) {
        stopifnot(R6::is.R6(`modify_order`))
        self$`modify_order` <- `modify_order`
      }
      if (!is.null(`executed_order`)) {
        stopifnot(R6::is.R6(`executed_order`))
        self$`executed_order` <- `executed_order`
      }
      if (!is.null(`clear_book`)) {
        stopifnot(R6::is.R6(`clear_book`))
        self$`clear_book` <- `clear_book`
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
    #' @return ModelsOrderBookModel as a base R list.
    #' @examples
    #' # convert array of ModelsOrderBookModel (x) to a data frame
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
    #' Convert ModelsOrderBookModel to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ModelsOrderBookModelObject <- list()
      if (!is.null(self$`add_order`)) {
        ModelsOrderBookModelObject[["add_order"]] <-
          self$extractSimpleType(self$`add_order`)
      }
      if (!is.null(self$`delete_order`)) {
        ModelsOrderBookModelObject[["delete_order"]] <-
          self$extractSimpleType(self$`delete_order`)
      }
      if (!is.null(self$`modify_order`)) {
        ModelsOrderBookModelObject[["modify_order"]] <-
          self$extractSimpleType(self$`modify_order`)
      }
      if (!is.null(self$`executed_order`)) {
        ModelsOrderBookModelObject[["executed_order"]] <-
          self$extractSimpleType(self$`executed_order`)
      }
      if (!is.null(self$`clear_book`)) {
        ModelsOrderBookModelObject[["clear_book"]] <-
          self$extractSimpleType(self$`clear_book`)
      }
      return(ModelsOrderBookModelObject)
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
    #' Deserialize JSON string into an instance of ModelsOrderBookModel
    #'
    #' @param input_json the JSON input
    #' @return the instance of ModelsOrderBookModel
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`add_order`)) {
        `add_order_object` <- ModelsAddOrderModel$new()
        `add_order_object`$fromJSON(jsonlite::toJSON(this_object$`add_order`, auto_unbox = TRUE, digits = NA))
        self$`add_order` <- `add_order_object`
      }
      if (!is.null(this_object$`delete_order`)) {
        `delete_order_object` <- ModelsDeleteOrderModel$new()
        `delete_order_object`$fromJSON(jsonlite::toJSON(this_object$`delete_order`, auto_unbox = TRUE, digits = NA))
        self$`delete_order` <- `delete_order_object`
      }
      if (!is.null(this_object$`modify_order`)) {
        `modify_order_object` <- ModelsModifyOrderModel$new()
        `modify_order_object`$fromJSON(jsonlite::toJSON(this_object$`modify_order`, auto_unbox = TRUE, digits = NA))
        self$`modify_order` <- `modify_order_object`
      }
      if (!is.null(this_object$`executed_order`)) {
        `executed_order_object` <- ModelsExecutedOrderModel$new()
        `executed_order_object`$fromJSON(jsonlite::toJSON(this_object$`executed_order`, auto_unbox = TRUE, digits = NA))
        self$`executed_order` <- `executed_order_object`
      }
      if (!is.null(this_object$`clear_book`)) {
        `clear_book_object` <- ModelsClearBookModel$new()
        `clear_book_object`$fromJSON(jsonlite::toJSON(this_object$`clear_book`, auto_unbox = TRUE, digits = NA))
        self$`clear_book` <- `clear_book_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ModelsOrderBookModel in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ModelsOrderBookModel
    #'
    #' @param input_json the JSON input
    #' @return the instance of ModelsOrderBookModel
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`add_order` <- ModelsAddOrderModel$new()$fromJSON(jsonlite::toJSON(this_object$`add_order`, auto_unbox = TRUE, digits = NA))
      self$`delete_order` <- ModelsDeleteOrderModel$new()$fromJSON(jsonlite::toJSON(this_object$`delete_order`, auto_unbox = TRUE, digits = NA))
      self$`modify_order` <- ModelsModifyOrderModel$new()$fromJSON(jsonlite::toJSON(this_object$`modify_order`, auto_unbox = TRUE, digits = NA))
      self$`executed_order` <- ModelsExecutedOrderModel$new()$fromJSON(jsonlite::toJSON(this_object$`executed_order`, auto_unbox = TRUE, digits = NA))
      self$`clear_book` <- ModelsClearBookModel$new()$fromJSON(jsonlite::toJSON(this_object$`clear_book`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ModelsOrderBookModel and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ModelsOrderBookModel
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
# ModelsOrderBookModel$unlock()
#
## Below is an example to define the print function
# ModelsOrderBookModel$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ModelsOrderBookModel$lock()

