//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTPopoverContentViewController.h>

@class NSArray, NSArrayController, NSButton, NSPopUpButton, NSPopover, NSString, NSTextField;
@protocol IDEIntentBuilderEditorElementSelectorViewControllerDelegate;

@interface IDEIntentBuilderEditorElementSelectorViewController : DVTPopoverContentViewController
{
    NSPopover *_popover;
    BOOL _shouldAddAfterDismissal;
    NSArray *_elements;
    NSString *_name;
    id <IDEIntentBuilderEditorElementSelectorViewControllerDelegate> _delegate;
    NSArrayController *_arrayController;
    NSPopUpButton *_popUpButton;
    NSButton *_addButton;
    NSTextField *_titleLabel;
}

- (void).cxx_destruct;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property __weak NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
@property __weak NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(nonatomic) __weak id <IDEIntentBuilderEditorElementSelectorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)addButtonPressed:(id)arg1;
- (void)primitiveInvalidate;
- (void)presentViewControllerRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2;
- (void)loadView;
- (id)initWithElements:(id)arg1 name:(id)arg2;

@end
