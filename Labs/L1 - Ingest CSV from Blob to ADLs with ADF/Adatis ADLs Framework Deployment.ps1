#UPDATE THESE LOCAL VARIABLES:
$SubscriptionId = "xxx"
$dataLakeStoreName = "xxx"
$AzureUser = "xxx@mrpaulandrew.com"
$AzurePass = "xxx!"


#NO NEED TO CHANGE ANYTHING BELOW
$PowerShellConfigFilePath = $PSScriptRoot + '\Adatis ADLs Framework Config.json'

$SecurePassword = ConvertTo-SecureString $AzurePass -AsPlainText -Force
$PSCredential = New-Object System.Management.Automation.PSCredential ($AzureUser, $SecurePassword)

Login-AzureRmAccount -Credential $PSCredential | Out-Null

$folders = Get-Content $PowerShellConfigFilePath -Raw | ConvertFrom-Json

# Select a subscription
Set-AzureRmContext -SubscriptionId $SubscriptionId | Out-Null

# Register for Azure Data Lake Store
Register-AzureRmResourceProvider -ProviderNamespace "Microsoft.DataLakeStore"

Write-Host "---------------------------------------------------------------------"
Write-Host "Creating Adatis Data Lake Store Framework"
Write-Host "---------------------------------------------------------------------"

foreach ($folder in $folders)
{
    $path = $myrootdir + $folder.path

    $dl = Test-AzureRmDataLakeStoreItem -AccountName $dataLakeStoreName -Path $path    
    if (!$dl) 
    {
        New-AzureRmDataLakeStoreItem -Folder -AccountName $dataLakeStoreName -Path $path
        Write-Host "New Path Created" -ForegroundColor Cyan
    }
    else
    {
        Write-Host $path " already exists in account "  $dataLakeStoreName -ForegroundColor Red
    }  
    
}

Write-Host "---------------------------------------------------------------------"
Write-Host "Adatis Data Lake Store Framework Creation Complete"
Write-Host "---------------------------------------------------------------------"

<#
Write-Host "Complete list of all root folders in account " $dataLakeStoreName
Get-AzureRmDataLakeStoreChildItem -AccountName $dataLakeStoreName -Path "/" | Select-Object Name, Type | Format-Table -AutoSize
#>