//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICARResourceGroup.h>

#import <IDEInterfaceBuilderKit/IBICAbstractCollectionParent-Protocol.h>

@class NSString;

@interface IBICARResourceGroup (DisplayAdditions) <IBICAbstractCollectionParent>
+ (id)itemsFromOverlayOrnament:(id)arg1;
+ (id)synthesizeItemsFromLoosePaths:(id)arg1 claimingPaths:(id *)arg2;
+ (id)typeNameForDisplay;
- (BOOL)isDisplayNameFindable;
- (id)createChildContentFromDropIndicator:(id)arg1;
- (id)overviewCapsuleSpecification;
- (BOOL)displaysChildrenInOutlineView;
- (id)icon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

