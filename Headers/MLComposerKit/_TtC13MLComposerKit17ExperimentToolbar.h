//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class MISSING_TYPE, NSTextField, _TtC13MLComposerKit9ColorView;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit17ExperimentToolbar : NSView
{
    MISSING_TYPE *inputLabel;
    MISSING_TYPE *metricsLabel;
    MISSING_TYPE *outputLabel;
    MISSING_TYPE *lineView;
    MISSING_TYPE *backgroundView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewWillDraw;
@property(nonatomic) __weak _TtC13MLComposerKit9ColorView *lineView; // @synthesize lineView;
@property(nonatomic) __weak NSTextField *outputLabel; // @synthesize outputLabel;
@property(nonatomic) __weak NSTextField *metricsLabel; // @synthesize metricsLabel;
@property(nonatomic) __weak NSTextField *inputLabel; // @synthesize inputLabel;

@end
