//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <XCSUI/NSAccessibilityStaticText-Protocol.h>

@class NSArray, NSString;

@interface XCSUIStatusBadgesView : NSView <NSAccessibilityStaticText>
{
    NSArray *_badges;
}

@property(copy, nonatomic) NSArray *badges; // @synthesize badges=_badges;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)refreshBadges;
- (void)placeBadges;
- (void)removeBadgeSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

