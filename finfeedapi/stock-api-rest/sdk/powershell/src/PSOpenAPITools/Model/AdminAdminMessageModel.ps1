#
# FinFeedAPI Stock REST API
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
# Version: v1
# Contact: support@apibricks.io
# Generated by OpenAPI Generator: https://openapi-generator.tech
#

<#
.SYNOPSIS

No summary available.

.DESCRIPTION

Represents the response DTO for IEX admin information, combining all symbol-based admin message types

.PARAMETER TradingStatus
No description available.
.PARAMETER OfficialPrice
No description available.
.PARAMETER SecurityEvent
No description available.
.PARAMETER AuctionInformation
No description available.
.PARAMETER ShortSalePriceTest
No description available.
.PARAMETER OperationalHaltStatus
No description available.
.PARAMETER RetailLiquidityIndicator
No description available.
.PARAMETER SystemEvent
No description available.
.PARAMETER SecurityDirectory
No description available.
.OUTPUTS

AdminAdminMessageModel<PSCustomObject>
#>

function Initialize-AdminAdminMessageModel {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${TradingStatus},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${OfficialPrice},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${SecurityEvent},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${AuctionInformation},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${ShortSalePriceTest},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${OperationalHaltStatus},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${RetailLiquidityIndicator},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${SystemEvent},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true)]
        [PSCustomObject]
        ${SecurityDirectory}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => AdminAdminMessageModel' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "trading_status" = ${TradingStatus}
            "official_price" = ${OfficialPrice}
            "security_event" = ${SecurityEvent}
            "auction_information" = ${AuctionInformation}
            "short_sale_price_test" = ${ShortSalePriceTest}
            "operational_halt_status" = ${OperationalHaltStatus}
            "retail_liquidity_indicator" = ${RetailLiquidityIndicator}
            "system_event" = ${SystemEvent}
            "security_directory" = ${SecurityDirectory}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to AdminAdminMessageModel<PSCustomObject>

.DESCRIPTION

Convert from JSON to AdminAdminMessageModel<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

AdminAdminMessageModel<PSCustomObject>
#>
function ConvertFrom-JsonToAdminAdminMessageModel {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => AdminAdminMessageModel' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in AdminAdminMessageModel
        $AllProperties = ("trading_status", "official_price", "security_event", "auction_information", "short_sale_price_test", "operational_halt_status", "retail_liquidity_indicator", "system_event", "security_directory")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "trading_status"))) { #optional property not found
            $TradingStatus = $null
        } else {
            $TradingStatus = $JsonParameters.PSobject.Properties["trading_status"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "official_price"))) { #optional property not found
            $OfficialPrice = $null
        } else {
            $OfficialPrice = $JsonParameters.PSobject.Properties["official_price"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "security_event"))) { #optional property not found
            $SecurityEvent = $null
        } else {
            $SecurityEvent = $JsonParameters.PSobject.Properties["security_event"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "auction_information"))) { #optional property not found
            $AuctionInformation = $null
        } else {
            $AuctionInformation = $JsonParameters.PSobject.Properties["auction_information"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "short_sale_price_test"))) { #optional property not found
            $ShortSalePriceTest = $null
        } else {
            $ShortSalePriceTest = $JsonParameters.PSobject.Properties["short_sale_price_test"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "operational_halt_status"))) { #optional property not found
            $OperationalHaltStatus = $null
        } else {
            $OperationalHaltStatus = $JsonParameters.PSobject.Properties["operational_halt_status"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "retail_liquidity_indicator"))) { #optional property not found
            $RetailLiquidityIndicator = $null
        } else {
            $RetailLiquidityIndicator = $JsonParameters.PSobject.Properties["retail_liquidity_indicator"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "system_event"))) { #optional property not found
            $SystemEvent = $null
        } else {
            $SystemEvent = $JsonParameters.PSobject.Properties["system_event"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "security_directory"))) { #optional property not found
            $SecurityDirectory = $null
        } else {
            $SecurityDirectory = $JsonParameters.PSobject.Properties["security_directory"].value
        }

        $PSO = [PSCustomObject]@{
            "trading_status" = ${TradingStatus}
            "official_price" = ${OfficialPrice}
            "security_event" = ${SecurityEvent}
            "auction_information" = ${AuctionInformation}
            "short_sale_price_test" = ${ShortSalePriceTest}
            "operational_halt_status" = ${OperationalHaltStatus}
            "retail_liquidity_indicator" = ${RetailLiquidityIndicator}
            "system_event" = ${SystemEvent}
            "security_directory" = ${SecurityDirectory}
        }

        return $PSO
    }

}

