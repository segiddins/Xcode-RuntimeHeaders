//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTConsoleLogger.h>

@interface IDEDistributionConsoleLogger : DVTConsoleLogger
{
    int _exclusiveLogLevel;
}

@property(readonly) int exclusiveLogLevel; // @synthesize exclusiveLogLevel=_exclusiveLogLevel;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(int)arg3;
- (id)initWithExclusiveLogLevel:(int)arg1;

@end

