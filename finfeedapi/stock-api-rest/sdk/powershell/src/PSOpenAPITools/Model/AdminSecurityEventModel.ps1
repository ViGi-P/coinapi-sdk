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

Represents the response DTO for security event information

.PARAMETER Symbol
The stock symbol
.PARAMETER TimestampNanos
Original timestamp in nanoseconds since epoch
.PARAMETER Timestamp
Time when the security event was recorded as DateTime
.PARAMETER SecurityEvent
Security event as byte value
.PARAMETER SecurityEventCode
Security event as character string ('O' or 'C')
.PARAMETER SecurityEventText
Human-readable description of the security event
.PARAMETER IsOpeningProcessComplete
Indicates if the security event is 'Opening Process Complete' ('O'/0x4f).
.PARAMETER IsClosingProcessComplete
Indicates if the security event is 'Closing Process Complete' ('C'/0x43).
.OUTPUTS

AdminSecurityEventModel<PSCustomObject>
#>

function Initialize-AdminSecurityEventModel {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${Symbol},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int64]]
        ${TimestampNanos},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[System.DateTime]]
        ${Timestamp},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${SecurityEvent},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${SecurityEventCode},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${SecurityEventText},
        [Parameter(Position = 6, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Boolean]]
        ${IsOpeningProcessComplete},
        [Parameter(Position = 7, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Boolean]]
        ${IsClosingProcessComplete}
    )

    Process {
        'Creating PSCustomObject: PSOpenAPITools => AdminSecurityEventModel' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug


        $PSO = [PSCustomObject]@{
            "symbol" = ${Symbol}
            "timestamp_nanos" = ${TimestampNanos}
            "timestamp" = ${Timestamp}
            "security_event" = ${SecurityEvent}
            "security_event_code" = ${SecurityEventCode}
            "security_event_text" = ${SecurityEventText}
            "is_opening_process_complete" = ${IsOpeningProcessComplete}
            "is_closing_process_complete" = ${IsClosingProcessComplete}
        }


        return $PSO
    }
}

<#
.SYNOPSIS

Convert from JSON to AdminSecurityEventModel<PSCustomObject>

.DESCRIPTION

Convert from JSON to AdminSecurityEventModel<PSCustomObject>

.PARAMETER Json

Json object

.OUTPUTS

AdminSecurityEventModel<PSCustomObject>
#>
function ConvertFrom-JsonToAdminSecurityEventModel {
    Param(
        [AllowEmptyString()]
        [string]$Json
    )

    Process {
        'Converting JSON to PSCustomObject: PSOpenAPITools => AdminSecurityEventModel' | Write-Debug
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        $JsonParameters = ConvertFrom-Json -InputObject $Json

        # check if Json contains properties not defined in AdminSecurityEventModel
        $AllProperties = ("symbol", "timestamp_nanos", "timestamp", "security_event", "security_event_code", "security_event_text", "is_opening_process_complete", "is_closing_process_complete")
        foreach ($name in $JsonParameters.PsObject.Properties.Name) {
            if (!($AllProperties.Contains($name))) {
                throw "Error! JSON key '$name' not found in the properties: $($AllProperties)"
            }
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "symbol"))) { #optional property not found
            $Symbol = $null
        } else {
            $Symbol = $JsonParameters.PSobject.Properties["symbol"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "timestamp_nanos"))) { #optional property not found
            $TimestampNanos = $null
        } else {
            $TimestampNanos = $JsonParameters.PSobject.Properties["timestamp_nanos"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "timestamp"))) { #optional property not found
            $Timestamp = $null
        } else {
            $Timestamp = $JsonParameters.PSobject.Properties["timestamp"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "security_event"))) { #optional property not found
            $SecurityEvent = $null
        } else {
            $SecurityEvent = $JsonParameters.PSobject.Properties["security_event"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "security_event_code"))) { #optional property not found
            $SecurityEventCode = $null
        } else {
            $SecurityEventCode = $JsonParameters.PSobject.Properties["security_event_code"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "security_event_text"))) { #optional property not found
            $SecurityEventText = $null
        } else {
            $SecurityEventText = $JsonParameters.PSobject.Properties["security_event_text"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "is_opening_process_complete"))) { #optional property not found
            $IsOpeningProcessComplete = $null
        } else {
            $IsOpeningProcessComplete = $JsonParameters.PSobject.Properties["is_opening_process_complete"].value
        }

        if (!([bool]($JsonParameters.PSobject.Properties.name -match "is_closing_process_complete"))) { #optional property not found
            $IsClosingProcessComplete = $null
        } else {
            $IsClosingProcessComplete = $JsonParameters.PSobject.Properties["is_closing_process_complete"].value
        }

        $PSO = [PSCustomObject]@{
            "symbol" = ${Symbol}
            "timestamp_nanos" = ${TimestampNanos}
            "timestamp" = ${Timestamp}
            "security_event" = ${SecurityEvent}
            "security_event_code" = ${SecurityEventCode}
            "security_event_text" = ${SecurityEventText}
            "is_opening_process_complete" = ${IsOpeningProcessComplete}
            "is_closing_process_complete" = ${IsClosingProcessComplete}
        }

        return $PSO
    }

}

