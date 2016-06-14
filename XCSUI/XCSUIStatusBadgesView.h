//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <XCSUI/NSAccessibilityStaticText-Protocol.h>

@class NSArray, NSMutableArray, NSString, XCSUIStatusBadge;

@interface XCSUIStatusBadgesView : NSView <NSAccessibilityStaticText>
{
    NSMutableArray *_badgeViews;
    XCSUIStatusBadge *_errorsBadge;
    XCSUIStatusBadge *_warningsBadge;
    XCSUIStatusBadge *_issuesBadge;
    XCSUIStatusBadge *_testsBadge;
    BOOL _insetFirstBadge;
    NSArray *_badges;
}

@property(nonatomic) BOOL insetFirstBadge; // @synthesize insetFirstBadge=_insetFirstBadge;
@property(copy, nonatomic) NSArray *badges; // @synthesize badges=_badges;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (double)renderedWidth;
- (void)refreshBadges;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)placeBadges;
- (void)removeBadgeSubviews;
- (void)resetBadgeSelection:(id)arg1 ressetAll:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

