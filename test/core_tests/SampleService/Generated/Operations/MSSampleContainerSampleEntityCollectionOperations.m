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

#import "MSSampleContainerSampleEntityCollectionOperations.h"
#import "MSSampleContainerODataEntities.h"

/**
* The implementation file for type MSSampleContainerSampleEntityCollectionOperations.
*/

@implementation MSSampleContainerSampleEntityCollectionOperations

- (NSURLSessionTask *)someFunctionWithPath:(NSString *) path  callback:(void (^)(MSSampleContainerSampleComplexType *sampleComplexType, MSODataException *exception))callback {

	id<MSODataRequest> request = [super.resolver createODataRequest];
	NSDictionary *params = [[NSDictionary alloc] initWithObjectsAndKeys:path,@"path",nil];

	NSString *parameters = [MSODataBaseContainerHelper getFunctionParameters:params];
	
	[request.url appendPathComponent:[[NSString alloc] initWithFormat:@"SomeFunction(%@)",parameters]];
		
	NSURLSessionTask *task = [super oDataExecuteRequest:request callback:^(id<MSODataResponse> response, MSODataException *exception){

       if(exception == nil){

			MSSampleContainerSampleComplexType * result = (MSSampleContainerSampleComplexType *)[super.resolver.jsonSerializer deserialize:response.data asClass:[MSSampleContainerSampleComplexType class]];
            callback(result, exception);
        }
        else{

            callback(nil, exception);
        }
    }];
    
    return task;
}		
@end