//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEProductsUI/DVTAnalyticsPointChartScaffoldView.h>

@class NSPopUpButton;

@interface DVTAnalyticsPointChartSwitcherView : DVTAnalyticsPointChartScaffoldView
{
    BOOL _showDeviceTypeOption;
    CDUnknownBlockType _switcherCallback;
    NSPopUpButton *_switcher;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL showDeviceTypeOption; // @synthesize showDeviceTypeOption=_showDeviceTypeOption;
@property(retain, nonatomic) NSPopUpButton *switcher; // @synthesize switcher=_switcher;
@property(copy, nonatomic) CDUnknownBlockType switcherCallback; // @synthesize switcherCallback=_switcherCallback;
- (struct CGSize)intrinsicContentSize;
- (void)switchView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
