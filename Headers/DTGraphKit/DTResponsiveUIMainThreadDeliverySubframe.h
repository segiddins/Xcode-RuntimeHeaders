//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTResponsiveUISubframe.h>

@interface DTResponsiveUIMainThreadDeliverySubframe : DTResponsiveUISubframe
{
    unsigned long long _missesDetected;
}

+ (unsigned int)_activityQoS;
+ (BOOL)enableConcurrentActivities;
- (void)yieldingMinorFrame:(unsigned char)arg1;
- (void)enteringMinorFrame:(unsigned char)arg1;
- (int)agentStopDiagnosticsTypeCode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithRing:(id)arg1 context:(id)arg2;

@end

