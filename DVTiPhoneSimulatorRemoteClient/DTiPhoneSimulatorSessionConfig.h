//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTiPhoneSimulatorRemoteClient/NSCopying-Protocol.h>

@class DTiPhoneSimulatorApplicationSpecifier, DTiPhoneSimulatorSystemRoot, DVTSimulatorApplication, NSArray, NSDictionary, NSFileHandle, NSNumber, NSString, SimDevice, SimRuntime;

@interface DTiPhoneSimulatorSessionConfig : NSObject <NSCopying>
{
    BOOL _shouldInstallApplicationToSimulate;
    BOOL _simulatedApplicationShouldWaitForDebugger;
    BOOL _launchForBackgroundFetch;
    SimDevice *_device;
    SimRuntime *_runtime;
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
    long long _externalDisplayType;
    NSString *_simulatedDeviceInfoName;
    NSString *_localizedClientName;
    DTiPhoneSimulatorSystemRoot *_simulatedSystemRoot;
    NSNumber *_simulatedDeviceFamily;
    NSNumber *_simulatedDisplayHeight;
    NSNumber *_simulatedDisplayScale;
}

+ (id)displayNameForDeviceFamily:(id)arg1;
@property(copy) NSNumber *simulatedDisplayScale; // @synthesize simulatedDisplayScale=_simulatedDisplayScale;
@property(copy) NSNumber *simulatedDisplayHeight; // @synthesize simulatedDisplayHeight=_simulatedDisplayHeight;
@property(copy) NSNumber *simulatedDeviceFamily; // @synthesize simulatedDeviceFamily=_simulatedDeviceFamily;
@property(retain, nonatomic) DTiPhoneSimulatorSystemRoot *simulatedSystemRoot; // @synthesize simulatedSystemRoot=_simulatedSystemRoot;
@property(copy) NSString *localizedClientName; // @synthesize localizedClientName=_localizedClientName;
@property(copy, nonatomic) NSString *simulatedDeviceInfoName; // @synthesize simulatedDeviceInfoName=_simulatedDeviceInfoName;
@property long long externalDisplayType; // @synthesize externalDisplayType=_externalDisplayType;
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
@property(retain, nonatomic) SimRuntime *runtime; // @synthesize runtime=_runtime;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) DVTSimulatorApplication *simulatorApplication;
@property(retain, nonatomic) SimDevice *device; // @synthesize device=_device;
@property(readonly, copy) NSDictionary *toolSpawnOptions;
@property(readonly, copy) NSDictionary *appLaunchOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

