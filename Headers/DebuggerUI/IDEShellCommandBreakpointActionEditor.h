//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class IDEShellCommandBreakpointAction, NSTextField;

@interface IDEShellCommandBreakpointActionEditor : NSViewController
{
    IDEShellCommandBreakpointAction *_action;
    NSTextField *_argsTextField;
}

- (void).cxx_destruct;
- (void)chooseCommand:(id)arg1;
- (void)awakeFromNib;
- (id)initWithAction:(id)arg1 breakpointLocation:(id)arg2;

@end

