//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSWindow;

@protocol _TtP6IDEKit26IDENavigationOverlayTarget_
@property(nonatomic, readonly) NSString *navigationOverlayTargetAccessibilityTitle;
@property(nonatomic, readonly) BOOL wantsHighlightEdgeAdornments;
@property(nonatomic, readonly) double highlightFrameCornerRadius;
@property(nonatomic, readonly) double highlightFrameBorderWidth;
- (struct CGRect)hitTestFrameInWindow:(NSWindow *)arg1;
- (struct CGRect)highlightFrameInWindow:(NSWindow *)arg1;
@end

