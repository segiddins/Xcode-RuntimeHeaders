//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorViewController.h>

#import <IDEIntentBuilderEditor/IDECapsuleViewController-Protocol.h>
#import <IDEIntentBuilderEditor/IDECapsuleViewDelegate-Protocol.h>

@class NSColor, NSImage, NSString;
@protocol IDEIntentBuilderEditorCapsuleViewControllerDelegate;

@interface IDEIntentBuilderEditorCapsuleViewController : IDEIntentBuilderEditorViewController <IDECapsuleViewController, IDECapsuleViewDelegate>
{
    id <IDEIntentBuilderEditorCapsuleViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IDEIntentBuilderEditorCapsuleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *titleForDisplay;
- (void)primitiveInvalidate;
- (void)_bind;
- (void)unbind;
- (void)bind;
- (void)selectionDidChange;
- (void)selectionWillChange;
- (void)loadView;

// Remaining properties
@property(retain) NSColor *backgroundColor;
@property BOOL canAddItems;
@property(readonly) BOOL canRemove;
@property BOOL canRemoveItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;
@property(readonly) BOOL wantsDisclosureButtonHidden;

@end

