#import <Foundation/Foundation.h>
#import "EZObject.h"

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


#import "EZMultilingualApikeyDescription.h"
@protocol EZMultilingualApikeyDescription;
@class EZMultilingualApikeyDescription;



@protocol EZApikeyRequest
@end

@interface EZApikeyRequest : EZObject

/* The unique ID of the User 
 */
@property(nonatomic) NSNumber* fkiUserID;

@property(nonatomic) EZMultilingualApikeyDescription* objApikeyDescription;

@end
