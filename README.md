# AdatisBI Modern Analytics workshop. 
Hello and welcome to the AdatisBI workshop. Today we will be going on an adventure through the depths of Azure Analytics. 
You will quickly notice that there is an awful lot of different options for implementing Advanced Analytics in Azure. You need to be careful as choosing the wrong one could be significantly costly. Today we will take you through a few different architectures, we will discuss when you might want to use them and when you definitely do not! Please stop us through out the day and ask questions - We are at your disposal.   
  
You might have noticed that there are three of us **waves**. This is not an accident. This is designed to ensure that while someone is talking someone else is on hand to help with particular problems or discuss an issue you're facing. We each have sharpies and access to the whiteboard. We might be able to answer your question during the session, but during the break, lets dive in to some detail.   

# Today's Abstract
## Building an Azure Business Intelligence Solution End to End – Hands on Workshop

There are so many ways to ingest, transform, aggregate and visualise our data. Architecting an end to end data warehouse solution now requires a huge breadth of knowledge on a vast amount of data services, or does it? Where do you start? 

In this hands on full day of training we’ll answer those questions. But we won’t stop there. We’ll build the start of your data pipeline, the middle and we’ll build the end.

Using the Microsoft Cloud platform, we’ll learn about the data focused subset of these Azure services and how they can be harnessed to build a working modern cloud based data warehouse solutions.

Specifically, we’ll cover;

* Ingestion of raw data into storage or using real-time data sources with event hubs.
* Preparation and data cleansing with batch service jobs and custom operations.
* Streamed data flowing through aggregated query windows for real-time analytics.
* Transformation using SQL layers and SQL like languages.
* Data modelling using relational theory and complimented by graph theory.
* Aggregation and creation of complex measures with our semantic layer.
* Breaking out the predictive models and cognitive services abilities.
* Rich visualisations and reporting anywhere.
* Orchestration of the entire platform with server less compute and management services.

Have your laptops to hand and come armed with your Azure subscription. We are going to build this!

Please check with bill payer.

Infrastructure not included.

## Agenda 

M0 - Title Intro Agenda  
M1 - Intro to Azure  
M2 - Intro to ADF  
M2 - Intro to ADL  
└── Lab 01 - L1 - Ingest CSV from Blob to ADLs with ADF  
**Break 1  
M3 - Intro to SA and Lambda  
└── Lab 02 - L2 - Streaming Data from EH to Power BI  
M4 - USQL Part 1 Intro  
└── Lab 03 - L3 - Data Transformation with USQL  
** Lunch  
M5 - USQL Part 2 Advanced  
M6 - Advanced ADF Patterns  
M7 - Power BI and SSAS  
** Break 2   
└── Lab 04 - L4 - Visuals from ADLs in Power BI  
M8 - Alternative Tools  

## Labs
This session is designed to be a hands on workshop. You will get a mixture of Theory and real world solutions.
To back this up we have a series of labs. 
- [Lab 01 - L1 - Ingest CSV from Blob to ADLs with ADF](https://github.com/mrpaulandrew/AdatisBIinAzureWorkshop/tree/master/Labs/L1%20-%20Ingest%20CSV%20from%20Blob%20to%20ADLs%20with%20ADF)
- [Lab 02 - L2 - Streaming Data from EH to Power BI](https://github.com/mrpaulandrew/AdatisBIinAzureWorkshop/tree/master/Labs/L2%20-%20Streaming%20Data%20from%20EH%20to%20Power%20BI)
- [Lab 03 - L3 - Data Transformation with USQL](https://github.com/mrpaulandrew/AdatisBIinAzureWorkshop/tree/master/Labs/L3%20-%20Data%20Transformation%20with%20USQL)
- [Lab 04 - L4 - Visuals from ADLs in Power BI](https://github.com/mrpaulandrew/AdatisBIinAzureWorkshop/tree/master/Labs/L4%20-%20Visuals%20from%20ADLs%20in%20Power%20BI)

## Structure of GitHub 
- Slides - You will find the latest version of all the slides located [here](https://github.com/mrpaulandrew/AdatisBIinAzureWorkshop/tree/master/Slides). 
- Labs - All the labs we will run through during this session. 
- Code Examples - You will see as we go through the session a lot of code in the slides. Rather than copying this from the slides, all content is here too. 
- Images - All the images used as documentation in labs.  

## Tools required for today
These labs require tools most Azure developers have on their development machines. They do need to be the latest edition for some of the new features to work. 

As a minimum delegates should have:  
- A laptop.
- An Azure subscription with available credit.
- A modern internet browser.
- A Power BI.com account.
- Power BI desktop.
 
For delegates to get the most out of the day and get involved in advanced areas, we also recommend having the following tools available:
- Visual Studio 2017 (Community Edition or higher) 
- Azure extensions installed.
- Azure Data Lake tools installed.
- PowerShell extensions installed.
- SQL Server Management Studio (v17 or higher)
- Azure Storage Explorer
- PowerShell 5.1 
- Azure modules installed.
- GitHub desktop
- VSCode 
- PowerShell extensions installed.
- Azure Data Lake tools installed.
 
## About the speakers
There are business cards for all speakers on the desk at the front. 

### Paul Andrew | Senior Consultant "Mr ADF" - Adatis [Data Platform MVP] 
Paul is a Microsoft Data Platform MVP with 10+ years’ experience working with the complete on premises SQL Server stack in a variety of roles and industries. Now as Data Analytics Consultant has turned his keyboard to big data solutions in the Microsoft cloud. Specialising in Azure Data Lake Analytics, Azure Data Factory, Azure Stream Analytics, Event Hubs and IoT. Paul is also a STEM Ambassador for the networking education in schools’ programme, PASS chapter leader for the Microsoft Data Platform Group – Birmingham, a member of the SQL Relay committee, SQL Bits, SQL Saturday, SQL Day, PASS Summit speaker and helper. Currently the Stack Overflow top user for Azure Data Factory. As well as very active member of the technical community. 

You can contact Paul on Twitter [@MrPaulAndrew](https://twitter.com/MrPaulAndrew)

### Terry McCann | Principal Consultant - Adatis [Data Platform MVP]
Terry is a principal consultant for adatis delivering some of the most advanced solutions in Azure in the UK. Microsoft Data Platform MVP. Terry holds a Data Science Master's degree, is the organizer of the Data Science Exeter user group, frequent speaker at conferences across the world. He has a particular interest in Machine Learning, DevOps, DataOps and Python. Feel free to ask me about advanced Machine learning deployments. 

Be sure to check out his upcoming talks on Machine Learning. 

You can contact Terry here: tpm@adatis.co.uk or via [@SQLShark](https://twitter.com/SQLShark) on Twitter

### Simon Whiteley | Chief Cloud Architect - Adatis [Data Platform MVP]
Simon is the technical lead for Adatis, driving their adoption of new architectures and leading Research & Development within the company. He has over a decade of analytics experience, largely within the Microsoft realm and has been pushing distributed cloud architectures for analytics for the past few years.

Microsoft Data Platform MVP, Simon runs the SQLSurrey PASS Chapter, speaks at a conferences across the world and user groups throughout the UK and Europe and will happily talk your ear off about the various new approaches we're currently working on.

You can contact Simon here: saw@adatis.co.uk or via [@MrSiWhiteley](https://twitter.com/MrSiWhiteley) on Twitter

** If you want to know more about these projects or Adatis, make sure that you visit our stand through out the conference. **

### Links mentioned during the talk. 

As we talk about interesting links and examples we will collect these here for futrue reference. 
