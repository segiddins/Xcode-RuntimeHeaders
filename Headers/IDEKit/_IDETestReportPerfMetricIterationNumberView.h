//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTrackingArea;

@interface _IDETestReportPerfMetricIterationNumberView : NSView
{
    NSTrackingArea *_trackingArea;
    BOOL _selected;
    unsigned long long _iterationNumber;
    CDUnknownBlockType _numberClickedCallback;
}

@property(copy) CDUnknownBlockType numberClickedCallback; // @synthesize numberClickedCallback=_numberClickedCallback;
@property unsigned long long iterationNumber; // @synthesize iterationNumber=_iterationNumber;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)drawRect:(struct CGRect)arg1;
- (void)select;
- (void)deselect;

@end

