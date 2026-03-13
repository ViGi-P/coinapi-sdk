#' Create a new ModelsIndexMultiAssetWeight
#'
#' @description
#' ModelsIndexMultiAssetWeight Class
#'
#' @docType class
#' @title ModelsIndexMultiAssetWeight
#' @description ModelsIndexMultiAssetWeight Class
#' @format An \code{R6Class} generator object
#' @field indexId  character [optional]
#' @field assetId  character [optional]
#' @field weight  numeric [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ModelsIndexMultiAssetWeight <- R6::R6Class(
  "ModelsIndexMultiAssetWeight",
  public = list(
    `indexId` = NULL,
    `assetId` = NULL,
    `weight` = NULL,

    #' @description
    #' Initialize a new ModelsIndexMultiAssetWeight class.
    #'
    #' @param indexId indexId
    #' @param assetId assetId
    #' @param weight weight
    #' @param ... Other optional arguments.
    initialize = function(`indexId` = NULL, `assetId` = NULL, `weight` = NULL, ...) {
      if (!is.null(`indexId`)) {
        if (!(is.character(`indexId`) && length(`indexId`) == 1)) {
          stop(paste("Error! Invalid data for `indexId`. Must be a string:", `indexId`))
        }
        self$`indexId` <- `indexId`
      }
      if (!is.null(`assetId`)) {
        if (!(is.character(`assetId`) && length(`assetId`) == 1)) {
          stop(paste("Error! Invalid data for `assetId`. Must be a string:", `assetId`))
        }
        self$`assetId` <- `assetId`
      }
      if (!is.null(`weight`)) {
        if (!(is.numeric(`weight`) && length(`weight`) == 1)) {
          stop(paste("Error! Invalid data for `weight`. Must be a number:", `weight`))
        }
        self$`weight` <- `weight`
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
    #' @return ModelsIndexMultiAssetWeight as a base R list.
    #' @examples
    #' # convert array of ModelsIndexMultiAssetWeight (x) to a data frame
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
    #' Convert ModelsIndexMultiAssetWeight to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ModelsIndexMultiAssetWeightObject <- list()
      if (!is.null(self$`indexId`)) {
        ModelsIndexMultiAssetWeightObject[["indexId"]] <-
          self$`indexId`
      }
      if (!is.null(self$`assetId`)) {
        ModelsIndexMultiAssetWeightObject[["assetId"]] <-
          self$`assetId`
      }
      if (!is.null(self$`weight`)) {
        ModelsIndexMultiAssetWeightObject[["weight"]] <-
          self$`weight`
      }
      return(ModelsIndexMultiAssetWeightObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ModelsIndexMultiAssetWeight
    #'
    #' @param input_json the JSON input
    #' @return the instance of ModelsIndexMultiAssetWeight
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`indexId`)) {
        self$`indexId` <- this_object$`indexId`
      }
      if (!is.null(this_object$`assetId`)) {
        self$`assetId` <- this_object$`assetId`
      }
      if (!is.null(this_object$`weight`)) {
        self$`weight` <- this_object$`weight`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ModelsIndexMultiAssetWeight in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ModelsIndexMultiAssetWeight
    #'
    #' @param input_json the JSON input
    #' @return the instance of ModelsIndexMultiAssetWeight
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`indexId` <- this_object$`indexId`
      self$`assetId` <- this_object$`assetId`
      self$`weight` <- this_object$`weight`
      self
    },

    #' @description
    #' Validate JSON input with respect to ModelsIndexMultiAssetWeight and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ModelsIndexMultiAssetWeight
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
# ModelsIndexMultiAssetWeight$unlock()
#
## Below is an example to define the print function
# ModelsIndexMultiAssetWeight$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ModelsIndexMultiAssetWeight$lock()

