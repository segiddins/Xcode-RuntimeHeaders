//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDESourceControlWorkingCopyCreationChooserWindowController, NSButton;

@interface DVTProjectWorkingCopyTableCellView : NSTableCellView
{
    IDESourceControlWorkingCopyCreationChooserWindowController *_windowController;
    NSButton *_checkBox;
}

@property NSButton *checkBox; // @synthesize checkBox=_checkBox;
@property IDESourceControlWorkingCopyCreationChooserWindowController *windowController; // @synthesize windowController=_windowController;
- (void)checkBox:(id)arg1;

@end
