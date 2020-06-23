//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTAnalyticsPointAbstractClass;
@protocol DVTAnalyticsLogProtocol;

@protocol DVTAnalyticsPointSymbolicatorProtocol
@property(readonly) id <DVTAnalyticsLogProtocol> unsymbolicatedAnalyticsLog;
@property(readonly) DVTAnalyticsPointAbstractClass *analyticsPoint;
- (void)updateAnalyticsPoint:(DVTAnalyticsPointAbstractClass *)arg1 withSymbolicatedAnalyticsLog:(id <DVTAnalyticsLogProtocol>)arg2;
- (id)initWithAnalyticsPoint:(DVTAnalyticsPointAbstractClass *)arg1 unsymbolicatedAnalyticsLog:(id <DVTAnalyticsLogProtocol>)arg2;
@end
