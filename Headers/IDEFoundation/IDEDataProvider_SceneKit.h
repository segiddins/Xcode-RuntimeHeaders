//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDataProvider.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IDEDataProvider_SceneKit : IDEDataProvider
{
    NSObject<OS_dispatch_queue> *_capture_lock;
    NSMutableDictionary *_collectionStartedForPidDictionary;
}

+ (id)sharedDataProvider;
- (void).cxx_destruct;
- (id)captureAttributes:(id)arg1 forPIDs:(id)arg2;
- (id)stopSamplingForPIDs:(id)arg1;
- (BOOL)captureShadersToDictionary:(id)arg1 forPID:(id)arg2;
- (BOOL)captureAttributes:(id)arg1 toDictionary:(id)arg2 forPID:(id)arg3;
- (id)startSamplingForPIDs:(id)arg1;
- (id)supportedAttributes;
- (id)init;

@end

