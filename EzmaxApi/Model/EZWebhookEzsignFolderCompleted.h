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


#import "EZAttemptResponse.h"
#import "EZCommonWebhook.h"
#import "EZEzsignfolderResponse.h"
#import "EZWebhookEzsignFolderCompletedAllOf.h"
#import "EZWebhookResponse.h"
@protocol EZAttemptResponse;
@class EZAttemptResponse;
@protocol EZCommonWebhook;
@class EZCommonWebhook;
@protocol EZEzsignfolderResponse;
@class EZEzsignfolderResponse;
@protocol EZWebhookEzsignFolderCompletedAllOf;
@class EZWebhookEzsignFolderCompletedAllOf;
@protocol EZWebhookResponse;
@class EZWebhookResponse;



@protocol EZWebhookEzsignFolderCompleted
@end

@interface EZWebhookEzsignFolderCompleted : EZObject


@property(nonatomic) EZEzsignfolderResponse* objEzsignfolder;

@property(nonatomic) EZWebhookResponse* objWebhook;
/* An array containing details of previous attempts that were made to deliver the message. The array is empty if it's the first attempt. 
 */
@property(nonatomic) NSArray<EZAttemptResponse>* aObjAttempt;

@end
