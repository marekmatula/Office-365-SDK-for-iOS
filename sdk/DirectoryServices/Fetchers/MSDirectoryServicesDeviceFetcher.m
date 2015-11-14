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


#import "MSDirectoryServicesFetchers.h"

@implementation MSDirectoryServicesDeviceFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSDirectoryServicesDevice class]]) {

		_operations = [[MSDirectoryServicesDeviceOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (void)update:(id)entity callback:(void (^)(MSDirectoryServicesDevice *Device, MSOrcError *e))callback {

	return [super update:entity callback:callback];
}

- (void)delete:(void (^)(int status, MSOrcError *e))callback {

	return [super deleteWithCallback:callback];
}

- (MSDirectoryServicesDeviceFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value {
    [super addCustomParametersWithName:name value:value];
    
    return self;
}

- (MSDirectoryServicesDeviceFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value {
    [super addCustomHeaderWithName:name value:value];
    
    return self;
}

- (MSDirectoryServicesDeviceFetcher *)select:(NSString *)params {
    [super select:params];
    
    return self;
}

- (MSDirectoryServicesDeviceFetcher *)expand:(NSString *)value {
    [super expand:value];
    
    return self;
}

- (void) readWithCallback:(void (^)(MSDirectoryServicesDevice *Device, MSOrcError *error))callback {
    [super readWithCallback:^(id response, MSOrcError *error) {
        callback(response, error);
    }];
}

- (MSDirectoryServicesDirectoryObjectCollectionFetcher *)registeredOwners {

    return [[MSDirectoryServicesDirectoryObjectCollectionFetcher alloc] initWithUrl:@"registeredOwners" parent:self asClass:[MSDirectoryServicesDirectoryObject class]];
}

- (MSDirectoryServicesDirectoryObjectFetcher *)registeredOwnersById:(NSString *)identifier {

    return [[[MSDirectoryServicesDirectoryObjectCollectionFetcher alloc] initWithUrl:@"registeredOwners" parent:self asClass:[MSDirectoryServicesDirectoryObject class]] getById:identifier];

}

- (MSDirectoryServicesDirectoryObjectCollectionFetcher *)registeredUsers {

    return [[MSDirectoryServicesDirectoryObjectCollectionFetcher alloc] initWithUrl:@"registeredUsers" parent:self asClass:[MSDirectoryServicesDirectoryObject class]];
}

- (MSDirectoryServicesDirectoryObjectFetcher *)registeredUsersById:(NSString *)identifier {

    return [[[MSDirectoryServicesDirectoryObjectCollectionFetcher alloc] initWithUrl:@"registeredUsers" parent:self asClass:[MSDirectoryServicesDirectoryObject class]] getById:identifier];

}

@end