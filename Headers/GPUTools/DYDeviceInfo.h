//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUTools/NSSecureCoding-Protocol.h>

@class DYGPUToolsVersionInfo, NSArray, NSString;

@interface DYDeviceInfo : NSObject <NSSecureCoding>
{
    int _platform;
    unsigned int _nativePointerSize;
    unsigned long long _runtimeIdentifier;
    NSString *_permanentIdentifier;
    NSString *_name;
    NSString *_productType;
    NSString *_hostProductType;
    NSString *_version;
    NSString *_hostVersion;
    NSString *_build;
    NSString *_metalVersion;
    DYGPUToolsVersionInfo *_gputoolsVersionInfo;
    NSArray *_supportedGraphicsAPIInfos;
    CDStruct_e4c1f684 _mainScreenDescriptor;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned int)defaultNativePointerSize;
+ (BOOL)isSimulatorPlatform:(int)arg1;
@property(retain, nonatomic) NSArray *supportedGraphicsAPIInfos; // @synthesize supportedGraphicsAPIInfos=_supportedGraphicsAPIInfos;
@property(nonatomic) CDStruct_e4c1f684 mainScreenDescriptor; // @synthesize mainScreenDescriptor=_mainScreenDescriptor;
@property(retain, nonatomic) DYGPUToolsVersionInfo *gputoolsVersionInfo; // @synthesize gputoolsVersionInfo=_gputoolsVersionInfo;
@property(nonatomic) unsigned int nativePointerSize; // @synthesize nativePointerSize=_nativePointerSize;
@property(retain, nonatomic) NSString *metalVersion; // @synthesize metalVersion=_metalVersion;
@property(retain, nonatomic) NSString *build; // @synthesize build=_build;
@property(retain, nonatomic) NSString *hostVersion; // @synthesize hostVersion=_hostVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *hostProductType; // @synthesize hostProductType=_hostProductType;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *permanentIdentifier; // @synthesize permanentIdentifier=_permanentIdentifier;
@property(nonatomic) unsigned long long runtimeIdentifier; // @synthesize runtimeIdentifier=_runtimeIdentifier;
@property(nonatomic) int platform; // @synthesize platform=_platform;
- (BOOL)supportsCapabilitiesOfGraphicsAPI:(id)arg1 allowedClass:(Class)arg2;
- (BOOL)versionIsOlderThan:(id)arg1;
@property(readonly, nonatomic) BOOL isEmbeddedPlatform;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

