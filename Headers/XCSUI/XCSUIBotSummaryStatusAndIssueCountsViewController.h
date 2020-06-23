//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class NSPopUpButton, NSProgressIndicator, NSTextField, NSView, XCSBot, XCSUIBotSummaryStatsFetcher, XCSUIStatusBadge, XCSUIStatusBadgesView;

@interface XCSUIBotSummaryStatusAndIssueCountsViewController : DVTViewController
{
    XCSUIStatusBadge *_totalIntegrationsBadge;
    XCSUIStatusBadge *_successRateBadge;
    XCSUIStatusBadge *_commitsBadge;
    XCSUIStatusBadge *_newTestsBadge;
    XCSUIStatusBadge *_coverageDeltaBadge;
    XCSUIBotSummaryStatsFetcher *_statsFetcher;
    id _frameChangeToken;
    XCSBot *_bot;
    NSView *_detailsAndSummaryView;
    NSTextField *_scheduleLabel;
    NSTextField *_cleanLabel;
    NSTextField *_lastIntegrationDateLabel;
    NSTextField *_latestStatusLabel;
    NSTextField *_lastSucceededLabel;
    XCSUIStatusBadgesView *_issuesBadgeView;
    NSPopUpButton *_statsTimePeriodPopUpButton;
    NSProgressIndicator *_statsLoadingProgressView;
}

- (void).cxx_destruct;
@property __weak NSProgressIndicator *statsLoadingProgressView; // @synthesize statsLoadingProgressView=_statsLoadingProgressView;
@property __weak NSPopUpButton *statsTimePeriodPopUpButton; // @synthesize statsTimePeriodPopUpButton=_statsTimePeriodPopUpButton;
@property __weak XCSUIStatusBadgesView *issuesBadgeView; // @synthesize issuesBadgeView=_issuesBadgeView;
@property __weak NSTextField *lastSucceededLabel; // @synthesize lastSucceededLabel=_lastSucceededLabel;
@property __weak NSTextField *latestStatusLabel; // @synthesize latestStatusLabel=_latestStatusLabel;
@property __weak NSTextField *lastIntegrationDateLabel; // @synthesize lastIntegrationDateLabel=_lastIntegrationDateLabel;
@property __weak NSTextField *cleanLabel; // @synthesize cleanLabel=_cleanLabel;
@property __weak NSTextField *scheduleLabel; // @synthesize scheduleLabel=_scheduleLabel;
@property __weak NSView *detailsAndSummaryView; // @synthesize detailsAndSummaryView=_detailsAndSummaryView;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
- (void)statsTimePeriodPopupChanged:(id)arg1;
- (void)fetchStatsSinceDate:(id)arg1;
- (void)_updateBotStatsBadgesWithStats:(id)arg1;
- (void)refreshUI;
- (void)primitiveInvalidate;
- (void)viewDidLoad;
- (void)loadView;

@end

