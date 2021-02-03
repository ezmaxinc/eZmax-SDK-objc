#import <Foundation/Foundation.h>
#import "EZObject.h"

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


#import "EZEzsigndocumentRequest.h"
@protocol EZEzsigndocumentRequest;
@class EZEzsigndocumentRequest;



@protocol EZEzsigndocumentRequestCompound
@end

@interface EZEzsigndocumentRequestCompound : EZObject

/* Indicates where to look for the document binary content. 
 */
@property(nonatomic) NSString* eEzsigndocumentSource;
/* Indicates the format of the document. 
 */
@property(nonatomic) NSString* eEzsigndocumentFormat;
/* The Base64 encoded binary content of the document.  This field is Required when eEzsigndocumentSource = Base64. [optional]
 */
@property(nonatomic) NSData* sEzsigndocumentBase64;
/* A reference to a valid Ezsignfolder.  That value is returned after a successful Ezsignfolder Creation. 
 */
@property(nonatomic) NSNumber* fkiEzsignfolderID;
/* Represent a Date Time. The timezone is the one configured in the User's profile. 
 */
@property(nonatomic) NSString* dtEzsigndocumentDuedate;
/* The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| 
 */
@property(nonatomic) NSNumber* fkiLanguageID;
/* The actual file name that will be used when downloading or attaching to an email. 
 */
@property(nonatomic) NSString* sEzsigndocumentFilename;
/* The name of the document that will be presented to Ezsignfoldersignerassociations 
 */
@property(nonatomic) NSString* sEzsigndocumentName;

@end
