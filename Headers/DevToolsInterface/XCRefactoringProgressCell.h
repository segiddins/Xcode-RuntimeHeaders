//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCell.h>

@class NSProgressIndicator;

@interface XCRefactoringProgressCell : NSCell
{
    NSProgressIndicator *_progressIndicatorSubview;
    BOOL _drawSubview;
}

- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)dealloc;
- (void)setDrawSubview:(BOOL)arg1;
- (void)tearDown;
- (void)setUp;

@end
