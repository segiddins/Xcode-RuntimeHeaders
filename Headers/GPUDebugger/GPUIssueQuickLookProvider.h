//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GPUDebugger/IDEVariablesViewQuickLookProvider-Protocol.h>

@class GPUStateValue, NSLayoutConstraint, NSString, NSTextView, NSURL, NSView;

__attribute__((visibility("hidden")))
@interface GPUIssueQuickLookProvider : NSViewController <IDEVariablesViewQuickLookProvider>
{
    int _loadedState;
    GPUStateValue *_dataValue;
    NSTextView *_textView;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSTextView *textView; // @synthesize textView=_textView;
@property int loadedState; // @synthesize loadedState=_loadedState;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)_updateTextViewFromData;
- (void)loadView;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
