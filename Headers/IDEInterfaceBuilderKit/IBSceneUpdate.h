//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBGenericDeviceTypeDescription, IBPerformanceMetric, IBPlatformToolRequester, IBTargetRuntime, NSString;
@protocol IBSceneUpdateRequest;

@interface IBSceneUpdate : NSObject
{
    NSObject *_rootObject;
    IBGenericDeviceTypeDescription *_deviceTypeDescription;
    IBTargetRuntime *_targetRuntime;
    id <IBSceneUpdateRequest> _request;
    NSString *_supersessionIdentifier;
    IBPerformanceMetric *_metric;
    NSString *_pendingRequestID;
    IBPlatformToolRequester *_currentRemoteRequester;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IBPlatformToolRequester *currentRemoteRequester; // @synthesize currentRemoteRequester=_currentRemoteRequester;
@property(copy, nonatomic) NSString *pendingRequestID; // @synthesize pendingRequestID=_pendingRequestID;
@property(retain, nonatomic) IBPerformanceMetric *metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) NSString *supersessionIdentifier; // @synthesize supersessionIdentifier=_supersessionIdentifier;
@property(readonly, nonatomic) id <IBSceneUpdateRequest> request; // @synthesize request=_request;
@property(readonly, nonatomic) IBTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(readonly, nonatomic) IBGenericDeviceTypeDescription *deviceTypeDescription; // @synthesize deviceTypeDescription=_deviceTypeDescription;
@property(readonly, nonatomic) NSObject *rootObject; // @synthesize rootObject=_rootObject;
- (id)description;
- (id)initWithRootObject:(id)arg1 targetRuntime:(id)arg2 deviceTypeDescription:(id)arg3 request:(id)arg4 supersessionIdentifier:(id)arg5;

@end

