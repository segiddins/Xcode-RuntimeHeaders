//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class NSImage, NSImageView, NSString, NSTextField, NSView, XCSUIBotIntegrationTestPopoverBadgesView;

@interface XCSUIBotIntegrationTestPopoverViewController : DVTViewController
{
    NSString *_integrationTitle;
    NSString *_timestamp;
    NSString *_testsSuccessText;
    NSString *_testsFailedText;
    unsigned long long _testsPassedCount;
    unsigned long long _testsFailedCount;
    CDUnknownBlockType _clickHandler;
    NSImage *_testsFailedIcon;
    NSImage *_testsSucceededIcon;
    NSView *_testCountsHostView;
    NSImageView *_integrationFailedImageView;
    XCSUIBotIntegrationTestPopoverBadgesView *_countsView;
    NSTextField *_integrationTextField;
}

- (void).cxx_destruct;
@property __weak NSTextField *integrationTextField; // @synthesize integrationTextField=_integrationTextField;
@property __weak XCSUIBotIntegrationTestPopoverBadgesView *countsView; // @synthesize countsView=_countsView;
@property __weak NSImageView *integrationFailedImageView; // @synthesize integrationFailedImageView=_integrationFailedImageView;
@property __weak NSView *testCountsHostView; // @synthesize testCountsHostView=_testCountsHostView;
@property(retain) NSImage *testsSucceededIcon; // @synthesize testsSucceededIcon=_testsSucceededIcon;
@property(retain) NSImage *testsFailedIcon; // @synthesize testsFailedIcon=_testsFailedIcon;
@property(copy) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
@property unsigned long long testsFailedCount; // @synthesize testsFailedCount=_testsFailedCount;
@property unsigned long long testsPassedCount; // @synthesize testsPassedCount=_testsPassedCount;
@property(copy) NSString *testsFailedText; // @synthesize testsFailedText=_testsFailedText;
@property(copy) NSString *testsSuccessText; // @synthesize testsSuccessText=_testsSuccessText;
@property(copy) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy) NSString *integrationTitle; // @synthesize integrationTitle=_integrationTitle;
- (void)updateBadges;
- (void)showIntegrationTestsResults:(id)arg1;
- (void)showOrHideIntegrationFailedControls:(BOOL)arg1;
- (void)loadView;

@end

