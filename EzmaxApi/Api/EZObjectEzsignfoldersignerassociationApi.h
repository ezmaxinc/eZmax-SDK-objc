#import <Foundation/Foundation.h>
#import "EZCommonResponseError.h"
#import "EZEzsignfoldersignerassociationCreateObjectV1Request.h"
#import "EZEzsignfoldersignerassociationCreateObjectV1Response.h"
#import "EZEzsignfoldersignerassociationDeleteObjectV1Response.h"
#import "EZEzsignfoldersignerassociationGetInPersonLoginUrlV1Response.h"
#import "EZEzsignfoldersignerassociationGetObjectV1Response.h"
#import "EZApi.h"

/**
* eZmax API Definition
* This API expose all the functionnalities for the eZmax and eZsign applications.
*
* The version of the OpenAPI document: 1.0.46
* Contact: support-api@ezmax.ca
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface EZObjectEzsignfoldersignerassociationApi: NSObject <EZApi>

extern NSString* kEZObjectEzsignfoldersignerassociationApiErrorDomain;
extern NSInteger kEZObjectEzsignfoldersignerassociationApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(EZApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new Ezsignfoldersignerassociation
/// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
///
/// @param ezsignfoldersignerassociationCreateObjectV1Request 
/// 
///  code:201 message:"Successful response"
///
/// @return EZEzsignfoldersignerassociationCreateObjectV1Response*
-(NSURLSessionTask*) ezsignfoldersignerassociationCreateObjectV1WithEzsignfoldersignerassociationCreateObjectV1Request: (NSArray<EZEzsignfoldersignerassociationCreateObjectV1Request>*) ezsignfoldersignerassociationCreateObjectV1Request
    completionHandler: (void (^)(EZEzsignfoldersignerassociationCreateObjectV1Response* output, NSError* error)) handler;


/// Delete an existing Ezsignfoldersignerassociation
/// 
///
/// @param pkiEzsignfoldersignerassociationID The unique ID of the Ezsignfoldersignerassociation
/// 
///  code:200 message:"Successful response",
///  code:404 message:"The element you are trying to work on does not exist",
///  code:422 message:"The syntax of the request is valid but the request cannot be completed. Look for detail in body."
///
/// @return EZEzsignfoldersignerassociationDeleteObjectV1Response*
-(NSURLSessionTask*) ezsignfoldersignerassociationDeleteObjectV1WithPkiEzsignfoldersignerassociationID: (NSNumber*) pkiEzsignfoldersignerassociationID
    completionHandler: (void (^)(EZEzsignfoldersignerassociationDeleteObjectV1Response* output, NSError* error)) handler;


/// Retrieve an existing Ezsignfoldersignerassociation's children IDs
/// 
///
/// @param pkiEzsignfoldersignerassociationID The unique ID of the Ezsignfoldersignerassociation
/// 
///  code:404 message:"The element you are trying to work on does not exist"
///
/// @return void
-(NSURLSessionTask*) ezsignfoldersignerassociationGetChildrenV1WithPkiEzsignfoldersignerassociationID: (NSNumber*) pkiEzsignfoldersignerassociationID
    completionHandler: (void (^)(NSError* error)) handler;


/// Retrieve a Login Url to allow In-Person signing
/// This endpoint returns a Login Url that can be used in a browser or embedded in an I-Frame to allow in person signing.  The signer Login type must be configured as In-Person.
///
/// @param pkiEzsignfoldersignerassociationID The unique ID of the Ezsignfoldersignerassociation
/// 
///  code:200 message:"Successful response",
///  code:404 message:"The element you are trying to work on does not exist",
///  code:422 message:"The syntax of the request is valid but the request cannot be completed. Look for detail in body."
///
/// @return EZEzsignfoldersignerassociationGetInPersonLoginUrlV1Response*
-(NSURLSessionTask*) ezsignfoldersignerassociationGetInPersonLoginUrlV1WithPkiEzsignfoldersignerassociationID: (NSNumber*) pkiEzsignfoldersignerassociationID
    completionHandler: (void (^)(EZEzsignfoldersignerassociationGetInPersonLoginUrlV1Response* output, NSError* error)) handler;


/// Retrieve an existing Ezsignfoldersignerassociation
/// 
///
/// @param pkiEzsignfoldersignerassociationID The unique ID of the Ezsignfoldersignerassociation
/// 
///  code:200 message:"Successful response",
///  code:404 message:"The element you are trying to work on does not exist"
///
/// @return EZEzsignfoldersignerassociationGetObjectV1Response*
-(NSURLSessionTask*) ezsignfoldersignerassociationGetObjectV1WithPkiEzsignfoldersignerassociationID: (NSNumber*) pkiEzsignfoldersignerassociationID
    completionHandler: (void (^)(EZEzsignfoldersignerassociationGetObjectV1Response* output, NSError* error)) handler;



@end
