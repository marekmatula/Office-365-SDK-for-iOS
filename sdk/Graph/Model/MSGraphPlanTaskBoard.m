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



#import "MSGraphModels.h"
#import "core/MSOrcObjectizer.h"


/** Implementation for MSGraphPlanTaskBoard
 *
 */
@implementation MSGraphPlanTaskBoard


@synthesize odataType = _odataType;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
        if(_$$$_$$$propertiesNamesMappings==nil) {
    
        _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"type", @"type", @"id", @"_id", nil];
        
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#microsoft.graph.planTaskBoard";
        
    }

	return self;
}



- (instancetype) initWithDictionary: (NSDictionary *) dic {
    if((self = [self init])) {
        if(dic!=nil) {
		_type = (![dic objectForKey: @"type"] || [ [dic objectForKey: @"type"] isKindOfClass:[NSNull class]] )?_type:[MSGraphTaskBoardTypeSerializer fromString:[dic objectForKey: @"type"]];
		__id = (![dic objectForKey: @"id"] || [ [dic objectForKey: @"id"] isKindOfClass:[NSNull class]] )?__id:[[dic objectForKey: @"id"] copy];
    }
    [self.updatedValues removeAllObjects];
    }
    
    return self;
}

- (NSDictionary *) toDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

	{[dic setValue: [MSGraphTaskBoardTypeSerializer toString:self.type] forKey: @"type"];}
	{id curVal = [self._id copy];if (curVal!=nil) [dic setValue: curVal forKey: @"id"];}
    [dic setValue: @"#microsoft.graph.planTaskBoard" forKey: @"@odata.type"];

    return dic;
}

- (NSDictionary *) toUpdatedValuesDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

 if([self.updatedValues containsObject:@"type"])
            { [dic setValue: [MSGraphTaskBoardTypeSerializer toString:self.type] forKey: @"type"];
}	{id curVal = self._id;
    if([self.updatedValues containsObject:@"id"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal copy] forKey: @"id"];
            }
    }
    return dic;
}


/** Setter implementation for property type
 *
 */
- (void) setType: (MSGraphTaskBoardType) value {
    _type = value;
    [self valueChangedFor:@"type"];
}
       

- (void)setTypeString:(NSString *)string {
        
    _type = [MSGraphTaskBoardTypeSerializer fromString:string];
    [self valueChangedFor:@"type"]; 
}

/** Setter implementation for property _id
 *
 */
- (void) setId: (NSString *) value {
    __id = value;
    [self valueChangedFor:@"id"];
}
       

@end