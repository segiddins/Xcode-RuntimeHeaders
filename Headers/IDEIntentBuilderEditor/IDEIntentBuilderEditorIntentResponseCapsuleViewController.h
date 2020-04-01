//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleTableViewController.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorStackPopoverViewControllerDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/IDEIntentBuilderTokenTextFieldDataSource-Protocol.h>
#import <IDEIntentBuilderEditor/IDEIntentBuilderTokenTextFieldDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/NSTableViewDataSource-Protocol.h>
#import <IDEIntentBuilderEditor/NSTableViewDelegate-Protocol.h>

@class DVTObservingToken, IDEIntentBuilderEditorStackPopoverViewController, NSPopover, NSString;

@interface IDEIntentBuilderEditorIntentResponseCapsuleViewController : IDEIntentBuilderEditorCapsuleTableViewController <NSTableViewDelegate, NSTableViewDataSource, IDEIntentBuilderTokenTextFieldDataSource, IDEIntentBuilderTokenTextFieldDelegate, IDEIntentBuilderEditorStackPopoverViewControllerDelegate>
{
    DVTObservingToken *_responseCodesObservationToken;
    DVTObservingToken *_propertiesObservationToken;
    IDEIntentBuilderEditorStackPopoverViewController *_stackPopoverViewController;
    NSPopover *_popover;
}

- (void).cxx_destruct;
- (void)stackPopoverViewControllerDidClose:(id)arg1;
- (void)tokenTextField:(id)arg1 tokenClicked:(id)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4 atCharacterIndex:(unsigned long long)arg5;
- (id)availableTokensForTextField:(id)arg1;
- (void)selectionChanged;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateDeleteButtonAccessibilityLabel;
- (id)_intentResponse;
- (id)_codes;
- (void)primitiveInvalidate;
- (void)bind;
- (void)selectionDidChange;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (unsigned long long)numberOfRows;
- (unsigned long long)minimumNumberOfRows;
- (id)selectedObjects;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)add:(id)arg1;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

