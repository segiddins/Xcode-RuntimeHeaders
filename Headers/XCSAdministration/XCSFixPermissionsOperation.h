//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@interface XCSFixPermissionsOperation : XCSInitializationOperation
{
    BOOL _shouldFixAll;
}

@property(nonatomic) BOOL shouldFixAll; // @synthesize shouldFixAll=_shouldFixAll;
- (BOOL)configurePath:(id)arg1 owner:(id)arg2 group:(id)arg3 permissions:(unsigned long long)arg4 recursive:(BOOL)arg5 error:(id *)arg6;
- (BOOL)configurePath:(id)arg1 owner:(id)arg2 group:(id)arg3 permissions:(unsigned long long)arg4 error:(id *)arg5;
- (id)logFile:(id)arg1;
- (BOOL)fixPermissions:(id *)arg1;
- (void)run;
- (id)statusDescription;

@end

