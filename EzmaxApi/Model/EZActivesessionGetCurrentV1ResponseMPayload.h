#import <Foundation/Foundation.h>
#import "EZObject.h"

/**
* eZmax API Definition
* This API expose all the functionnalities for the eZmax and eZsign applications.
*
* The version of the OpenAPI document: 1.0.40
* Contact: support-api@ezmax.ca
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/





@protocol EZActivesessionGetCurrentV1ResponseMPayload
@end

@interface EZActivesessionGetCurrentV1ResponseMPayload : EZObject

/* The customer code specific to the client in which the API request is being made 
 */
@property(nonatomic) NSString* sCustomerCode;
/* The type of session used for the API request call 
 */
@property(nonatomic) NSString* eActivesessionSessiontype;
/* The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| 
 */
@property(nonatomic) NSNumber* fkiLanguageID;
/* The name of the active Company in the current language 
 */
@property(nonatomic) NSString* sCompanyNameX;
/* The name of the active Department in the current language 
 */
@property(nonatomic) NSString* sDepartmentNameX;
/* An Array of Registered modules.  These are the modules that are Licensed to be used by the User or the API Key. 
 */
@property(nonatomic) NSArray<NSString*>* aRegisteredModules;
/* An array of permissions granted to the user or api key 
 */
@property(nonatomic) NSArray<NSNumber*>* aPermissions;
/* The unique ID of the User 
 */
@property(nonatomic) NSNumber* fkiUserID;
/* The unique ID of the Apikey 
 */
@property(nonatomic) NSNumber* fkiApikeyID;

@end
