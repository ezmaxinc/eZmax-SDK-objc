#import <Foundation/Foundation.h>
#import "EZCommonGetAutocompleteV1Response.h"
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



@interface EZObjectPeriodApi: NSObject <EZApi>

extern NSString* kEZObjectPeriodApiErrorDomain;
extern NSInteger kEZObjectPeriodApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(EZApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Retrieve Periods and IDs
/// Get the list of Periods to be used in a dropdown or autocomplete control.
///
/// @param sSelector The types of Periods to return
/// @param sQuery Allow to filter on the option value (optional)
/// 
///  code:200 message:"Successful response"
///
/// @return EZCommonGetAutocompleteV1Response*
-(NSURLSessionTask*) periodGetAutocompleteV1WithSSelector: (NSString*) sSelector
    sQuery: (NSString*) sQuery
    completionHandler: (void (^)(EZCommonGetAutocompleteV1Response* output, NSError* error)) handler;



@end
