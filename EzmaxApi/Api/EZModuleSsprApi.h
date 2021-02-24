#import <Foundation/Foundation.h>
#import "EZCommonResponseError.h"
#import "EZApi.h"

/**
* eZmax API Definition
* This API expose all the functionnalities for the eZmax and eZsign applications.
*
* The version of the OpenAPI document: 1.0.31
* Contact: support-api@ezmax.ca
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface EZModuleSsprApi: NSObject <EZApi>

extern NSString* kEZModuleSsprApiErrorDomain;
extern NSInteger kEZModuleSsprApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(EZApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Remind of forgotten username(s)
/// This endpoint returns an email with the username(s) matching the email address provided in case of forgotten username
///
/// 
///  code:204 message:"The request was accepted.  Do not misinterpret as \"the email address has an account attached to it\". It only means an email will be sent if (and only if) an account exists for that email address.",
///  code:403 message:"You are not allowed to call this function",
///  code:404 message:"The element you are trying to work on does not exist",
///  code:422 message:"The syntax of the request is valid but the request cannot be completed. Look for detail in body."
///
/// @return void
-(NSURLSessionTask*) ssprRemindUsernamesV1WithCompletionHandler: 
    (void (^)(NSError* error)) handler;



@end