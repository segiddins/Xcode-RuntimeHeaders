//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class MISSING_TYPE, NSButton, NSGridView, NSProgressIndicator, NSTextField;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger25GPULandingPageInfoSection : NSView
{
    MISSING_TYPE *title;
    MISSING_TYPE *statsTable;
    MISSING_TYPE *actionBtn;
    MISSING_TYPE *statusMessage;
    MISSING_TYPE *progressIndicator;
    MISSING_TYPE *parent;
    MISSING_TYPE *section;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *destination;
    MISSING_TYPE *statusObserver;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)performAction:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic) __weak NSTextField *statusMessage; // @synthesize statusMessage;
@property(nonatomic) __weak NSButton *actionBtn; // @synthesize actionBtn;
@property(nonatomic) __weak NSGridView *statsTable; // @synthesize statsTable;
@property(nonatomic) __weak NSTextField *title; // @synthesize title;

@end
