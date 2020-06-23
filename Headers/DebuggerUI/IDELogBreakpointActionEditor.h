//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DebuggerUI/NSTextFieldDelegate-Protocol.h>

@class DBGBreakpointEditorTextField, DVTTextDocumentLocation, IDELogBreakpointAction, NSString;

@interface IDELogBreakpointActionEditor : NSViewController <NSTextFieldDelegate>
{
    IDELogBreakpointAction *_action;
    DVTTextDocumentLocation *_breakpointLocation;
    DBGBreakpointEditorTextField *_messageField;
}

@property __weak DBGBreakpointEditorTextField *messageField; // @synthesize messageField=_messageField;
- (void).cxx_destruct;
- (void)commandDidChange:(id)arg1;
- (void)awakeFromNib;
- (id)initWithAction:(id)arg1 breakpointLocation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

