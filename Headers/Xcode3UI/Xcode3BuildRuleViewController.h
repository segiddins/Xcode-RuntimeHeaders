//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/IDECapsuleViewController-Protocol.h>
#import <Xcode3UI/IDECapsuleViewDelegate-Protocol.h>

@class NSColor, NSImage, NSString;

@interface Xcode3BuildRuleViewController : IDEViewController <IDECapsuleViewController, IDECapsuleViewDelegate>
{
}

+ (id)keyPathsForValuesAffectingTitleForDisplay;
- (double)contentOriginXOffsetForCapsuleView:(id)arg1;
- (double)capsuleView:(id)arg1 preferredContentViewWidthForCapsuleWidth:(double)arg2;
- (BOOL)capsuleViewCanBeRenamed:(id)arg1;
- (BOOL)canAddFiles;
- (BOOL)capsuleViewCanBeRemoved:(id)arg1;
- (id)capsuleViewTitleForEditing:(id)arg1;
@property(readonly, copy) NSString *titleForDisplay;

// Remaining properties
@property(retain) NSColor *backgroundColor;
@property BOOL canAddItems;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canRemove;
@property BOOL canRemoveItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;
@property(readonly) BOOL wantsDisclosureButtonHidden;

@end

