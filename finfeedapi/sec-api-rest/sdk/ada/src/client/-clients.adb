--  FinFeedAPI SEC REST API
--  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
--
--  The version of the OpenAPI document: v1
--  Contact: support@apibricks.io
--
--  NOTE: This package is auto generated by OpenAPI-Generator 7.13.0.
--  https://openapi-generator.tech
--  Do not edit the class manually.

pragma Warnings (Off, "*is not referenced");
with Swagger.Streams;
package body .Clients is
   pragma Style_Checks ("-bmrIu");

   Mime_1 : aliased constant String := "application/octet-stream";
   Mime_2 : aliased constant String := "application/pdf";
   Mime_3 : aliased constant String := "text/html";
   Media_List_1 : constant Swagger.Mime_List := (
     1 => Swagger.Mime_Json,
   
     2 => Mime_1'Access,
   
     3 => Mime_2'Access,
   
     4 => Swagger.Mime_Xml,
   
     5 => Mime_3'Access,
   
     6 => Swagger.Mime_Text   );
   Media_List_2 : constant Swagger.Mime_List := (
     1 => Swagger.Mime_Json   );


   --  Extract and classify SEC filing content
   --  Retrieves filing content from the EDGAR database and intelligently classifies it according to form type and item categories.
   --  
   --  ### Supported Form Types
   --  
   --  Form Type | Description
   --  ----------|------------
   --  8-K      | Current report filing
   --  10-K     | Annual report filing
   --  10-Q     | Quarterly report filing
   --  
   --  ### Content Classification
   --  - 8-K forms: Content classified by item numbers (e.g., 1.01, 2.01)
   --  - 10-K/10-Q forms: Items categorized by their respective part and item structure
   --  
   --  :::note
   --  Both HTML and plain text documents are supported for content extraction.
   --  :::
   procedure V_1Extractor_Get
      (Client : in out Client_Type;
       Accession_Number : in Swagger.UString;
       P_Type : in .Models.DTOExtractorType_Type;
       Result : out Swagger..Models.AnyType_Type_Map) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept (Media_List_2);


      URI.Add_Param ("accession_number", Accession_Number);
      URI.Add_Param ("type", .Models.To_String (P_Type));
      URI.Set_Path ("/v1/extractor");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V_1Extractor_Get;

   --  Extract specific item content from SEC filing
   --  Retrieves filing content from the EDGAR database and returns only the text content of the specified item number.
   --  
   --  ### Item Number Format
   --  
   --  Form Type | Item Format Examples
   --  -----------|-------------------
   --  8-K       | 1.01, 2.01, 7.01
   --  10-K      | 1, 2, 3
   --  10-K/10-Q | PartI 1, PartII 2
   --  
   --  :::tip
   --  For best results, ensure the item number matches exactly with the filing's structure.
   --  :::
   procedure V_1Extractor_Item_Get
      (Client : in out Client_Type;
       Accession_Number : in Swagger.UString;
       Item_Number : in Swagger.UString;
       P_Type : in .Models.DTOExtractorType_Type;
       Result : out Swagger.UString) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept (Media_List_2);


      URI.Add_Param ("accession_number", Accession_Number);
      URI.Add_Param ("item_number", Item_Number);
      URI.Add_Param ("type", .Models.To_String (P_Type));
      URI.Set_Path ("/v1/extractor/item");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V_1Extractor_Item_Get;

   --  Download file from SEC EDGAR archive
   --  Downloads a specific file from the SEC EDGAR archive using the accession number and filename.
   --  The file is streamed directly from the SEC servers to the client.
   --  
   --  ### Accession Number Format
   --  Accession numbers must be in the format: 0000000000-00-000000 (10 digits, dash, 2 digits, dash, 6 digits)
   --  
   --  ### File Name Examples
   --  - Primary documents: `d123456d10k.htm`, `d789012d8k.htm`
   --  - XBRL files: `d123456d10k_htm.xml`, `FilingSummary.xml`
   --  - Exhibits: `d123456dexhibit99.htm`, `d123456dex101.htm`
   --  
   --  ### File Types
   --  The endpoint supports downloading various file types from SEC filings:
   --  - HTML documents (.htm, .html)
   --  - XBRL files (.xml, .xsd)
   --  - Text files (.txt)
   --  - PDF files (.pdf)
   --  - Other document formats as submitted to SEC
   --  
   --  :::tip
   --  You can find available filenames for a specific filing using the `/v1/filings` endpoint first
   --  :::
   --  
   --  :::warning
   --  This endpoint streams files directly from the SEC. Large files may take longer to download.
   --  :::
   procedure V_1Download_Get
      (Client : in out Client_Type;
       Accession_No : in Swagger.UString;
       File_Name : in Swagger.UString) is
      URI   : Swagger.Clients.URI_Type;
   begin
      Client.Set_Accept (Media_List_1);


      URI.Add_Param ("accession_no", Accession_No);
      URI.Add_Param ("file_name", File_Name);
      URI.Set_Path ("/v1/download");
      Client.Call (Swagger.Clients.GET, URI);
   end V_1Download_Get;

   --  Query SEC filing metadata
   --  Retrieves metadata for SEC filings based on various filter criteria with pagination and sorting support.
   --  
   --  ### Available Sort Fields
   --  
   --  Field Name | Description
   --  -----------|-------------
   --  AccessionNumber | SEC filing accession number
   --  FilingDate | Date when filing was submitted
   --  AcceptanceDateTime | Date and time of filing acceptance
   --  ReportDate | Date of the report
   --  Size | Size of the filing document
   --  
   --  ### Date Format
   --  All dates must be provided in YYYY-MM-DD format
   --  
   --  ### Form Types
   --  Form types can be provided as comma-separated values, e.g.: "10-K,8-K,10-Q"
   --  
   --  :::tip
   --  For optimal performance, use date ranges and form types to narrow down your search
   --  :::
   procedure V_1Filings_Get
      (Client : in out Client_Type;
       Cik : in Swagger.Nullable_Long;
       Ticker : in Swagger.Nullable_UString;
       Form_Type : in Swagger.Nullable_UString;
       Filling_Date_Start : in Swagger.Nullable_UString;
       Filling_Date_End : in Swagger.Nullable_UString;
       Report_Date_Start : in Swagger.Nullable_UString;
       Report_Date_End : in Swagger.Nullable_UString;
       Items_Contain : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Page_Number : in Swagger.Nullable_Integer;
       Sort_By : in .Models.DTOFilingSortBy_Type;
       Sort_Order : in Swagger.Nullable_UString;
       Result : out .Models.DTOFilingMetadataDto_Type_Vectors.Vector) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept (Media_List_2);


      URI.Add_Param ("cik", Cik);
      URI.Add_Param ("ticker", Ticker);
      URI.Add_Param ("form_type", Form_Type);
      URI.Add_Param ("filling_date_start", Filling_Date_Start);
      URI.Add_Param ("filling_date_end", Filling_Date_End);
      URI.Add_Param ("report_date_start", Report_Date_Start);
      URI.Add_Param ("report_date_end", Report_Date_End);
      URI.Add_Param ("items_contain", Items_Contain);
      URI.Add_Param ("page_size", Page_Size);
      URI.Add_Param ("page_number", Page_Number);
      URI.Add_Param ("sort_by", .Models.To_String (Sort_By));
      URI.Add_Param ("sort_order", Sort_Order);
      URI.Set_Path ("/v1/filings");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V_1Filings_Get;

   --  Full_text search of SEC filing documents
   --  Search across SEC filing documents with advanced filtering and sorting capabilities.
   --  
   --  ### Available Sort Fields
   --  
   --  Field Name | Description
   --  -----------|-------------
   --  AccessionNumber | SEC filing accession number
   --  FormType | Type of the filing document
   --  FilingDate | Date when filing was submitted
   --  CompanyName | Name of the company
   --  CIK | Central Index Key
   --  DocumentFilename | Name of the filing document
   --  DocumentDescription | Description of the document
   --  
   --  ### Search Options
   --  
   --  Option | Description
   --  --------|-------------
   --  text_contains | Keywords that must appear in the document
   --  text_not_contain | Keywords that must not appear in the document
   --  
   --  ### Date Format
   --  All dates must be provided in YYYY-MM-DD format
   --  
   --  :::tip
   --  Use text_contains and text_not_contain with multiple keywords separated by commas for more precise searches
   --  :::
   --  
   --  :::note
   --  The search is case-insensitive and supports partial word matches
   --  :::
   procedure V_1Full_Text_Get
      (Client : in out Client_Type;
       Form_Type : in Swagger.Nullable_UString;
       Filling_Date_Start : in Swagger.Nullable_UString;
       Filling_Date_End : in Swagger.Nullable_UString;
       Text_Contains : in Swagger.Nullable_UString;
       Text_Not_Contain : in Swagger.Nullable_UString;
       Page_Size : in Swagger.Nullable_Integer;
       Page_Number : in Swagger.Nullable_Integer;
       Sort_By : in Swagger.Nullable_UString;
       Sort_Order : in Swagger.Nullable_UString;
       Result : out .Models.DTOSecFilingResultDto_Type_Vectors.Vector) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept (Media_List_2);


      URI.Add_Param ("form_type", Form_Type);
      URI.Add_Param ("filling_date_start", Filling_Date_Start);
      URI.Add_Param ("filling_date_end", Filling_Date_End);
      URI.Add_Param ("text_contains", Text_Contains);
      URI.Add_Param ("text_not_contain", Text_Not_Contain);
      URI.Add_Param ("page_size", Page_Size);
      URI.Add_Param ("page_number", Page_Number);
      URI.Add_Param ("sort_by", Sort_By);
      URI.Add_Param ("sort_order", Sort_Order);
      URI.Set_Path ("/v1/full-text");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V_1Full_Text_Get;

   --  Convert XBRL data to JSON format
   --  Converts XBRL data to JSON format using one of three possible input methods.
   --  
   --  ### Input Methods
   --  
   --  1. HTML URL (htm-url)
   --     - URL of the filing ending with .htm or .html
   --     - Both filing URLs and index page URLs are accepted
   --     - Example: https://www.sec.gov/Archives/edgar/data/1318605/000156459021004599/tsla-10k_20201231.htm
   --  
   --  2. XBRL URL (xbrl-url)
   --     - URL of the XBRL file ending with .xml
   --     - Can be found in the dataFiles array from Query API
   --     - Example: https://www.sec.gov/Archives/edgar/data/1318605/000156459021004599/tsla-10k_20201231_htm.xml
   --  
   --  3. Accession Number (accession-no)
   --     - The SEC filing accession number
   --     - Example: 0001564590-21-004599
   --  
   --  :::note
   --  Only one of the three parameters should be provided. If multiple parameters are provided, the priority order is:
   --  1. htm-url
   --  2. xbrl-url
   --  3. accession-no
   --  :::
   --  
   --  ### Supported Filing Types
   --  
   --  - Annual Reports (10-K)
   --  - Quarterly Reports (10-Q)
   --  - Current Reports (8-K)
   --  - Registration Statements (S-1, S-3)
   --  - Foreign Private Issuer Reports (20-F, 40-F)
   --  
   --  ### Response Format
   --  
   --  The API returns a JSON object containing:
   --  - Financial statements (Income Statement, Balance Sheet, Cash Flow Statement)
   --  - Accounting policies and footnotes
   --  - Company information
   --  - Filing metadata
   --  
   --  ### Example Response
   --  ```json
   --  {
   --    "StatementsOfIncome": {
   --      "RevenueFromContractWithCustomerExcludingAssessedTax": [
   --        {
   --          "decimals": "-6",
   --          "unitRef": "U_USD",
   --          "period": {
   --            "startDate": "2023-07-01",
   --            "endDate": "2024-06-30"
   --          },
   --          "value": "245122000000"
   --        }
   --      ]
   --    }
   --  }
   --  ```
   procedure V_1Xbrl_Converter_Get
      (Client : in out Client_Type;
       Htm_Url : in Swagger.Nullable_UString;
       Xbrl_Url : in Swagger.Nullable_UString;
       Accession_No : in Swagger.Nullable_UString;
       Result : out Swagger..Models.AnyType_Type_Map) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept (Media_List_2);


      URI.Add_Param ("htm-url", Htm_Url);
      URI.Add_Param ("xbrl-url", Xbrl_Url);
      URI.Add_Param ("accession-no", Accession_No);
      URI.Set_Path ("/v1/xbrl-converter");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end V_1Xbrl_Converter_Get;
end .Clients;
