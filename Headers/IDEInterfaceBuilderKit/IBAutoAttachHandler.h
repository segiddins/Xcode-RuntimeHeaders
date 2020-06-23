//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface IBAutoAttachHandler : NSObject
{
    NSNumber *_hostXcodePIDFromEnvironment;
    BOOL _shouldListenForRemoteToolPIDsFromInferior;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL shouldListenForRemoteToolPIDsFromInferior; // @synthesize shouldListenForRemoteToolPIDsFromInferior=_shouldListenForRemoteToolPIDsFromInferior;
- (void).cxx_destruct;
- (void)_waitForHostXcodeToFinishAttachingToRemoteToolWithPID:(int)arg1;
- (void)_postRemoteToolPID:(int)arg1 targetRuntimeIdentifier:(id)arg2 toXcodeWithPID:(int)arg3 runtimeDestinationHint:(id)arg4;
- (void)postRemoteToolPIDToHost:(int)arg1 targetRuntimeIdentifier:(id)arg2 runtimeDestinationHint:(id)arg3;
- (void)_attachToPID:(int)arg1 targetRuntimeIdentifier:(id)arg2 inferiorPID:(int)arg3 runtimeDestinationHint:(id)arg4;
- (id)tabControllerFavoringLaunchSessionWithRunnableDisplayNames:(id)arg1;
- (BOOL)doesTabController:(id)arg1 matchRunnableDisplayNames:(id)arg2;
- (void)enumerateWorkspaceTabControllersDuring:(CDUnknownBlockType)arg1;
- (void)_sendAcknowledgementToInferiorWithPID:(int)arg1 forRemoteToolPID:(int)arg2 didAttachSuccessfully:(BOOL)arg3;
- (void)_THREAD_waitInBlockingLoopForInferiorToWritePIDs;
- (void)startListeningForRemoteToolPIDsFromInferior;
- (id)_hostToInferiorPayloadForRemoteToolPID:(int)arg1 didAttachSuccessfully:(BOOL)arg2;
- (BOOL)_parseInferiorToHostPayload:(id)arg1 returningInferiorPID:(int *)arg2 remoteToolPID:(int *)arg3 targetRuntimeIdentifier:(id *)arg4 runtimeDestinationHint:(id *)arg5;
- (id)_inferiorToHostPayloadForRemoteToolPID:(int)arg1 targetRuntimeIdentifier:(id)arg2 runtimeDestinationHint:(id)arg3 terminateWithPayloadSeparator:(BOOL)arg4;
- (id)nameForPayloadString:(id)arg1;
- (id)payloadStringForName:(id)arg1;
- (id)_sharedReturnPipeNameForInferiorPID:(int)arg1 remoteToolPID:(int)arg2;
- (id)_sharedSendPipeNameForHostXcodePID:(int)arg1;
- (id)_hostXcodePIDFromEnvironment;
- (id)init;

@end

