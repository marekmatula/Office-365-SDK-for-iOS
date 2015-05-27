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

@class MSGraphOAuth2PermissionGrantFetcher;
@class MSGraphOAuth2PermissionGrantCollectionFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphOAuth2PermissionGrantCollectionFetcher.
*/

@protocol MSGraphOAuth2PermissionGrantCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSGraphOAuth2PermissionGrant> *oAuth2PermissionGrants, MSOrcError *error))callback;

- (MSGraphOAuth2PermissionGrantCollectionFetcher *)select:(NSString *)params;
- (MSGraphOAuth2PermissionGrantCollectionFetcher *)filter:(NSString *)params;
- (MSGraphOAuth2PermissionGrantCollectionFetcher *)search:(NSString *)params;
- (MSGraphOAuth2PermissionGrantCollectionFetcher *)top:(int)value;
- (MSGraphOAuth2PermissionGrantCollectionFetcher *)skip:(int)value;
- (MSGraphOAuth2PermissionGrantCollectionFetcher *)expand:(NSString *)value;
- (MSGraphOAuth2PermissionGrantCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphOAuth2PermissionGrantCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphOAuth2PermissionGrantCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSGraphOAuth2PermissionGrantFetcher *)getById:(NSString *)Id;
- (void)add:(MSGraphOAuth2PermissionGrant *)entity callback:(void (^)(MSGraphOAuth2PermissionGrant *oAuth2PermissionGrant, MSOrcError *error))callback;

@end

@interface MSGraphOAuth2PermissionGrantCollectionFetcher : MSOrcCollectionFetcher<MSGraphOAuth2PermissionGrantCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end