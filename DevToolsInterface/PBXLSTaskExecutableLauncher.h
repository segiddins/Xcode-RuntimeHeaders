//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXLSExecutableLauncher.h>

#import <DevToolsInterface/PBXTSTaskDelegate-Protocol.h>

@class NSArray, NSString, PBXTSPTYDeviceByteStream, PBXTSTask;

@interface PBXLSTaskExecutableLauncher : PBXLSExecutableLauncher <PBXTSTaskDelegate>
{
    PBXTSTask *_task;
    PBXTSPTYDeviceByteStream *_ptyStream;
    NSArray *_preferredArchitectures;
}

+ (void)initialize;
- (BOOL)supportsCrashCatching;
- (id)byteStreamConsumerToExecutable;
- (id)byteStreamFromExecutable;
- (id)byteStreamConsumerToTask;
- (id)byteStreamFromTask;
- (void)userInterfaceWillBeRemoved;
- (int)executablePlatformExitInformation;
- (int)executableTerminationStatus;
- (int)executableProcessID;
- (int)taskProcessID;
- (id)task;
- (id)taskPath;
- (id)taskDirectory;
- (id)taskEnvironment;
- (id)taskArguments;
- (void)task:(id)arg1 outputData:(id)arg2;
- (void)taskDidStop:(id)arg1 stopRequested:(BOOL)arg2;
- (void)taskDidStart:(id)arg1;
- (void)adaptorsSetTaskIsRunning:(BOOL)arg1;
- (void)task:(id)arg1 failureMessage:(id)arg2;
- (void)taskConfigureExecutionContext;
- (void)taskConfigureStdIO;
- (void)taskAllocate;
- (void)setPreferredArchitectures:(id)arg1;
- (id)preferredArchitectures;
- (void)cleanup;
- (void)stopImmediately;
- (void)stop;
- (void)launchAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)activeArchIsValidForLaunch;
- (BOOL)supportsRosetta;
- (BOOL)disableArchCheck;
- (BOOL)cpuSupports64Bit;
- (BOOL)launch;
- (void)setupLauncher;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

