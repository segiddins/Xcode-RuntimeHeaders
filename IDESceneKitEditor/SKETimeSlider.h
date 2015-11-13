//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSObject, NSSlider, NSTextField, NSTimer;
@protocol SKETimeSliderDataSource;

@interface SKETimeSlider : NSView
{
    NSObject<SKETimeSliderDataSource> *_dataSource;
    NSSlider *_scrubber;
    NSButton *_playPauseButton;
    NSTimer *_refreshTimer;
    NSTextField *_timeLabel;
}

@property(readonly) __weak NSObject<SKETimeSliderDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)userScrubbed:(id)arg1;
- (void)playPauseButtonClicked:(id)arg1;
- (void)_updatePlayPauseButton;
- (void)setNeedsUpdate:(BOOL)arg1;
- (void)_updateTimeDependentUI;
- (void)_updateRefreshTimer;
- (void)stopControl;
- (void)startControlWithDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)timeStringFromTimeInterval:(double)arg1 longForm:(BOOL)arg2;

@end

