#import "EZEzsignfolderGetObjectV1ResponseMPayload.h"

@implementation EZEzsignfolderGetObjectV1ResponseMPayload

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"fkiEzsignfoldertypeID": @"fkiEzsignfoldertypeID", @"fkiEzsigntsarequirementID": @"fkiEzsigntsarequirementID", @"sEzsignfolderDescription": @"sEzsignfolderDescription", @"tEzsignfolderNote": @"tEzsignfolderNote", @"eEzsignfolderSendreminderfrequency": @"eEzsignfolderSendreminderfrequency", @"pkiEzsignfolderID": @"pkiEzsignfolderID", @"dtEzsignfolderSentdate": @"dtEzsignfolderSentdate", @"eEzsignfolderStep": @"eEzsignfolderStep", @"dtEzsignfolderClose": @"dtEzsignfolderClose", @"objAudit": @"objAudit" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[];
  return [optionalProperties containsObject:propertyName];
}

@end
