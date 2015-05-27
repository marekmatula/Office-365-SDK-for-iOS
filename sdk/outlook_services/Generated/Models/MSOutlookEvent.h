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

@class MSOutlookItemBody;
@class MSOutlookLocation;
@class MSOutlookResponseStatus;
@class MSOutlookAttendee;
@class MSOutlookPatternedRecurrence;
@class MSOutlookRecipient;
@class MSOutlookAttachment;
@class MSOutlookCalendar;
@class MSOutlookEvent;

#import <Foundation/Foundation.h>
#import "MSOutlookProtocols.h"
#import "MSOutlookImportance.h"
#import "MSOutlookFreeBusyStatus.h"
#import "MSOutlookEventType.h"
#import "MSOutlookItem.h"

/**
* The header for type Event.
*/

@interface MSOutlookEvent : MSOutlookItem

@property (retain, nonatomic, readwrite, getter=subject, setter=setSubject:) NSString *Subject;
@property (retain, nonatomic, readwrite, getter=body, setter=setBody:) MSOutlookItemBody *Body;
@property (retain, nonatomic, readwrite, getter=bodyPreview, setter=setBodyPreview:) NSString *BodyPreview;
@property  (nonatomic, getter=importance, setter=setImportance:) MSOutlookImportance Importance;
- (void)setImportanceString:(NSString *)value;
@property (nonatomic, getter=hasAttachments, setter=setHasAttachments:) BOOL HasAttachments;
@property (retain, nonatomic, readwrite, getter=start, setter=setStart:) NSDate *Start;
@property (retain, nonatomic, readwrite, getter=startTimeZone, setter=setStartTimeZone:) NSString *StartTimeZone;
@property (retain, nonatomic, readwrite, getter=end, setter=setEnd:) NSDate *End;
@property (retain, nonatomic, readwrite, getter=endTimeZone, setter=setEndTimeZone:) NSString *EndTimeZone;
@property (nonatomic, getter=reminder, setter=setReminder:) int Reminder;
@property (retain, nonatomic, readwrite, getter=location, setter=setLocation:) MSOutlookLocation *Location;
@property  (nonatomic, getter=showAs, setter=setShowAs:) MSOutlookFreeBusyStatus ShowAs;
- (void)setShowAsString:(NSString *)value;
@property (retain, nonatomic, readwrite, getter=responseStatus, setter=setResponseStatus:) MSOutlookResponseStatus *ResponseStatus;
@property (nonatomic, getter=isAllDay, setter=setIsAllDay:) BOOL IsAllDay;
@property (nonatomic, getter=isCancelled, setter=setIsCancelled:) BOOL IsCancelled;
@property (nonatomic, getter=isOrganizer, setter=setIsOrganizer:) BOOL IsOrganizer;
@property (nonatomic, getter=responseRequested, setter=setResponseRequested:) BOOL ResponseRequested;
@property  (nonatomic, getter=type, setter=setType:) MSOutlookEventType Type;
- (void)setTypeString:(NSString *)value;
@property (retain, nonatomic, readwrite, getter=seriesMasterId, setter=setSeriesMasterId:) NSString *SeriesMasterId;
@property (retain, nonatomic, readwrite, getter=attendees, setter=setAttendees:) NSMutableArray<MSOutlookAttendee> *Attendees;
@property (retain, nonatomic, readwrite, getter=recurrence, setter=setRecurrence:) MSOutlookPatternedRecurrence *Recurrence;
@property (retain, nonatomic, readwrite, getter=organizer, setter=setOrganizer:) MSOutlookRecipient *Organizer;
@property (retain, nonatomic, readwrite, getter=iCalUId, setter=setICalUId:) NSString *iCalUId;
@property (retain, nonatomic, readwrite, getter=webLink, setter=setWebLink:) NSString *WebLink;
@property (retain, nonatomic, readwrite, getter=attachments, setter=setAttachments:) NSMutableArray<MSOutlookAttachment> *Attachments;
@property (retain, nonatomic, readwrite, getter=calendar, setter=setCalendar:) MSOutlookCalendar *Calendar;
@property (retain, nonatomic, readwrite, getter=instances, setter=setInstances:) NSMutableArray<MSOutlookEvent> *Instances;

@end