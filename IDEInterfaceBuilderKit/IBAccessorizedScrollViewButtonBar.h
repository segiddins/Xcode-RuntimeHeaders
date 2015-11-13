//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class DVTStackView_ML, NSArray, NSColor;

@interface IBAccessorizedScrollViewButtonBar : DVTLayoutView_ML
{
    DVTStackView_ML *_leftStack;
    DVTStackView_ML *_centerStack;
    DVTStackView_ML *_rightStack;
    NSColor *_barBackgroundColor;
    double _barHeight;
}

+ (id)barButtonWithTitle:(id)arg1;
+ (id)barButtonWithImage:(id)arg1;
+ (id)barSegmentWithSegments:(id)arg1;
+ (id)barPopUpButton;
+ (id)barButton;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
@property(copy, nonatomic) NSColor *barBackgroundColor; // @synthesize barBackgroundColor=_barBackgroundColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveBarBackgroundColor;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)removeCenterView:(id)arg1;
- (void)removeRightView:(id)arg1;
- (void)removeLeftView:(id)arg1;
- (void)insertCenterView:(id)arg1 atIndex:(long long)arg2;
- (void)addCenterView:(id)arg1;
- (void)insertRightView:(id)arg1 atIndex:(long long)arg2;
- (void)addRightView:(id)arg1;
- (void)insertLeftView:(id)arg1 atIndex:(long long)arg2;
- (void)addLeftView:(id)arg1;
@property(copy) NSArray *centerViews;
@property(copy) NSArray *rightViews;
@property(copy) NSArray *leftViews;
@property double rightInset;
@property double leftInset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

