#import <Foundation/Foundation.h>
#import "EZObject.h"

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





@protocol EZCommonGetAutocompleteV1ResponseMPayload
@end

@interface EZCommonGetAutocompleteV1ResponseMPayload : EZObject

/* The Category (ie group) for the dropdown or an empty string if not categorized 
 */
@property(nonatomic) NSString* group;
/* The Unique ID of the element 
 */
@property(nonatomic) NSString* _id;
/* The Description of the element 
 */
@property(nonatomic) NSString* option;

@end
