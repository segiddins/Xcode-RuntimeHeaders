//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GPUDebugger/NSTableViewDataSource-Protocol.h>

@class DYPPerformanceAnalysisResult, NSImageView, NSStackView, NSString, NSTableView, NSTextField;

__attribute__((visibility("hidden")))
@interface GPUTraceContentPopover : NSViewController <NSTableViewDataSource>
{
    DYPPerformanceAnalysisResult *_performanceResult;
    NSStackView *_stack;
    NSTableView *_content;
    NSImageView *_thumbnail;
    NSTextField *_apiTitle;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *apiTitle; // @synthesize apiTitle=_apiTitle;
@property(nonatomic) __weak NSImageView *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) __weak NSTableView *content; // @synthesize content=_content;
@property(nonatomic) __weak NSStackView *stack; // @synthesize stack=_stack;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setAPIItem:(id)arg1 usingWidth:(double)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

