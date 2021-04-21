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





@protocol EZWebhookResponse
@end

@interface EZWebhookResponse : EZObject

/* The Webhook ID. This value is visible in the admin interface. 
 */
@property(nonatomic) NSNumber* pkiWebhookID;
/* The Module generating the Event. 
 */
@property(nonatomic) NSString* eWebhookModule;
/* This Ezsign Event. This property will be set only if the Module is \"Ezsign\". [optional]
 */
@property(nonatomic) NSString* eWebhookEzsignevent;
/* The customer code assigned to your account 
 */
@property(nonatomic) NSString* pksCustomerCode;
/* The url being called 
 */
@property(nonatomic) NSString* sWebhookUrl;
/* The email that will receive the webhook in case all attempts fail. 
 */
@property(nonatomic) NSString* sWebhookEmailfailed;
/* This Management Event. This property will be set only if the Module is \"Management\". [optional]
 */
@property(nonatomic) NSString* eWebhookManagementevent;

@end
