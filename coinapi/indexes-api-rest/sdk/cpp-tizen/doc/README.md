# Documentation for CoinAPI Indexes REST API v1 Tizen Client SDK

## How do I get the doc files?
First generate source code by running `openapi-generator`
Then run `doc/generateDocumentation.sh` from the output folder. It will generate all the doc files and put them in the `doc/SDK` directory.
To successfully generate documentation it needs `Doxygen` installed in the path.
*Note* - Before generating the documentation, put the logo of the project as the file `doc/logo.png` before running `doxygen`.


## How do I use this?
This is the structure of the doc folder:

```
.
├── logo.png                  \\Logo of the project
├── Doxyfile                  \\Doxygen config files
├── generateDocumentation.sh  \\Script to run to generate documentation
├── README.md                 \\This file
├── SDK                       \\Documentation for all classes in CoinAPI Indexes REST API Tizen Client SDK. See ./html/index.html
│   └── html

```

## *tl;dr* run this:

```
doc/generateDocumentation.sh
```

The above SDK folder will be generated. See the index.html inside the SDK folder.


## What's Doxygen?
Doxygen is the de facto standard tool for generating/extracting documentation from annotated/unannotated C++ sources, but it also supports other popular programming languages such as C, Objective-C, C#, PHP, Java, Python, IDL (Corba, Microsoft, and UNO/OpenOffice flavors), Fortran, VHDL, Tcl, and to some extent D.

Check out [Doxygen](https://www.doxygen.org/) for additional information about the Doxygen project.

## I Don't want to run Doxygen. What are the API files for accessing the REST endpoints?
All URIs are relative to https://rest-api.indexes.coinapi.iohttps://rest-api.indexes.coinapi.io


### IndexesManager
Method | HTTP request | Description
------------- | ------------- | -------------
*v1IndexdefMultiassetGetSync* | *GET* /v1/indexdef/multiasset | Get all multi-asset weights.
*v1IndexdefMultiassetGetASync* | *GET* /v1/indexdef/multiasset | Get all multi-asset weights.
*v1IndexdefMultiassetIndexIdGetSync* | *GET* /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index.
*v1IndexdefMultiassetIndexIdGetASync* | *GET* /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index.
*v1IndexesGetSync* | *GET* /v1/indexes | List indexes.
*v1IndexesGetASync* | *GET* /v1/indexes | List indexes.
*v1IndexesIndexDefinitionIdCurrentSnapshotGetSync* | *GET* /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition.
*v1IndexesIndexDefinitionIdCurrentSnapshotGetASync* | *GET* /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition.
*v1IndexesIndexDefinitionIdHistorySnapshotGetSync* | *GET* /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition.
*v1IndexesIndexDefinitionIdHistorySnapshotGetASync* | *GET* /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition.
*v1IndexesIndexIdCurrentGetSync* | *GET* /v1/indexes/{index_id}/current | Current Index Value.
*v1IndexesIndexIdCurrentGetASync* | *GET* /v1/indexes/{index_id}/current | Current Index Value.
*v1IndexesIndexIdHistoryGetSync* | *GET* /v1/indexes/{index_id}/history | Historical Index Value w/Composition.
*v1IndexesIndexIdHistoryGetASync* | *GET* /v1/indexes/{index_id}/history | Historical Index Value w/Composition.
*v1IndexesIndexIdTimeseriesGetSync* | *GET* /v1/indexes/{index_id}/timeseries | Timeseries Index Value.
*v1IndexesIndexIdTimeseriesGetASync* | *GET* /v1/indexes/{index_id}/timeseries | Timeseries Index Value.


## What are the Model files for the data structures/objects?
Class | Description
------------- | -------------
 *Models.IndexDefinitionSnapshotEntry* | 
 *Models.IndexIdentifier* | Represents an index id
 *Models.IndexMultiAssetWeight* | 
 *Models.IndexTimeseriesItem* | Represents a timeseries item with value information.
 *Models.IndexValue* | 
 *Models.IndexValueComponent* | 

