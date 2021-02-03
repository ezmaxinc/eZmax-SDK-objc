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


#import "EZCommonAudit.h"
#import "EZEzsignfolderResponse.h"
#import "EZFieldEEzsignfolderSendreminderfrequency.h"
#import "EZFieldEEzsignfolderStep.h"
@protocol EZCommonAudit;
@class EZCommonAudit;
@protocol EZEzsignfolderResponse;
@class EZEzsignfolderResponse;
@protocol EZFieldEEzsignfolderSendreminderfrequency;
@class EZFieldEEzsignfolderSendreminderfrequency;
@protocol EZFieldEEzsignfolderStep;
@class EZFieldEEzsignfolderStep;



@protocol EZEzsignfolderResponseCompound
@end

@interface EZEzsignfolderResponseCompound : EZObject

/* The unique ID of the Ezsignfoldertype.    This value can be queried by the API and is also visible in the admin interface.    There are two types of Ezsignfoldertype. **User** and **Shared**. **User** can only be seen by the user who created the folder or its assistants. Access to **Shared** folders are configurable for access and email delivery. You should typically choose a **Shared** type here. 
 */
@property(nonatomic) NSNumber* fkiEzsignfoldertypeID;
/* The unique ID of the Ezsigntsarequirement.  Determine if a Time Stamping Authority should add a timestamp on each of the signature. Valid values:  |Value|Description| |-|-| |1|No. TSA Timestamping will requested. This will make all signatures a lot faster since no round-trip to the TSA server will be required. Timestamping will be made using eZsign server's time.| |2|Best effort. Timestamping from a Time Stamping Authority will be requested but is not mandatory. In the very improbable case it cannot be completed, the timestamping will be made using eZsign server's time. **Additional fee applies**| |3|Mandatory. Timestamping from a Time Stamping Authority will be requested and is mandatory. In the very improbable case it cannot be completed, the signature will fail and the user will be asked to retry. **Additional fee applies**| 
 */
@property(nonatomic) NSNumber* fkiEzsigntsarequirementID;
/* The description of the Ezsign Folder 
 */
@property(nonatomic) NSString* sEzsignfolderDescription;
/* Somes extra notes about the eZsign Folder 
 */
@property(nonatomic) NSString* tEzsignfolderNote;

@property(nonatomic) EZFieldEEzsignfolderSendreminderfrequency* eEzsignfolderSendreminderfrequency;
/* The unique ID of the Ezsignfolder 
 */
@property(nonatomic) NSNumber* pkiEzsignfolderID;
/* The date and time at which the Ezsign folder was sent the last time. 
 */
@property(nonatomic) NSString* dtEzsignfolderSentdate;

@property(nonatomic) EZFieldEEzsignfolderStep* eEzsignfolderStep;
/* The date and time at which the folder was closed. Either by applying the last signature or by completing it prematurely. 
 */
@property(nonatomic) NSString* dtEzsignfolderClose;

@property(nonatomic) EZCommonAudit* objAudit;

@end
