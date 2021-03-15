#import <Foundation/Foundation.h>
#import "EZObject.h"

/**
* eZmax API Definition
* This API expose all the functionnalities for the eZmax and eZsign applications.
*
* The version of the OpenAPI document: 1.0.35
* Contact: support-api@ezmax.ca
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "EZFieldEUserTypeSSPR.h"
@protocol EZFieldEUserTypeSSPR;
@class EZFieldEUserTypeSSPR;



@protocol EZSsprUnlockAccountV1Request
@end

@interface EZSsprUnlockAccountV1Request : EZObject

/* The customer code assigned to your account 
 */
@property(nonatomic) NSString* pksCustomerCode;
/* The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| 
 */
@property(nonatomic) NSNumber* fkiLanguageID;

@property(nonatomic) EZFieldEUserTypeSSPR* eUserTypeSSPR;
/* The email address. [optional]
 */
@property(nonatomic) NSString* sEmailAddress;
/* The Login name of the User. [optional]
 */
@property(nonatomic) NSString* sUserLoginname;
/* Hex Encoded Secret SSPR token 
 */
@property(nonatomic) NSString* binUserSSPRtoken;

@end
