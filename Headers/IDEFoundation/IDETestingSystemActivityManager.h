//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDETestingSystemActivityManager : NSObject
{
    unsigned int _systemSleepAssertion;
    unsigned int _displaySleepAssertion;
    unsigned int _systemSleepAssertionCount;
    unsigned int _displaySleepAssertionCount;
    unsigned int _screenSaverAssertionCount;
}

+ (BOOL)_setScreenSaverSuppressed:(BOOL)arg1 error:(id *)arg2;
+ (unsigned int)_acquireDisplaySleepAssertionWithDescription:(id)arg1 error:(id *)arg2;
+ (unsigned int)_acquireSystemSleepAssertionWithDescription:(id)arg1 error:(id *)arg2;
+ (id)sharedManager;
+ (void)initialize;
- (void)_allowScreenSaver;
- (id)disallowScreenSaver:(id *)arg1;
- (void)_allowDisplaySleep;
- (id)disallowDisplaySleepWithDescription:(id)arg1 error:(id *)arg2;
- (void)_allowSystemSleep;
- (id)disallowSystemSleepWithDescription:(id)arg1 error:(id *)arg2;
- (id)init;

@end

