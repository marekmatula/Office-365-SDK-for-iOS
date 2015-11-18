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

@class MSOutlookEmailAddress;
@class MSOutlookPhysicalAddress;

#import <Foundation/Foundation.h>
#import "MSOutlookItem.h"

/**
* The header for type Contact.
*/

@interface MSOutlookContact : MSOutlookItem

@property (copy, nonatomic, readwrite, getter=parentFolderId, setter=setParentFolderId:) NSString *ParentFolderId;
@property (copy, nonatomic, readwrite, getter=birthday, setter=setBirthday:) NSDate *Birthday;
@property (copy, nonatomic, readwrite, getter=fileAs, setter=setFileAs:) NSString *FileAs;
@property (copy, nonatomic, readwrite, getter=displayName, setter=setDisplayName:) NSString *DisplayName;
@property (copy, nonatomic, readwrite, getter=givenName, setter=setGivenName:) NSString *GivenName;
@property (copy, nonatomic, readwrite, getter=initials, setter=setInitials:) NSString *Initials;
@property (copy, nonatomic, readwrite, getter=middleName, setter=setMiddleName:) NSString *MiddleName;
@property (copy, nonatomic, readwrite, getter=nickName, setter=setNickName:) NSString *NickName;
@property (copy, nonatomic, readwrite, getter=surname, setter=setSurname:) NSString *Surname;
@property (copy, nonatomic, readwrite, getter=title, setter=setTitle:) NSString *Title;
@property (copy, nonatomic, readwrite, getter=generation, setter=setGeneration:) NSString *Generation;
@property (copy, nonatomic, readwrite, getter=emailAddresses, setter=setEmailAddresses:) NSMutableArray *EmailAddresses;
@property (copy, nonatomic, readwrite, getter=imAddresses, setter=setImAddresses:) NSMutableArray *ImAddresses;
@property (copy, nonatomic, readwrite, getter=jobTitle, setter=setJobTitle:) NSString *JobTitle;
@property (copy, nonatomic, readwrite, getter=companyName, setter=setCompanyName:) NSString *CompanyName;
@property (copy, nonatomic, readwrite, getter=department, setter=setDepartment:) NSString *Department;
@property (copy, nonatomic, readwrite, getter=officeLocation, setter=setOfficeLocation:) NSString *OfficeLocation;
@property (copy, nonatomic, readwrite, getter=profession, setter=setProfession:) NSString *Profession;
@property (copy, nonatomic, readwrite, getter=businessHomePage, setter=setBusinessHomePage:) NSString *BusinessHomePage;
@property (copy, nonatomic, readwrite, getter=assistantName, setter=setAssistantName:) NSString *AssistantName;
@property (copy, nonatomic, readwrite, getter=manager, setter=setManager:) NSString *Manager;
@property (copy, nonatomic, readwrite, getter=homePhones, setter=setHomePhones:) NSMutableArray *HomePhones;
@property (copy, nonatomic, readwrite, getter=businessPhones, setter=setBusinessPhones:) NSMutableArray *BusinessPhones;
@property (copy, nonatomic, readwrite, getter=mobilePhone1, setter=setMobilePhone1:) NSString *MobilePhone1;
@property (copy, nonatomic, readwrite, getter=homeAddress, setter=setHomeAddress:) MSOutlookPhysicalAddress *HomeAddress;
@property (copy, nonatomic, readwrite, getter=businessAddress, setter=setBusinessAddress:) MSOutlookPhysicalAddress *BusinessAddress;
@property (copy, nonatomic, readwrite, getter=otherAddress, setter=setOtherAddress:) MSOutlookPhysicalAddress *OtherAddress;
@property (copy, nonatomic, readwrite, getter=yomiCompanyName, setter=setYomiCompanyName:) NSString *YomiCompanyName;
@property (copy, nonatomic, readwrite, getter=yomiGivenName, setter=setYomiGivenName:) NSString *YomiGivenName;
@property (copy, nonatomic, readwrite, getter=yomiSurname, setter=setYomiSurname:) NSString *YomiSurname;

@end