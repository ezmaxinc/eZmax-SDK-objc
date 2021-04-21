#import <Foundation/Foundation.h>
#import "EZCommonResponseError.h"
#import "EZEzsignfolderCreateObjectV1Request.h"
#import "EZEzsignfolderCreateObjectV1Response.h"
#import "EZEzsignfolderDeleteObjectV1Response.h"
#import "EZEzsignfolderGetObjectV1Response.h"
#import "EZEzsignfolderSendV1Request.h"
#import "EZEzsignfolderSendV1Response.h"
#import "EZApi.h"

/**
* eZmax API Definition
* This API expose all the functionnalities for the eZmax and eZsign applications.
*
* The version of the OpenAPI document: 1.0.41
* Contact: support-api@ezmax.ca
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface EZObjectEzsignfolderApi: NSObject <EZApi>

extern NSString* kEZObjectEzsignfolderApiErrorDomain;
extern NSInteger kEZObjectEzsignfolderApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(EZApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new Ezsignfolder
/// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
///
/// @param ezsignfolderCreateObjectV1Request 
/// 
///  code:201 message:"Successful response"
///
/// @return EZEzsignfolderCreateObjectV1Response*
-(NSURLSessionTask*) ezsignfolderCreateObjectV1WithEzsignfolderCreateObjectV1Request: (NSArray<EZEzsignfolderCreateObjectV1Request>*) ezsignfolderCreateObjectV1Request
    completionHandler: (void (^)(EZEzsignfolderCreateObjectV1Response* output, NSError* error)) handler;


/// Delete an existing Ezsignfolder
/// 
///
/// @param pkiEzsignfolderID The unique ID of the Ezsignfolder
/// 
///  code:200 message:"Successful response",
///  code:404 message:"The element you are trying to work on does not exist",
///  code:422 message:"The syntax of the request is valid but the request cannot be completed. Look for detail in body."
///
/// @return EZEzsignfolderDeleteObjectV1Response*
-(NSURLSessionTask*) ezsignfolderDeleteObjectV1WithPkiEzsignfolderID: (NSNumber*) pkiEzsignfolderID
    completionHandler: (void (^)(EZEzsignfolderDeleteObjectV1Response* output, NSError* error)) handler;


/// Retrieve an existing Ezsignfolder's children IDs
/// 
///
/// @param pkiEzsignfolderID The unique ID of the Ezsignfolder
/// 
///  code:404 message:"The element you are trying to work on does not exist"
///
/// @return void
-(NSURLSessionTask*) ezsignfolderGetChildrenV1WithPkiEzsignfolderID: (NSNumber*) pkiEzsignfolderID
    completionHandler: (void (^)(NSError* error)) handler;


/// Retrieve an existing Ezsignfolder
/// 
///
/// @param pkiEzsignfolderID The unique ID of the Ezsignfolder
/// 
///  code:200 message:"Successful response",
///  code:404 message:"The element you are trying to work on does not exist"
///
/// @return EZEzsignfolderGetObjectV1Response*
-(NSURLSessionTask*) ezsignfolderGetObjectV1WithPkiEzsignfolderID: (NSNumber*) pkiEzsignfolderID
    completionHandler: (void (^)(EZEzsignfolderGetObjectV1Response* output, NSError* error)) handler;


/// Send the Ezsignfolder to the signatories for signature
/// 
///
/// @param pkiEzsignfolderID The unique ID of the Ezsignfolder
/// @param ezsignfolderSendV1Request 
/// 
///  code:200 message:"Successful response",
///  code:404 message:"The element you are trying to work on does not exist",
///  code:422 message:"The syntax of the request is valid but the request cannot be completed. Look for detail in body."
///
/// @return EZEzsignfolderSendV1Response*
-(NSURLSessionTask*) ezsignfolderSendV1WithPkiEzsignfolderID: (NSNumber*) pkiEzsignfolderID
    ezsignfolderSendV1Request: (EZEzsignfolderSendV1Request*) ezsignfolderSendV1Request
    completionHandler: (void (^)(EZEzsignfolderSendV1Response* output, NSError* error)) handler;



@end
