//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPegasusPlaygroundEditor/PlaygroundDebugBarContentProviderBase.h>

#import <IDEPegasusPlaygroundEditor/DVTDelayedMenuButtonDelegate-Protocol.h>
#import <IDEPegasusPlaygroundEditor/NSMenuDelegate-Protocol.h>
#import <IDEPegasusPlaygroundEditor/NSMenuItemValidation-Protocol.h>

@class MISSING_TYPE, _TtC26IDEPegasusPlaygroundEditor16PlaygroundEditor, _TtC26IDEPegasusPlaygroundEditor18PlaygroundDocument;

__attribute__((visibility("hidden")))
@interface _TtC26IDEPegasusPlaygroundEditor33PlaygroundDebugBarContentProvider : PlaygroundDebugBarContentProviderBase <DVTDelayedMenuButtonDelegate, NSMenuDelegate, NSMenuItemValidation>
{
    MISSING_TYPE *runStopDelayedMenuButton;
    MISSING_TYPE *globalTimeSlider;
    MISSING_TYPE *timeTextField;
    MISSING_TYPE *automaticMenuItem;
    MISSING_TYPE *manualMenuItem;
    MISSING_TYPE *edgeToRunModeSpacer;
    MISSING_TYPE *runModeToSliderSpacer;
    MISSING_TYPE *sliderTimeFieldSpacer;
    MISSING_TYPE *textFieldEdgeSpacer;
    MISSING_TYPE *observers;
}

+ (id)keyPathsForValuesAffectingTimelineScrubberValue;
+ (id)keyPathsForValuesAffectingTimelineScrubberMaxValue;
+ (id)keyPathsForValuesAffectingTimelineScrubberMinValue;
+ (id)keyPathsForValuesAffectingTimelineScrubberShouldUseDefaultValues;
+ (id)keyPathsForValuesAffectingTimelineScrubberShouldBeEnabled;
+ (id)keyPathsForValuesAffectingDocument;
- (void).cxx_destruct;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)globalTimeSliderActionWithSender:(id)arg1;
- (id)delayedMenuButton:(id)arg1 willSetCurrentMenuItem:(id)arg2;
- (void)runStopButtonActionWithSender:(id)arg1;
@property(nonatomic, readonly) BOOL prefersDebugBarToAlwaysBeShown;
- (BOOL)validateMenuItem:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic, readonly) double timelineScrubberValue;
@property(nonatomic, readonly) double timelineScrubberMaxValue;
@property(nonatomic, readonly) double timelineScrubberMinValue;
@property(nonatomic, readonly) BOOL timelineScrubberShouldUseDefaultValues;
@property(nonatomic, readonly) BOOL timelineScrubberShouldBeEnabled;
@property(nonatomic, readonly) _TtC26IDEPegasusPlaygroundEditor18PlaygroundDocument *document;
@property(nonatomic, readonly) _TtC26IDEPegasusPlaygroundEditor16PlaygroundEditor *editor;

@end

