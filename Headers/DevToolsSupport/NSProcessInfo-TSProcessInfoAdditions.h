//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProcessInfo.h>

@class NSString;

@interface NSProcessInfo (TSProcessInfoAdditions)
- (unsigned long long)cacheLineSize;
- (unsigned long long)numberOfAvailableCPUs;
- (id)nativeArchitecture64BitEquivalent;
- (id)nativeArchitecture32BitEquivalent;
- (id)nativeArchitectureActualName;
- (id)hostPlatformCanonicalName;
- (id)pathSeparator;
- (id)searchPathSeparator;
- (id)programSearchPathVariable;
- (id)dllImageSuffixVariable;
- (id)dllSearchPathVariable;
- (id)frameworkSearchPathVariable;
- (id)bourneShellPath;
- (id)localProgramsPath;
- (id)xcodeProductBuildVersion;
- (id)xcodeActualVersion;
- (id)xcodeMinorVersion;
- (id)xcodeMajorVersion;
- (id)buildMachineActualOSVersion;
- (id)buildMachineMajorOSVersion;
@property(readonly) NSString *buildMachineOSProductBuildVersion;
- (void)_populateVersionStrings;
- (id)systemVersionNumber;
- (void)addNewPath:(id)arg1 toVariable:(id)arg2 inEnvironmentDictionary:(id)arg3 placeInFrontOfExistingPath:(BOOL)arg4;
@end

