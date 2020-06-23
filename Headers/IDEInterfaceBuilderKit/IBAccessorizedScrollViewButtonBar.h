//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderKit/NSAccessibilityGroup-Protocol.h>

@class NSColor, NSNumber, NSStackView, NSString;

@interface IBAccessorizedScrollViewButtonBar : NSView <NSAccessibilityGroup>
{
    NSStackView *_verticalStackView;
    NSStackView *_topStackView;
    NSStackView *_topLeftStackView;
    NSStackView *_topCenterStackView;
    NSStackView *_topRightStackView;
    NSStackView *_bottomStackView;
    NSNumber *_cachedFittingHeight;
    NSColor *_barBackgroundColor;
}

+ (id)barButtonWithTitle:(id)arg1;
+ (id)barButtonWithImage:(id)arg1;
+ (id)barSegmentWithSegments:(id)arg1;
@property(copy, nonatomic) NSColor *barBackgroundColor; // @synthesize barBackgroundColor=_barBackgroundColor;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)hitTest:(struct CGPoint)arg1;
- (void)removeCenterView:(id)arg1;
- (void)removeRightView:(id)arg1;
- (void)removeLeftView:(id)arg1;
- (double)fittingHeight;
@property(nonatomic, getter=isBottomBarVisible) BOOL bottomBarVisible;
- (void)addBottomView:(id)arg1;
- (void)insertCenterView:(id)arg1 atIndex:(long long)arg2;
- (void)addCenterView:(id)arg1;
- (void)insertRightView:(id)arg1 atIndex:(long long)arg2;
- (void)addRightView:(id)arg1;
- (void)insertLeftView:(id)arg1 atIndex:(long long)arg2;
- (void)addLeftView:(id)arg1;
@property(readonly, nonatomic) NSView *topBarView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

