# EZObjectEzsignsignatureApi

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ezsignsignatureCreateObjectV1**](EZObjectEzsignsignatureApi.md#ezsignsignaturecreateobjectv1) | **POST** /1/object/ezsignsignature | Create a new Ezsignsignature
[**ezsignsignatureDeleteObjectV1**](EZObjectEzsignsignatureApi.md#ezsignsignaturedeleteobjectv1) | **DELETE** /1/object/ezsignsignature/{pkiEzsignsignatureID} | Delete an existing Ezsignsignature
[**ezsignsignatureGetChildrenV1**](EZObjectEzsignsignatureApi.md#ezsignsignaturegetchildrenv1) | **GET** /1/object/ezsignsignature/{pkiEzsignsignatureID}/getChildren | Retrieve an existing Ezsignsignature&#39;s children IDs
[**ezsignsignatureGetObjectV1**](EZObjectEzsignsignatureApi.md#ezsignsignaturegetobjectv1) | **GET** /1/object/ezsignsignature/{pkiEzsignsignatureID} | Retrieve an existing Ezsignsignature


# **ezsignsignatureCreateObjectV1**
```objc
-(NSURLSessionTask*) ezsignsignatureCreateObjectV1WithEzsignsignatureCreateObjectV1Request: (NSArray<EZEzsignsignatureCreateObjectV1Request>*) ezsignsignatureCreateObjectV1Request
        completionHandler: (void (^)(EZEzsignsignatureCreateObjectV1Response* output, NSError* error)) handler;
```

Create a new Ezsignsignature

The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.

### Example 
```objc
EZDefaultConfiguration *apiConfig = [EZDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Authorization)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSArray<EZEzsignsignatureCreateObjectV1Request>* ezsignsignatureCreateObjectV1Request = @[[[EZEzsignsignatureCreateObjectV1Request alloc] init]]; // 

EZObjectEzsignsignatureApi*apiInstance = [[EZObjectEzsignsignatureApi alloc] init];

// Create a new Ezsignsignature
[apiInstance ezsignsignatureCreateObjectV1WithEzsignsignatureCreateObjectV1Request:ezsignsignatureCreateObjectV1Request
          completionHandler: ^(EZEzsignsignatureCreateObjectV1Response* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling EZObjectEzsignsignatureApi->ezsignsignatureCreateObjectV1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ezsignsignatureCreateObjectV1Request** | [**NSArray&lt;EZEzsignsignatureCreateObjectV1Request&gt;***](EZEzsignsignatureCreateObjectV1Request.md)|  | 

### Return type

[**EZEzsignsignatureCreateObjectV1Response***](EZEzsignsignatureCreateObjectV1Response.md)

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ezsignsignatureDeleteObjectV1**
```objc
-(NSURLSessionTask*) ezsignsignatureDeleteObjectV1WithPkiEzsignsignatureID: (NSNumber*) pkiEzsignsignatureID
        completionHandler: (void (^)(EZEzsignsignatureDeleteObjectV1Response* output, NSError* error)) handler;
```

Delete an existing Ezsignsignature

### Example 
```objc
EZDefaultConfiguration *apiConfig = [EZDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Authorization)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* pkiEzsignsignatureID = @56; // The unique ID of the Ezsignsignature

EZObjectEzsignsignatureApi*apiInstance = [[EZObjectEzsignsignatureApi alloc] init];

// Delete an existing Ezsignsignature
[apiInstance ezsignsignatureDeleteObjectV1WithPkiEzsignsignatureID:pkiEzsignsignatureID
          completionHandler: ^(EZEzsignsignatureDeleteObjectV1Response* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling EZObjectEzsignsignatureApi->ezsignsignatureDeleteObjectV1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pkiEzsignsignatureID** | **NSNumber***| The unique ID of the Ezsignsignature | 

### Return type

[**EZEzsignsignatureDeleteObjectV1Response***](EZEzsignsignatureDeleteObjectV1Response.md)

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ezsignsignatureGetChildrenV1**
```objc
-(NSURLSessionTask*) ezsignsignatureGetChildrenV1WithPkiEzsignsignatureID: (NSNumber*) pkiEzsignsignatureID
        completionHandler: (void (^)(NSError* error)) handler;
```

Retrieve an existing Ezsignsignature's children IDs

### Example 
```objc
EZDefaultConfiguration *apiConfig = [EZDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Authorization)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* pkiEzsignsignatureID = @56; // The unique ID of the Ezsignsignature

EZObjectEzsignsignatureApi*apiInstance = [[EZObjectEzsignsignatureApi alloc] init];

// Retrieve an existing Ezsignsignature's children IDs
[apiInstance ezsignsignatureGetChildrenV1WithPkiEzsignsignatureID:pkiEzsignsignatureID
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling EZObjectEzsignsignatureApi->ezsignsignatureGetChildrenV1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pkiEzsignsignatureID** | **NSNumber***| The unique ID of the Ezsignsignature | 

### Return type

void (empty response body)

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ezsignsignatureGetObjectV1**
```objc
-(NSURLSessionTask*) ezsignsignatureGetObjectV1WithPkiEzsignsignatureID: (NSNumber*) pkiEzsignsignatureID
        completionHandler: (void (^)(EZEzsignsignatureGetObjectV1Response* output, NSError* error)) handler;
```

Retrieve an existing Ezsignsignature

### Example 
```objc
EZDefaultConfiguration *apiConfig = [EZDefaultConfiguration sharedConfig];

// Configure API key authorization: (authentication scheme: Authorization)
[apiConfig setApiKey:@"YOUR_API_KEY" forApiKeyIdentifier:@"Authorization"];
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//[apiConfig setApiKeyPrefix:@"Bearer" forApiKeyIdentifier:@"Authorization"];


NSNumber* pkiEzsignsignatureID = @56; // The unique ID of the Ezsignsignature

EZObjectEzsignsignatureApi*apiInstance = [[EZObjectEzsignsignatureApi alloc] init];

// Retrieve an existing Ezsignsignature
[apiInstance ezsignsignatureGetObjectV1WithPkiEzsignsignatureID:pkiEzsignsignatureID
          completionHandler: ^(EZEzsignsignatureGetObjectV1Response* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling EZObjectEzsignsignatureApi->ezsignsignatureGetObjectV1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pkiEzsignsignatureID** | **NSNumber***| The unique ID of the Ezsignsignature | 

### Return type

[**EZEzsignsignatureGetObjectV1Response***](EZEzsignsignatureGetObjectV1Response.md)

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

