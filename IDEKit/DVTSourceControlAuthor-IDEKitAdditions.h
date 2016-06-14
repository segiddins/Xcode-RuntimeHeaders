//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlAuthor.h>

#import <IDEKit/IDESourceControlNameTokenViewDelegate-Protocol.h>

@class ABPerson, NSArray, NSImage, NSString;

@interface DVTSourceControlAuthor (IDEKitAdditions) <IDESourceControlNameTokenViewDelegate>
- (void)email:(id)arg1;
- (id)menuForNameToken:(id)arg1;
- (id)_emailsFromPerson:(id)arg1;
- (id)_arrayFromABMultiValue:(id)arg1;
- (id)_displayNameFromPerson:(id)arg1;
@property(readonly, copy) NSImage *image;
- (id)_imageFromPerson:(id)arg1;
- (id)defaultImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *displayName;
@property(readonly) NSArray *emails;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *name;
@property(retain) ABPerson *pairedPerson;
@property(readonly) Class superclass;
@end

