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



#import "MSOneNoteModels.h"
#import "core/MSOrcObjectizer.h"


/** Implementation for MSOneNoteIdentity
 *
 */
@implementation MSOneNoteIdentity


@synthesize odataType = _odataType;

+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 

        if(_$$$_$$$propertiesNamesMappings==nil) {
    
        _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"id", @"_id", @"displayName", @"displayName", nil];
        
    }
    
    return _$$$_$$$propertiesNamesMappings;
}


- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OneNote.Api.Identity";

    }

	return self;
}


- (instancetype) initWithDictionary: (NSDictionary *) dic {
    if((self = [self init])) {
        if(dic!=nil) {
		__id = (![dic objectForKey: @"id"] || [ [dic objectForKey: @"id"] isKindOfClass:[NSNull class]] )?__id:[[dic objectForKey: @"id"] copy];
		_displayName = (![dic objectForKey: @"displayName"] || [ [dic objectForKey: @"displayName"] isKindOfClass:[NSNull class]] )?_displayName:[[dic objectForKey: @"displayName"] copy];
    }
    [self.updatedValues removeAllObjects];
    }
    
    return self;
}

- (NSDictionary *) toDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

	{id curVal = [self._id copy];if (curVal!=nil) [dic setValue: curVal forKey: @"id"];}
	{id curVal = [self.displayName copy];if (curVal!=nil) [dic setValue: curVal forKey: @"displayName"];}
    [dic setValue: @"#Microsoft.OneNote.Api.Identity" forKey: @"@odata.type"];

    return dic;
}

- (NSDictionary *) toUpdatedValuesDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

	{id curVal = self._id;
    if([self.updatedValues containsObject:@"id"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal copy] forKey: @"id"];
            }
    }
	{id curVal = self.displayName;
    if([self.updatedValues containsObject:@"displayName"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal copy] forKey: @"displayName"];
            }
    }
    return dic;
}


/** Setter implementation for property _id
 *
 */
- (void) setId: (NSString *) value {
    __id = value;
    [self valueChangedFor:@"id"];
}
       
/** Setter implementation for property displayName
 *
 */
- (void) setDisplayName: (NSString *) value {
    _displayName = value;
    [self valueChangedFor:@"displayName"];
}
       

@end