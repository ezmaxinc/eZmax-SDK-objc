#import <Foundation/Foundation.h>
#import "EZActivesessionGetCurrentV1Response.h"
#import "EZApi.h"

/**
* eZmax API Definition
* This API expose all the functionnalities for the eZmax and eZsign applications.
*
* The version of the OpenAPI document: 1.0.37
* Contact: support-api@ezmax.ca
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface EZObjectActivesessionApi: NSObject <EZApi>

extern NSString* kEZObjectActivesessionApiErrorDomain;
extern NSInteger kEZObjectActivesessionApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(EZApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get Current Activesession
/// Retrieve the details about the current activesession
///
/// 
///  code:200 message:"OK"
///
/// @return EZActivesessionGetCurrentV1Response*
-(NSURLSessionTask*) activesessionGetCurrentV1WithCompletionHandler: 
    (void (^)(EZActivesessionGetCurrentV1Response* output, NSError* error)) handler;



@end
