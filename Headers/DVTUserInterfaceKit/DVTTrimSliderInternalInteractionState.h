//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTTrimSliderInternalInteractionState : NSObject
{
    double _dragCurrentLocation;
    double _dragStartLocation;
    long long _handleStartPosition;
}

@property long long handleStartPosition; // @synthesize handleStartPosition=_handleStartPosition;
@property double dragStartLocation; // @synthesize dragStartLocation=_dragStartLocation;
@property double dragCurrentLocation; // @synthesize dragCurrentLocation=_dragCurrentLocation;
- (double)currentDragOffset;

@end
