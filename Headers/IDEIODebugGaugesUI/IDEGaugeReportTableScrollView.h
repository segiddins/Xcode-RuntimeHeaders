//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSLayoutConstraint;

@interface IDEGaugeReportTableScrollView : NSScrollView
{
    NSLayoutConstraint *_existingHeightConstraint;
    struct CGSize _intrinsicSize;
    BOOL _intrinsicSizeIsInvalid;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
- (void).cxx_destruct;
- (void)scrollWheel:(id)arg1;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;

@end

