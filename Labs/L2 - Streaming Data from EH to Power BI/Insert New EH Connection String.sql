--USE [AdventureWorksOLTP]

INSERT INTO [dbo].[EHConnections]
	(
	[HubOwner],
	[ConnectionString],
	[HubName]
	)
VALUES
	(
	-- HubOwner:
	'John Smith',
	  
	-- ConnectionString - nvarchar(max)
    'Endpoint=sb://sqlsateventhub01.servicebus.windows.net/;SharedAccessKeyName=RootManageSharedAccessKey;SharedAccessKey=9ZpceGAUEI+DX5z5qjhRIJzhDS6ZuZPDeI6bplokyGM=', 
    
	-- HubName - varchar(128)
	'dataReceiver'   
    )