//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError;

@protocol IDELaunchSessionEventSourceEvents
- (void)launchSessionExpired;
- (void)launchSessionGotPID:(int)arg1;
- (void)launchSessionEncounteredAlertError:(NSError *)arg1;
- (void)launchSessionStarted;
@end

