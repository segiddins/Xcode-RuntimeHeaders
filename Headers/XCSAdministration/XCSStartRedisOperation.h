//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@interface XCSStartRedisOperation : XCSInitializationOperation
{
}

- (void)undo;
- (id)undoStatusDescription;
- (BOOL)checkServerRespondingWithRetryAttempts:(long long)arg1;
- (id)pingRedisProcess;
- (id)redisPathForTool:(id)arg1;
- (void)run;
- (id)statusDescription;

@end

