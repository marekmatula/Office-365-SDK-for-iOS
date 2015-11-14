/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/


#ifndef MSGRAPHITEMCOLLECTIONOPERATIONS_H
#define MSGRAPHITEMCOLLECTIONOPERATIONS_H


#import "MSGraphModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcOperations.h"


/** MSGraphItemCollectionOperations
 *
 */
@interface MSGraphItemCollectionOperations : MSOrcOperations

- (void)inviteWithRecipients:(MSGraphRecipients *)recipients message:(NSString *)message requireSignIn:(bool)requireSignIn sendInvitation:(bool)sendInvitation roles:(NSString *)roles callback:(void (^)(MSGraphPermission *, MSOrcError*))callback ;
- (void)inviteRawWithRecipients:(NSString *)recipients message:(NSString *)message requireSignIn:(NSString *)requireSignIn sendInvitation:(NSString *)sendInvitation roles:(NSString *)roles callback:(void (^)(NSString *, MSOrcError*))callback ;
- (void)copyWithParentReference:(MSGraphItemReference *)parentReference name:(NSString *)name callback:(void (^)(MSGraphItem *, MSOrcError*))callback ;
- (void)copyRawWithParentReference:(NSString *)parentReference name:(NSString *)name callback:(void (^)(NSString *, MSOrcError*))callback ;
- (void)createLinkWithType:(NSString *)type callback:(void (^)(MSGraphPermission *, MSOrcError*))callback ;
- (void)createLinkRawWithType:(NSString *)type callback:(void (^)(NSString *, MSOrcError*))callback ;
- (void)createSessionWithItem:(MSGraphChunkedUploadSessionDescriptor *)item callback:(void (^)(MSGraphUploadSession *, MSOrcError*))callback ;
- (void)createSessionRawWithItem:(NSString *)item callback:(void (^)(NSString *, MSOrcError*))callback ;
- (void)allPhotosWithCallback:(void (^)(MSGraphItem *, MSOrcError*))callback ;
- (void)deltaWithToken:(NSString *)token callback:(void (^)(MSGraphItem *, MSOrcError*))callback ;
- (void)searchWithQ:(NSString *)q callback:(void (^)(MSGraphItem *, MSOrcError*))callback ;

@end

#endif