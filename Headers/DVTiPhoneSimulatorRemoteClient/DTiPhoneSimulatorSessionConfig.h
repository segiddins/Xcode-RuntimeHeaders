//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTiPhoneSimulatorRemoteClient/NSCopying-Protocol.h>

@class DTiPhoneSimulatorApplicationSpecifier, NSArray, NSDictionary, NSFileHandle, NSNumber, NSString, SimDevice;

@interface DTiPhoneSimulatorSessionConfig : NSObject <NSCopying>
{
    BOOL _shouldInstallApplicationToSimulate;
    BOOL _simulatedApplicationShouldWaitForDebugger;
    BOOL _launchForBackgroundFetch;
    SimDevice *_device;
    NSString *_simulatedArchitecture;
    DTiPhoneSimulatorApplicationSpecifier *_applicationToSimulateOnStart;
    NSNumber *_pid;
    NSArray *_simulatedApplicationLaunchArgs;
    NSDictionary *_simulatedApplicationLaunchEnvironment;
    NSString *_simulatedApplicationStdOutPath;
    NSString *_simulatedApplicationStdErrPath;
    NSFileHandle *_stdinFileHandle;
    NSFileHandle *_stdoutFileHandle;
    NSFileHandle *_stderrFileHandle;
}

+ (id)displayNameForDeviceFamily:(id)arg1;
@property BOOL launchForBackgroundFetch; // @synthesize launchForBackgroundFetch=_launchForBackgroundFetch;
@property(retain) NSFileHandle *stderrFileHandle; // @synthesize stderrFileHandle=_stderrFileHandle;
@property(retain) NSFileHandle *stdoutFileHandle; // @synthesize stdoutFileHandle=_stdoutFileHandle;
@property(retain) NSFileHandle *stdinFileHandle; // @synthesize stdinFileHandle=_stdinFileHandle;
@property(copy) NSString *simulatedApplicationStdErrPath; // @synthesize simulatedApplicationStdErrPath=_simulatedApplicationStdErrPath;
@property(copy) NSString *simulatedApplicationStdOutPath; // @synthesize simulatedApplicationStdOutPath=_simulatedApplicationStdOutPath;
@property BOOL simulatedApplicationShouldWaitForDebugger; // @synthesize simulatedApplicationShouldWaitForDebugger=_simulatedApplicationShouldWaitForDebugger;
@property(copy) NSDictionary *simulatedApplicationLaunchEnvironment; // @synthesize simulatedApplicationLaunchEnvironment=_simulatedApplicationLaunchEnvironment;
@property(copy) NSArray *simulatedApplicationLaunchArgs; // @synthesize simulatedApplicationLaunchArgs=_simulatedApplicationLaunchArgs;
@property(copy) NSNumber *pid; // @synthesize pid=_pid;
@property BOOL shouldInstallApplicationToSimulate; // @synthesize shouldInstallApplicationToSimulate=_shouldInstallApplicationToSimulate;
@property(copy) DTiPhoneSimulatorApplicationSpecifier *applicationToSimulateOnStart; // @synthesize applicationToSimulateOnStart=_applicationToSimulateOnStart;
@property(copy) NSString *simulatedArchitecture; // @synthesize simulatedArchitecture=_simulatedArchitecture;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) SimDevice *device; // @synthesize device=_device;
@property(readonly, copy) NSDictionary *toolSpawnOptions;
@property(readonly, copy) NSDictionary *appLaunchOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

