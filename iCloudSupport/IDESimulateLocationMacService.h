//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESimulateLocationService.h>

#import <iCloudSupport/iCloudMonitorLineProcessor-Protocol.h>

@interface IDESimulateLocationMacService : IDESimulateLocationService <iCloudMonitorLineProcessor>
{
}

- (void)monitor:(id)arg1 didReceiveResponseCode:(unsigned long long)arg2 response:(id)arg3 forToken:(id)arg4 responseContinues:(BOOL)arg5;
- (BOOL)simulateLocationWithLatitude:(id)arg1 longitude:(id)arg2 error:(id *)arg3;
- (BOOL)stopLocationSimulationWithError:(id *)arg1;

@end

