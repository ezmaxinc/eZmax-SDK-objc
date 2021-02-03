#import <Foundation/Foundation.h>
#import "EZUserCreateEzsignuserV1Request.h"
#import "EZUserCreateEzsignuserV1Response.h"
#import "EZApi.h"

/**
* eZmax API Definition
* This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
*
* The version of the OpenAPI document: 1.0.27
* Contact: support-api@ezmax.ca
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface EZModuleUserApi: NSObject <EZApi>

extern NSString* kEZModuleUserApiErrorDomain;
extern NSInteger kEZModuleUserApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(EZApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new User of type Ezsignuser
/// The endpoint allows to initiate the creation or a user of type Ezsignuser.  The user will be created only once the email verification process will be completed
///
/// @param userCreateEzsignuserV1Request 
/// 
///  code:200 message:"Successful response"
///
/// @return EZUserCreateEzsignuserV1Response*
-(NSURLSessionTask*) userCreateEzsignuserV1WithUserCreateEzsignuserV1Request: (NSArray<EZUserCreateEzsignuserV1Request>*) userCreateEzsignuserV1Request
    completionHandler: (void (^)(EZUserCreateEzsignuserV1Response* output, NSError* error)) handler;



@end
