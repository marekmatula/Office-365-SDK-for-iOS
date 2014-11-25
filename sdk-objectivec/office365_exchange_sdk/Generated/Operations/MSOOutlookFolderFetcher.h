/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/

#import <office365_odata_base/office365_odata_base.h>
#import "MSOOutlookFolderOperations.h"
#import "MSOOutlookFolder.h"
@class MSOOutlookFolderCollectionFetcher;
@class MSOOutlookMessageCollectionFetcher;


/**
* The header for type MSOOutlookFolderFetcher.
*/

@protocol MSOOutlookFolderFetcher

@optional
-(NSURLSessionDataTask *)execute:(void (^)(MSOOutlookFolder* folder, NSError *error))callback;
-(NSURLSessionDataTask*) update:(id)updatedEntity :(void (^)(MSOOutlookFolder*, NSError * error))callback;
@end

@interface MSOOutlookFolderFetcher : MSODataEntityFetcher<MSOOutlookFolderFetcher>

-(MSOOutlookFolderOperations*) getOperations;

-(MSOOutlookFolderCollectionFetcher*) getChildFolders;

-(MSOOutlookMessageCollectionFetcher*) getMessages;

	
@end