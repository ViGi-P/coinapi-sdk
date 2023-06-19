#
# On Chain Dapps - REST API
#  This section will provide necessary information about the `OnChain API` protocol.  <br/><br/> Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.                             
# Version: v1
# Contact: support@coinapi.io
# Generated by OpenAPI Generator: https://openapi-generator.tech
#

<#
.SYNOPSIS

No summary available.

.DESCRIPTION

This entity is used to store data about a user's liquidity position over time. This information, along with information from the pair itself can be used to provide position sizes, token deposits, and more. It gets created and never updated.

.PARAMETER EntryTime
No description available.
.PARAMETER RecvTime
No description available.
.PARAMETER BlockNumber
Number of block in which entity was recorded.
.PARAMETER Id
Identifier, format: (pair address)-(user address)-(timestamp)
.PARAMETER LiquidityPosition
Reference to LP identifier.
.PARAMETER Timestamp
Creation time.
.PARAMETER Block
Block in which snapshot has been created.
.PARAMETER User
Reference to user.
.PARAMETER Pair
Reference to the pair liquidity is being provided on.
.PARAMETER Token0PriceUsd
Snapshot of token0 price in USD.
.PARAMETER Token1PriceUsd
Snapshot of token0 price in USD.
.PARAMETER Reserve0
Snapshot of pair token0 reserves.
.PARAMETER Reserve1
Snapshot of pair token1 reserves.
.PARAMETER ReserveUsd
Snapshot of pair reserves in USD.
.PARAMETER LiquidityTokenTotalSupply
Snapshot of pool token supply.
.PARAMETER LiquidityTokenBalance
Snapshot of users pool token balance.
.PARAMETER Vid

.OUTPUTS

SushiswapLiquidityPositionSnapshotDTO<PSCustomObject>
#>

function Initialize-SushiswapLiquidityPositionSnapshotDTO {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[System.DateTime]]
        ${EntryTime},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[System.DateTime]]
        ${RecvTime},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int64]]
        ${BlockNumber},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Id},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${LiquidityPosition},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${Timestamp},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${Block},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${User},
        [Parameter(Position = 8, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Pair},
        [Parameter(Position = 9, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Token0PriceUsd},
        [Parameter(Position = 10, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Token1PriceUsd},
        [Parameter(Position = 11, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Reserve0},
        [Parameter(Position = 12, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Reserve1},
        [Parameter(Position = 13, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${ReserveUsd},
        [Parameter(Position = 14, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${LiquidityTokenTotalSupply},
        [Parameter(Position = 15, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${LiquidityTokenBalance},
        [Parameter(Position = 16, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int64]]
        ${Vid}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => SushiswapLiquidityPositionSnapshotDTO' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "entry_time" = ${EntryTime}
            "recv_time" = ${RecvTime}
            "block_number" = ${BlockNumber}
            "id" = ${Id}
            "liquidity_position" = ${LiquidityPosition}
            "timestamp" = ${Timestamp}
            "block" = ${Block}
            "user" = ${User}
            "pair" = ${Pair}
            "token_0_price_usd" = ${Token0PriceUsd}
            "token_1_price_usd" = ${Token1PriceUsd}
            "reserve_0" = ${Reserve0}
            "reserve_1" = ${Reserve1}
            "reserve_usd" = ${ReserveUsd}
            "liquidity_token_total_supply" = ${LiquidityTokenTotalSupply}
            "liquidity_token_balance" = ${LiquidityTokenBalance}
            "vid" = ${Vid}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to SushiswapLiquidityPositionSnapshotDTO<PSCustomObject>

.DESCRIPTION

Convert from JSON to SushiswapLiquidityPositionSnapshotDTO<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

SushiswapLiquidityPositionSnapshotDTO<PSCustomObject>
#>
function ConvertFrom-JsonToSushiswapLiquidityPositionSnapshotDTO {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => SushiswapLiquidityPositionSnapshotDTO' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in SushiswapLiquidityPositionSnapshotDTO
        $AllProperties = ("entry_time", "recv_time", "block_number", "id", "liquidity_position", "timestamp", "block", "user", "pair", "token_0_price_usd", "token_1_price_usd", "reserve_0", "reserve_1", "reserve_usd", "liquidity_token_total_supply", "liquidity_token_balance", "vid")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "entry_time"))) { #optional property not found
            $EntryTime = $null
        } else {
            $EntryTime = $JsonParameters.PSobject.Properties["entry_time"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "recv_time"))) { #optional property not found
            $RecvTime = $null
        } else {
            $RecvTime = $JsonParameters.PSobject.Properties["recv_time"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "block_number"))) { #optional property not found
            $BlockNumber = $null
        } else {
            $BlockNumber = $JsonParameters.PSobject.Properties["block_number"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "id"))) { #optional property not found
            $Id = $null
        } else {
            $Id = $JsonParameters.PSobject.Properties["id"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "liquidity_position"))) { #optional property not found
            $LiquidityPosition = $null
        } else {
            $LiquidityPosition = $JsonParameters.PSobject.Properties["liquidity_position"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "timestamp"))) { #optional property not found
            $Timestamp = $null
        } else {
            $Timestamp = $JsonParameters.PSobject.Properties["timestamp"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "block"))) { #optional property not found
            $Block = $null
        } else {
            $Block = $JsonParameters.PSobject.Properties["block"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "user"))) { #optional property not found
            $User = $null
        } else {
            $User = $JsonParameters.PSobject.Properties["user"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "pair"))) { #optional property not found
            $Pair = $null
        } else {
            $Pair = $JsonParameters.PSobject.Properties["pair"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "token_0_price_usd"))) { #optional property not found
            $Token0PriceUsd = $null
        } else {
            $Token0PriceUsd = $JsonParameters.PSobject.Properties["token_0_price_usd"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "token_1_price_usd"))) { #optional property not found
            $Token1PriceUsd = $null
        } else {
            $Token1PriceUsd = $JsonParameters.PSobject.Properties["token_1_price_usd"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "reserve_0"))) { #optional property not found
            $Reserve0 = $null
        } else {
            $Reserve0 = $JsonParameters.PSobject.Properties["reserve_0"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "reserve_1"))) { #optional property not found
            $Reserve1 = $null
        } else {
            $Reserve1 = $JsonParameters.PSobject.Properties["reserve_1"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "reserve_usd"))) { #optional property not found
            $ReserveUsd = $null
        } else {
            $ReserveUsd = $JsonParameters.PSobject.Properties["reserve_usd"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "liquidity_token_total_supply"))) { #optional property not found
            $LiquidityTokenTotalSupply = $null
        } else {
            $LiquidityTokenTotalSupply = $JsonParameters.PSobject.Properties["liquidity_token_total_supply"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "liquidity_token_balance"))) { #optional property not found
            $LiquidityTokenBalance = $null
        } else {
            $LiquidityTokenBalance = $JsonParameters.PSobject.Properties["liquidity_token_balance"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "vid"))) { #optional property not found
            $Vid = $null
        } else {
            $Vid = $JsonParameters.PSobject.Properties["vid"].value
        }

        $PSO = [PSCustomObject]@{
            "entry_time" = ${EntryTime}
            "recv_time" = ${RecvTime}
            "block_number" = ${BlockNumber}
            "id" = ${Id}
            "liquidity_position" = ${LiquidityPosition}
            "timestamp" = ${Timestamp}
            "block" = ${Block}
            "user" = ${User}
            "pair" = ${Pair}
            "token_0_price_usd" = ${Token0PriceUsd}
            "token_1_price_usd" = ${Token1PriceUsd}
            "reserve_0" = ${Reserve0}
            "reserve_1" = ${Reserve1}
            "reserve_usd" = ${ReserveUsd}
            "liquidity_token_total_supply" = ${LiquidityTokenTotalSupply}
            "liquidity_token_balance" = ${LiquidityTokenBalance}
            "vid" = ${Vid}
        }

        return $PSO
    }

}
