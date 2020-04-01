//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBIdiom, IBOSVersion, IBPlatform, NSDictionary, NSMutableDictionary, NSSet;
@protocol DVTFontTextFieldDataSource;

@interface IBTargetRuntime : NSObject
{
    NSMutableDictionary *_imageRequestersByDeviceTypeDescription;
    NSMutableDictionary *_sceneUpdateRequesterQueueByDeviceTypeDescription;
    BOOL _installedColorList;
    NSSet *_connectionClasses;
    NSSet *_segueClasses;
    NSDictionary *_segueClassesByClassID;
    IBOSVersion *_osVersion;
}

+ (id)targetRuntimeWithIdentifier:(id)arg1;
@property(readonly, nonatomic) IBOSVersion *osVersion; // @synthesize osVersion=_osVersion;
- (void).cxx_destruct;
- (BOOL)populateEnvironment:(id)arg1 forExecutionContext:(id)arg2 error:(id *)arg3;
- (id)sceneUpdateRequesterWithDeviceTypeDescription:(id)arg1 incrementalUpdateSessionIdentifier:(id)arg2;
- (id)imageRequesterWithDeviceTypeDescription:(id)arg1;
- (id)processingRequestForIncrementallyUpdatingAttribute:(id)arg1 ofObject:(id)arg2 withObjectID:(id)arg3 marshallingContext:(id)arg4;
- (Class)sceneUpdateRequestProcessorClass;
- (Class)imageRequestProcessorClass;
- (id)defaultToolDescriptionWithRole:(long long)arg1 deviceTypeDescription:(id)arg2;
- (id)toolProxyManagerForDeviceTypeDescription:(id)arg1;
- (id)defaultToolProxyManager;
- (id)targetRuntimeAppropriateForPlatformFamily:(id)arg1 error:(id *)arg2;
- (id)nextPreviewableTargetRuntime;
- (id)alternatePreviewableTargetRuntimes;
- (Class)segueClassForClassIdentifier:(id)arg1;
- (id)connectionClasses;
- (id)segueClasses;
@property(readonly) id <DVTFontTextFieldDataSource> fontDataSource;
- (void)installColorListIfNeeded;
- (id)colorList;
- (id)archiveVariantIdentifier;
- (BOOL)isIOSMac;
- (id)archiveIdentifier;
- (id)identifier;
@property(readonly, nonatomic) IBIdiom *idiom;
@property(readonly, nonatomic) IBPlatform *platform;
- (id)debugDescription;
- (id)initWithOSVersion:(id)arg1;
- (id)init;
- (id)targetRuntimeWithIdiom:(id)arg1;

@end

