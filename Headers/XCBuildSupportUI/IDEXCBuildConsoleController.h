//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class MISSING_TYPE, NSTextField, NSTextView;

__attribute__((visibility("hidden")))
@interface IDEXCBuildConsoleController : NSWindowController
{
    MISSING_TYPE *$__lazy_storage_$__buildServiceConsole;
    MISSING_TYPE *logTextView;
    MISSING_TYPE *inputTextField;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)inputTextFieldDidChange:(id)arg1;
- (void)loadXCBuildConsole:(id)arg1;
- (id)init;
@property(nonatomic, retain) NSTextField *inputTextField; // @synthesize inputTextField;
@property(nonatomic, retain) NSTextView *logTextView; // @synthesize logTextView;

@end
