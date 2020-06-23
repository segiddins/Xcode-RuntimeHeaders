//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEPlaygroundExecutionDeviceService, IDEPlaygroundRemoteViewController, NSString, NSView;

@interface IDEPlaygroundLaunchDescriptor : NSObject <DVTInvalidation>
{
    int _pid;
    IDEPlaygroundExecutionDeviceService *_deviceService;
    IDEPlaygroundRemoteViewController *_remoteViewController;
    NSView *_targetView;
}

+ (void)initialize;
@property(readonly) NSView *targetView; // @synthesize targetView=_targetView;
@property(retain) IDEPlaygroundRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain) IDEPlaygroundExecutionDeviceService *deviceService; // @synthesize deviceService=_deviceService;
@property int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithProcessIdentifier:(int)arg1 deviceService:(id)arg2 remoteViewController:(id)arg3 targetView:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

