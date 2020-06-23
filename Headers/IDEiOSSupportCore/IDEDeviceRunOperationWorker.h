//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDERunOperationWorker.h>

@class DVTObservingToken;

@interface IDEDeviceRunOperationWorker : IDERunOperationWorker
{
    DVTObservingToken *_passcodeLockedToken;
    DVTObservingToken *_availabilityToken;
}

- (void).cxx_destruct;
- (id)_cancellableErrorWithError:(id)arg1 observingToken:(id)arg2;
- (id)_targetDevice;
- (void)primitiveInvalidate;
- (BOOL)preflightDeviceIsAvailableWithError:(id *)arg1 recoverable:(char *)arg2 retrying:(BOOL)arg3;
- (BOOL)preflightDeviceIsUnlockedWithError:(id *)arg1 recoverable:(char *)arg2;

@end

