#import <Foundation/Foundation.h>
#import "EZObject.h"

/**
* eZmax API Definition
* This API expose all the functionnalities for the eZmax and eZsign applications.
*
* The version of the OpenAPI document: 1.0.31
* Contact: support-api@ezmax.ca
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "EZAddressRequest.h"
#import "EZContactinformationsRequest.h"
#import "EZEmailRequest.h"
#import "EZPhoneRequest.h"
#import "EZWebsiteRequest.h"
@protocol EZAddressRequest;
@class EZAddressRequest;
@protocol EZContactinformationsRequest;
@class EZContactinformationsRequest;
@protocol EZEmailRequest;
@class EZEmailRequest;
@protocol EZPhoneRequest;
@class EZPhoneRequest;
@protocol EZWebsiteRequest;
@class EZWebsiteRequest;



@protocol EZContactinformationsRequestCompound
@end

@interface EZContactinformationsRequestCompound : EZObject


@property(nonatomic) NSArray<EZAddressRequest>* aObjAddress;

@property(nonatomic) NSArray<EZPhoneRequest>* aObjPhone;

@property(nonatomic) NSArray<EZEmailRequest>* aObjEmail;

@property(nonatomic) NSArray<EZWebsiteRequest>* aObjWebsite;
/* The index in the a_objAddress array (zero based index) representing the Address object that should become the default one.  You can leave the value to 0 if the array is empty. 
 */
@property(nonatomic) NSNumber* iAddressDefault;
/* The index in the a_objPhone array (zero based index) representing the Phone object that should become the default one.  You can leave the value to 0 if the array is empty. 
 */
@property(nonatomic) NSNumber* iPhoneDefault;
/* The index in the a_objEmail array (zero based index) representing the Email object that should become the default one.  You can leave the value to 0 if the array is empty. 
 */
@property(nonatomic) NSNumber* iEmailDefault;
/* The index in the a_objWebsite array (zero based index) representing the Website object that should become the default one.  You can leave the value to 0 if the array is empty. 
 */
@property(nonatomic) NSNumber* iWebsiteDefault;

@end
