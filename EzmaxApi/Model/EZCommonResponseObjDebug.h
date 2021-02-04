#import <Foundation/Foundation.h>
#import "EZObject.h"

/**
* eZmax API Definition
* This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
*
* The version of the OpenAPI document: 1.0.28
* Contact: support-api@ezmax.ca
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "EZCommonResponseObjSQLQuery.h"
@protocol EZCommonResponseObjSQLQuery;
@class EZCommonResponseObjSQLQuery;



@protocol EZCommonResponseObjDebug
@end

@interface EZCommonResponseObjDebug : EZObject

/* The peak memory allocated during the API request execution. Formatted as a human readable string 
 */
@property(nonatomic) NSString* sMemoryUsage;
/* The total server execution time of the API request execution. Formatted as a human readable string 
 */
@property(nonatomic) NSString* sRunTime;
/* The number of SQL SELECT queries that were sent to the database server during the API request execution 
 */
@property(nonatomic) NSNumber* iSQLSelects;
/* The number of SQL INSERT/UPDATE/DELETE queries that were sent to the database server during the API request execution 
 */
@property(nonatomic) NSNumber* iSQLQueries;
/* An array of the SQL Queries that were executed during the API request execution 
 */
@property(nonatomic) NSArray<EZCommonResponseObjSQLQuery>* aObjSQLQuery;

@end