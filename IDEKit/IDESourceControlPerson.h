//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDESourceControlNameTokenViewDelegate-Protocol.h>

@class ABPerson, NSArray, NSImage, NSNotification, NSString;

@interface IDESourceControlPerson : NSObject <IDESourceControlNameTokenViewDelegate>
{
    NSString *_name;
    NSString *_displayName;
    NSArray *_emails;
    NSImage *_image;
    NSString *_pairedUUID;
    ABPerson *_pairedPerson;
    NSNotification *_lastSeenNotification;
}

@property(copy) NSString *pairedUUID; // @synthesize pairedUUID=_pairedUUID;
@property(copy) NSImage *image; // @synthesize image=_image;
@property(retain) NSArray *emails; // @synthesize emails=_emails;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)email:(id)arg1;
- (id)menuForNameToken:(id)arg1;
@property(retain) ABPerson *pairedPerson; // @synthesize pairedPerson=_pairedPerson;
- (id)_emailsFromPerson:(id)arg1;
- (id)_arrayFromABMultiValue:(id)arg1;
- (id)_displayNameFromPerson:(id)arg1;
- (id)_imageFromPerson:(id)arg1;
- (id)initWithPairedAddressBookPerson:(id)arg1;
- (id)initWithName:(id)arg1 email:(id)arg2 pairedAddressBookPerson:(id)arg3;
- (void)abDatabaseChangedNotification:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 displayName:(id)arg2 emails:(id)arg3 image:(id)arg4;
- (id)defaultImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

