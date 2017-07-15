#include "json_examples.h"


const std::string json_example_astros = R"(
    {
      \"number\": 3,
      \"message\": \"success\",
      \"people\": [
        {
            \"name\": \"Peggy Whitson\",
            \"craft\": \"ISS\"
        },
        {
            \"name\": \"Fyodor Yurchikhin\",
            \"craft\": \"ISS\"
        },
        {
            \"name\": \"Jack Fischer\",
            \"craft\": \"ISS\"
        }
      ]
    }
)";
const std::string json_example_basic_int = "{\"value\": 0}";
const std::string json_example_basic_double = "{\"value\": 0.0}";
const std::string json_example_basic_string = "{\"value\": \"hohoho\"}";
const std::string json_example_basic_array = "{\"value\": [1, 2, 3, 4, 5]}";
const std::string json_example_basic_object = "{\"value\": {\"value\": 0}}";
const std::string json_example_big_array = R"(
    {
        \"value\": [
            0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
            19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
            36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
            53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64
        ]
    )";
const std::string json_example_big_object = R"(
    {
        \"value\": {
            \"value_1\": 1,
            \"value_2\": 1,
            \"value_3\": 1,
            \"value_4\": 1,
            \"value_5\": 1,
            \"value_6\": 1,
            \"value_7\": 1,
            \"value_8\": 1,
            \"value_9\": 1,
            \"value_10\": 1,
            \"value_11\": 1,
            \"value_12\": 1,
            \"value_13\": 1,
            \"value_14\": 1,
            \"value_15\": 1,
            \"value_16\": 1,
            \"value_17\": 1,
            \"value_18\": 1,
            \"value_19\": 1,
            \"value_20\": 1,
            \"value_21\": 1,
            \"value_22\": 1,
            \"value_23\": 1,
            \"value_24\": 1,
            \"value_25\": 1,
            \"value_26\": 1,
            \"value_27\": 1,
            \"value_28\": 1,
            \"value_29\": 1,
            \"value_30\": 1,
            \"value_31\": 1,
            \"value_32\": 1,
            \"value_33\": 1,
        }
    )";
const std::string json_example_china_idp = R"(
    [
        {
            \"page\": 1,
            \"pages\" :1,
            \"per_page\": \"5000\",
            \"total\":57
        },
        [
            {
                \"indicator\": { \"id\": \"NY.GDP.MKTP.CD\", \"value\": \"GDP (current US$)\" },
                \"country\": { \"id\": \"CN\", \"value\": \"China\" },
                \"value\": \"11199145157649.2\",
                \"decimal\": \"0\",
                \"date\": \"2016\"
            },
            {
                \"indicator\": { \"id\": \"NY.GDP.MKTP.CD\", \"value\": \"GDP (current US$)\" },
                \"country\": { \"id\": \"CN\", \"value\": \"China\" },
                \"value\": \"11064664793255.7\",
                \"decimal\": \"0\",
                \"date\":\"2015\"
            },
            {
                \"indicator\": { \"id\": \"NY.GDP.MKTP.CD\", \"value\": \"GDP (current US$)\" },
                \"country\": { \"id\": \"CN\", \"value\": \"China\" },
                \"value\": \"10482371325324.7\",
                \"decimal\": \"0\",
                \"date\": \"2014\"
            },
            {
                \"indicator\": { \"id\": \"NY.GDP.MKTP.CD\", \"value\": \"GDP (current US$)\" },
                \"country\": {\"id\": \"CN\", \"value\": \"China\" },
                \"value\": \"9607224248684.59\",
                \"decimal\": \"0\",
                \"date\": \"2013\"
            },
            {
                \"indicator\": { \"id\": \"NY.GDP.MKTP.CD\", \"value\": \"GDP (current US$)\" },
                \"country\": { \"id\": \"CN\", \"value\": \"China\" },
                \"value\": \"8560546868811.69\",
                \"decimal\": \"0\",
                \"date\": \"2012\"
            },
            {
                \"indicator\": { \"id\": \"NY.GDP.MKTP.CD\", \"value\": \"GDP (current US$)\" },
                \"country\": { \"id\": \"CN\", \"value\": \"China\" },
                \"value\": \"7572554360442.62\",
                \"decimal\": \"0\",
                \"date\": \"2011\"
            }
        ]
    ]
)";
const std::string json_example_colors = R"(
    {
        \"red\": \"#f00\",
        \"green\": \"#0f0\",
        \"blue\": \"#00f\",
        \"cyan\": \"#0ff\",
        \"magenta\": \"#f0f\",
        \"black\": \"#000\"
        \"yellow\": \"#ff0\",
    }
)";
const std::string json_example_geopoint = R"(
    {
        \"lon\": 37.617,
        \"lat\": 55.75
    )";
    const std::string json_example_gmaps = R"(
        {
            \"markers\": [
        		{
        			\"point\": { \"lat\": 40.266044, \"lon\": -74.718479 },
        			\"homeTeam\": \"Lawrence Library\",
        			\"awayTeam\": \"LUGip\",
        			\"markerImage\": \"images/red.png\",
        			\"information\": \"Linux users group meets second Wednesday of each month.\",
        			\"fixture\": \"Wednesday 7pm\",
        			\"capacity\": \"\",
        			\"previousScore\": \"\"
        		},
        		{
        			\"point\": { \"lat\": 40.211600, \"lon\": -74.695702 },
        			\"homeTeam\": \"Hamilton Library\",
        			\"awayTeam\": \"LUGip HW SIG\",
        			\"markerImage\": \"images/white.png\",
        			\"information\": \"Linux users can meet the first Tuesday of the month to work out harward and configuration issues.\",
        			\"fixture\": \"Tuesday 7pm\",
        			\"capacity\": \"\",
        			\"tv\": \"\"
        		},
        		{
        			\"point\": { \"lat\": 40.294535, \"lon\": -74.682012 },
        			\"homeTeam\": \"Applebees\",
        			\"awayTeam\": \"After LUPip Mtg Spot\",
        			\"markerImage\": \"images/newcastle.png\",
        			\"information\": \"Some of us go there after the main LUGip meeting, drink brews, and talk.\",
        			\"fixture\": \"Wednesday whenever\",
        			\"capacity\": \"2 to 4 pints\",
        			\"tv\":\"\"
        		},
        ] }
    )";
const std::string json_example_gzip = R"(
    {
      \"gzipped\": true,
      \"headers\": {
        \"Accept\": \"text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\",
        \"Accept-Encoding\": \"gzip, deflate\",
        \"Accept-Language\": \"en-US,en;q=0.5\",
        \"Connection\": \"close\",
        \"Host\": \"httpbin.org\",
        \"Upgrade-Insecure-Requests\": \"1\",
        \"User-Agent\": \"Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:54.0) Gecko/20100101 Firefox/54.0\"
      },
      \"method\": \"GET\",
      \"origin\": \"37.195.125.56\"
    })";
const std::string json_example_employee = R"(
    {
        \"name\": \"John\",
        \"surname\": \"Smith\",
        \"age\": 42,
        \"salary\": 0
    })";
const std::string json_example_menu = R"(
    {
        \"menu\":
        {
            \"id\": \"file\",
            \"value\": \"File\",
            \"popup\":
            {
                \"menuitem\":
                [
                    {\"value\": \"New\", \"onclick\": \"CreateNewDoc()\"},
                    {\"value\": \"Open\", \"onclick\": \"OpenDoc()\"},
                    {\"value\": \"Close\", \"onclick\": \"CloseDoc()\"}
                ]
            }
        }
    }
)";
const std::string json_example_webapp = R"(
    {\"web-app\": {
      \"servlet\": [
        {
          \"servlet-name\": \"cofaxCDS\",
          \"servlet-class\": \"org.cofax.cds.CDSServlet\",
          \"init-param\": {
            \"configGlossary:installationAt\": \"Philadelphia, PA\",
            \"configGlossary:adminEmail\": \"ksm@pobox.com\",
            \"configGlossary:poweredBy\": \"Cofax\",
            \"configGlossary:poweredByIcon\": \"/images/cofax.gif\",
            \"configGlossary:staticPath\": \"/content/static\",
            \"templateProcessorClass\": \"org.cofax.WysiwygTemplate\",
            \"templateLoaderClass\": \"org.cofax.FilesTemplateLoader\",
            \"templatePath\": \"templates\",
            \"templateOverridePath\": \"\",
            \"defaultListTemplate\": \"listTemplate.htm\",
            \"defaultFileTemplate\": \"articleTemplate.htm\",
            \"useJSP\": false,
            \"jspListTemplate\": \"listTemplate.jsp\",
            \"jspFileTemplate\": \"articleTemplate.jsp\",
            \"cachePackageTagsTrack\": 200,
            \"cachePackageTagsStore\": 200,
            \"cachePackageTagsRefresh\": 60,
            \"cacheTemplatesTrack\": 100,
            \"cacheTemplatesStore\": 50,
            \"cacheTemplatesRefresh\": 15,
            \"cachePagesTrack\": 200,
            \"cachePagesStore\": 100,
            \"cachePagesRefresh\": 10,
            \"cachePagesDirtyRead\": 10,
            \"searchEngineListTemplate\": \"forSearchEnginesList.htm\",
            \"searchEngineFileTemplate\": \"forSearchEngines.htm\",
            \"searchEngineRobotsDb\": \"WEB-INF/robots.db\",
            \"useDataStore\": true,
            \"dataStoreClass\": \"org.cofax.SqlDataStore\",
            \"redirectionClass\": \"org.cofax.SqlRedirection\",
            \"dataStoreName\": \"cofax\",
            \"dataStoreDriver\": \"com.microsoft.jdbc.sqlserver.SQLServerDriver\",
            \"dataStoreUrl\": \"jdbc:microsoft:sqlserver://LOCALHOST:1433;DatabaseName=goon\",
            \"dataStoreUser\": \"sa\",
            \"dataStorePassword\": \"dataStoreTestQuery\",
            \"dataStoreTestQuery\": \"SET NOCOUNT ON;select test='test';\",
            \"dataStoreLogFile\": \"/usr/local/tomcat/logs/datastore.log\",
            \"dataStoreInitConns\": 10,
            \"dataStoreMaxConns\": 100,
            \"dataStoreConnUsageLimit\": 100,
            \"dataStoreLogLevel\": \"debug\",
            \"maxUrlLength\": 500}},
        {
          \"servlet-name\": \"cofaxEmail\",
          \"servlet-class\": \"org.cofax.cds.EmailServlet\",
          \"init-param\": {
          \"mailHost\": \"mail1\",
          \"mailHostOverride\": \"mail2\"}},
        {
          \"servlet-name\": \"cofaxAdmin\",
          \"servlet-class\": \"org.cofax.cds.AdminServlet\"},

        {
          \"servlet-name\": \"fileServlet\",
          \"servlet-class\": \"org.cofax.cds.FileServlet\"},
        {
          \"servlet-name\": \"cofaxTools\",
          \"servlet-class\": \"org.cofax.cms.CofaxToolsServlet\",
          \"init-param\": {
            \"templatePath\": \"toolstemplates/\",
            \"log\": 1,
            \"logLocation\": \"/usr/local/tomcat/logs/CofaxTools.log\",
            \"logMaxSize\": \"\",
            \"dataLog\": 1,
            \"dataLogLocation\": \"/usr/local/tomcat/logs/dataLog.log\",
            \"dataLogMaxSize\": \"\",
            \"removePageCache\": \"/content/admin/remove?cache=pages&id=\",
            \"removeTemplateCache\": \"/content/admin/remove?cache=templates&id=\",
            \"fileTransferFolder\": \"/usr/local/tomcat/webapps/content/fileTransferFolder\",
            \"lookInContext\": 1,
            \"adminGroupID\": 4,
            \"betaServer\": true}}],
      \"servlet-mapping\": {
        \"cofaxCDS\": "/",
        \"cofaxEmail\": \"/cofaxutil/aemail/*\",
        \"cofaxAdmin\": \"/admin/*\",
        \"fileServlet\": \"/static/*\",
        \"cofaxTools\": \"/tools/*\"},
      \"taglib\": {
        \"taglib-uri\": \"cofax.tld\",
        \"taglib-location\": \"/WEB-INF/tlds/cofax.tld\"}}}
)";
const std::string json_example_youtube = R"(
    {\"apiVersion\": \"2.0\",
     \"data\": {
        \"updated\": \"2010-01-07T19:58:42.949Z\",
        \"totalItems\": 800,
        \"startIndex\": 1,
        \"itemsPerPage\":1,
        \"items\": [
            {\"id\": \"hYB0mn5zh2c\",
             \"uploaded\": \"2007-06-05T22:07:03.000Z\",
             \"updated\": \"2010-01-07T13:26:50.000Z\",
             \"uploader\": \"GoogleDeveloperDay\",
             \"category\": \"News\",
             \"title\": \"Google Developers Day US - Maps API Introduction\",
             \"description\": \"Google Maps API Introduction ...\",
             \"tags\":[ \"GDD07\",\"GDD07US\",\"Maps\" ],
             \"thumbnail\": {
                \"default\": \"http://i.ytimg.com/vi/hYB0mn5zh2c/default.jpg\",
                \"hqDefault\": \"http://i.ytimg.com/vi/hYB0mn5zh2c/hqdefault.jpg\"
             },
             \"player\": {
                \"default\": \"http://www.youtube.com/watch?vu003dhYB0mn5zh2c\"
             },
             \"content\": {
                \"1\": \"rtsp://v5.cache3.c.youtube.com/CiILENy.../0/0/0/video.3gp\",
                \"5\": \"http://www.youtube.com/v/hYB0mn5zh2c?f...\",
                \"6\": \"rtsp://v1.cache1.c.youtube.com/CiILENy.../0/0/0/video.3gp\"
             },
             \"duration\": 2840,
             \"aspectRatio\": \"widescreen\",
             \"rating\": 4.63,
             \"ratingCount\": 68,
             \"viewCount\": 220101,
             \"favoriteCount\": 201,
             \"commentCount\": 22,
             \"status\":{
                \"value\": \"restricted\",
                \"reason\": \"limitedSyndication\"
             },
             \"accessControl\": {
                \"syndicate\": \"allowed\",
                \"commentVote\": \"allowed\",
                \"rate\": \"allowed\",
                \"list\": \"allowed\",
                \"comment\": \"allowed\",
                \"embed\": \"allowed\",
                \"videoRespond\": \"moderated\"
             }
          }
        ]
      }
    })";
