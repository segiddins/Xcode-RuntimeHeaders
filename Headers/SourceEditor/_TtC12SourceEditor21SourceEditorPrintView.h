//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class MISSING_TYPE;

@interface _TtC12SourceEditor21SourceEditorPrintView : NSView
{
    MISSING_TYPE *dataSource;
    MISSING_TYPE *printInfo;
    MISSING_TYPE *contentView;
    MISSING_TYPE *layoutManager;
    MISSING_TYPE *$__lazy_storage_$_pages;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)beginPageInRect:(struct CGRect)arg1 atPlacement:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

