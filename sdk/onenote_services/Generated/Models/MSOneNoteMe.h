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

@class MSOneNoteNotes;

#import <Foundation/Foundation.h>
#import "MSOneNoteProtocols.h"


/**
* The header for type Me.
*/

@interface MSOneNoteMe : NSObject

@property (retain, nonatomic, readonly) NSString *odataType;
@property (retain, nonatomic, readwrite, getter=id, setter=setId:) NSString *id;
@property (retain, nonatomic, readwrite, getter=notes, setter=setNotes:) MSOneNoteNotes *notes;

@end