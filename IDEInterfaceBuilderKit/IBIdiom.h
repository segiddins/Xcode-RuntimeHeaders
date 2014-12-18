//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBScopedSingleton.h"

@class NSString;

@interface IBIdiom : NSObject <IBScopedSingleton>
{
}

+ (id)idiomForCompilerTargetDeviceIdentifier:(id)arg1;
+ (id)instanceWithIdentifier:(id)arg1;
+ (id)allInstances;
+ (id)sharedInstance;
- (id)backwardsDeploymentConfiguration;
- (id)designatedIdiomForConfigurations;
- (id)stringByAppendingIdiomSuffixToPath:(id)arg1;
- (id)resourceFileNameSuffix;
- (id)compilerTargetDeviceIdentifier;
- (id)unsupportedSegueClasses;
- (double)defaultOverviewZoomFactor;
- (Class)xibAssetProviderClass;
- (Class)storyboardAssetProviderClass;
- (id)icon;
- (id)idiomName;
- (id)identifier;
- (void)didRegisterSharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

