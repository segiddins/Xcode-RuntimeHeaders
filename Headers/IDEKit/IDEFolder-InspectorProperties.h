//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEFolder.h>

#import <IDEKit/IDEStructureNavigatorMenuItemWhitelistProvider-Protocol.h>

@class NSString;

@interface IDEFolder (InspectorProperties) <IDEStructureNavigatorMenuItemWhitelistProvider>
+ (id)keyPathsForValuesAffectingIdeInspectedIsReferenceNameEditable;
- (id)ideInspectedReferenceMessageForChoosingRelativeLocation;
- (BOOL)ideInspectedIsReferenceNameEditable;
- (id)filterMenuWhitelistIdentifiers;
- (id)contextualMenuWhitelistIdentifiers;
- (id)fileNewMenuWhitelistIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

