/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSDirectoryAppRoleAssignmentFetcher;
@class MSDirectoryAppRoleAssignmentCollectionFetcher;
@class MSDirectoryOAuth2PermissionGrantFetcher;
@class MSDirectoryOAuth2PermissionGrantCollectionFetcher;
@class MSDirectoryDirectoryObjectFetcher;
@class MSDirectoryDirectoryObjectCollectionFetcher;
@class MSDirectoryUserOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryUserFetcher.
*/

@protocol MSDirectoryUserFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSDirectoryUser *user, MSODataException *exception))callback;
- (id<MSDirectoryUserFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryUserFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSDirectoryUserFetcher>)select:(NSString *)params;
- (id<MSDirectoryUserFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryUserOperations *operations;

- (MSDirectoryAppRoleAssignmentCollectionFetcher *)getappRoleAssignments;
- (MSDirectoryAppRoleAssignmentFetcher *) getappRoleAssignmentsById:(NSString*)_id;
- (MSDirectoryOAuth2PermissionGrantCollectionFetcher *)getoauth2PermissionGrants;
- (MSDirectoryOAuth2PermissionGrantFetcher *) getoauth2PermissionGrantsById:(NSString*)_id;
- (MSDirectoryDirectoryObjectCollectionFetcher *)getownedDevices;
- (MSDirectoryDirectoryObjectFetcher *) getownedDevicesById:(NSString*)_id;
- (MSDirectoryDirectoryObjectCollectionFetcher *)getregisteredDevices;
- (MSDirectoryDirectoryObjectFetcher *) getregisteredDevicesById:(NSString*)_id;

@end

@interface MSDirectoryUserFetcher : MSODataEntityFetcher<MSDirectoryUserFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateUser:(MSDirectoryUser *)user callback:(void (^)(MSDirectoryUser *user, MSODataException *error))callback;
- (NSURLSessionTask *) deleteUser:(void (^)(int status, MSODataException *exception))callback;

@end