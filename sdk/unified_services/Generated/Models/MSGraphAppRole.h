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

#import <Foundation/Foundation.h>
#import "MSOrcBaseEntity.h"

/**
* The header for type AppRole.
*/

@interface MSGraphAppRole : MSOrcBaseEntity

@property (copy, nonatomic, readwrite, getter=allowedMemberTypes, setter=setAllowedMemberTypes:) NSMutableArray *allowedMemberTypes;
@property (copy, nonatomic, readwrite, getter=description, setter=setDescription:) NSString *$$__$$description;
@property (copy, nonatomic, readwrite, getter=displayName, setter=setDisplayName:) NSString *displayName;
@property (copy, nonatomic, readwrite, getter=id, setter=setId:) NSString *id;
@property (nonatomic, getter=isEnabled, setter=setIsEnabled:) BOOL isEnabled;
@property (copy, nonatomic, readwrite, getter=value, setter=setValue:) NSString *value;

@end