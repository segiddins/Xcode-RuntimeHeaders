//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTCapacityView.h>

@class DVTCircularCapacityViewController, NSAttributedString;

@interface DVTCircularCapacityView : DVTCapacityView
{
    struct CGPoint _center;
    double _radius;
    BOOL _useDonutStyle;
    BOOL _leaveRemainderEmpty;
    NSAttributedString *_donutCenterText;
    double _ringWidth;
    DVTCircularCapacityViewController *_controller;
}

- (void).cxx_destruct;
@property __weak DVTCircularCapacityViewController *controller; // @synthesize controller=_controller;
@property double ringWidth; // @synthesize ringWidth=_ringWidth;
@property(retain) NSAttributedString *donutCenterText; // @synthesize donutCenterText=_donutCenterText;
@property BOOL leaveRemainderEmpty; // @synthesize leaveRemainderEmpty=_leaveRemainderEmpty;
@property BOOL useDonutStyle; // @synthesize useDonutStyle=_useDonutStyle;
- (void)drawRect:(struct CGRect)arg1;
- (double)_drawSegmentValue:(double)arg1 color:(id)arg2 startAngle:(double)arg3;

@end

