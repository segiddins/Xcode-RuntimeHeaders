//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTBorderedView.h>

@class NSMapTable, NSMutableArray, NSView;

@interface DVTScopeBarView : DVTBorderedView
{
    NSMapTable *_viewsToLeftSpacing;
    NSMutableArray *_viewsStuckToLeft;
    NSMutableArray *_viewsStuckToRight;
    NSView *_centeredView;
    BOOL _usesAutoLayout;
}

+ (id)createButtonSeparator;
+ (id)_createButtonOfType:(unsigned long long)arg1 gradientStyle:(int)arg2;
+ (id)createToggleButtonWithImage:(id)arg1 alternateImage:(id)arg2;
+ (id)createButton;
- (void).cxx_destruct;
@property(nonatomic) BOOL usesAutoLayout; // @synthesize usesAutoLayout=_usesAutoLayout;
- (void)verticallyCenterView:(id)arg1;
- (void)_addCenteredViewConstraints;
- (void)_invalidateCenteredViewConstraints;
- (void)willRemoveSubview:(id)arg1;
- (void)removeView:(id)arg1;
- (id)viewsInCenter;
- (id)viewsOnRight;
- (id)viewsOnLeft;
- (void)addViewInCenter:(id)arg1;
- (void)addViewOnRight:(id)arg1 verticalAlignment:(int)arg2 withLeftPadding:(double)arg3;
- (void)addViewOnRight:(id)arg1 verticalAlignment:(int)arg2;
- (void)addViewOnRight:(id)arg1;
- (void)addViewOnLeft:(id)arg1 verticalAlignment:(int)arg2 withLeftPadding:(double)arg3;
- (void)addViewOnLeft:(id)arg1 verticalAlignment:(int)arg2;
- (void)addViewOnLeft:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

