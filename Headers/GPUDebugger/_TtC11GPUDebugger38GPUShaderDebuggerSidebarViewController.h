//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MISSING_TYPE, NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger38GPUShaderDebuggerSidebarViewController : NSViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *session;
    MISSING_TYPE *executedLocation;
    MISSING_TYPE *lineIdentifier;
    MISSING_TYPE *executionHistoryNodes;
    MISSING_TYPE *variableSnapshots;
    MISSING_TYPE *previewShown;
    MISSING_TYPE *descriptionView;
    MISSING_TYPE *previewView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)toggleQuicklookWithSender:(id)arg1;
- (void)hidePreviewWithSender:(id)arg1;
- (void)showPreviewWithSender:(id)arg1;
- (void)togglePreviewWithSender:(id)arg1;
- (void)viewDidLayout;
- (void)viewDidLoad;
@property(nonatomic, retain) NSButton *previewView; // @synthesize previewView;
@property(nonatomic, retain) NSTextField *descriptionView; // @synthesize descriptionView;

@end
