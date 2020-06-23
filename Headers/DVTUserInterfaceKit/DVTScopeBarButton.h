//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

@protocol DVTScopeBarButtonDelegate;

@interface DVTScopeBarButton : NSButton
{
    id <DVTScopeBarButtonDelegate> _delegate;
    double _extraHorizontalPadding;
}

+ (Class)cellClass;
@property(nonatomic) double extraHorizontalPadding; // @synthesize extraHorizontalPadding=_extraHorizontalPadding;
@property(nonatomic) __weak id <DVTScopeBarButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize)intrinsicContentSize;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)_dvt_scopeBarButtonCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

