//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTScrollView, NSButton, NSPopUpButton, NSTextField, XCSBot, XCSUIBotSummaryStatsFetcher, XCSUIStatusBadge, XCSUIStatusBadgesView;

@interface XCSUIBotSummaryStatusAndIssueCountsViewController : DVTViewController
{
    XCSUIStatusBadge *_commitsStatusBadge;
    XCSUIStatusBadge *_newTestsBadge;
    XCSUIStatusBadge *_issueAverageBadge;
    XCSUIStatusBadge *_streakBadge;
    XCSUIBotSummaryStatsFetcher *_statsFetcher;
    XCSBot *_bot;
    NSButton *_botDetailsButton;
    NSTextField *_latestIntegration;
    NSTextField *_duration;
    XCSUIStatusBadgesView *_issuesBadgeView;
    NSPopUpButton *_statsTimePeriodPopUpButton;
    DVTScrollView *_issuesBadgeScrollView;
}

@property __weak DVTScrollView *issuesBadgeScrollView; // @synthesize issuesBadgeScrollView=_issuesBadgeScrollView;
@property __weak NSPopUpButton *statsTimePeriodPopUpButton; // @synthesize statsTimePeriodPopUpButton=_statsTimePeriodPopUpButton;
@property __weak XCSUIStatusBadgesView *issuesBadgeView; // @synthesize issuesBadgeView=_issuesBadgeView;
@property __weak NSTextField *duration; // @synthesize duration=_duration;
@property __weak NSTextField *latestIntegration; // @synthesize latestIntegration=_latestIntegration;
@property __weak NSButton *botDetailsButton; // @synthesize botDetailsButton=_botDetailsButton;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
- (void).cxx_destruct;
- (void)copyBotID:(id)arg1;
- (void)toggleBotID:(id)arg1;
- (id)botTitleString;
- (void)statsTimePeriodPopupChanged:(id)arg1;
- (void)fetchStatsSinceDate:(id)arg1;
- (void)_updateBotStatsBadgesWithStats:(id)arg1;
- (void)refreshUI;
- (void)primitiveInvalidate;
- (void)setIssuesBadgeViewFrameWidth;
- (void)issuesBadgeScrollViewFrameDidChange:(id)arg1;
- (void)loadView;

@end
