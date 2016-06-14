//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEModelEditor/IDECapsuleViewController-Protocol.h>

@class DVTNotificationToken, IDEDataModelPredicateTextField, NSArrayController, NSImage, NSPredicateEditor, NSSegmentedControl, NSString, NSTabView;

@interface IDEDataModelFetchRequestSlice : IDEViewController <IDECapsuleViewController>
{
    NSSegmentedControl *tabSwitch;
    NSTabView *tabView;
    IDEDataModelPredicateTextField *predicateField;
    NSPredicateEditor *predicateEditor;
    double fixedHeight;
    NSArrayController *_entityController;
    DVTNotificationToken *_ruleEditorRowsChangedToken;
}

@property(retain) NSArrayController *entityController; // @synthesize entityController=_entityController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)ruleEditorRowsDidChange:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)tabSwitched:(id)arg1;
- (void)updateFrame;
- (void)updatePredicateRowTemplates;
- (void)updatePredicateRowTemplatesUsingFetchRequest:(id)arg1;
- (double)heightForPredicateText;
- (void)setTitle:(id)arg1;
@property(readonly) BOOL canUndisclose;
@property(readonly) BOOL canRemove;
@property(readonly) BOOL canRename;
@property(readonly, copy) NSString *titleForDisplay;
- (id)nibBundle;
- (id)nibName;
- (id)init;

// Remaining properties
@property BOOL canAddItems;
@property(readonly) BOOL canDrag;
@property BOOL canRemoveItems;
@property(readonly) BOOL canSelect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;

@end

