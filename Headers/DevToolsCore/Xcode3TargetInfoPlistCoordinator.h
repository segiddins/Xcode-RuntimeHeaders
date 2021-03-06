//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/Xcode3TargetCoordinator.h>

#import <DevToolsCore/IDEInfoPlistCoordination-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, NSDictionary, NSString, PBXTarget;

@interface Xcode3TargetInfoPlistCoordinator : Xcode3TargetCoordinator <IDEInfoPlistCoordination>
{
    BOOL _infoPlistFileExists;
    BOOL _targetInfoPlistFileExists;
    PBXTarget *_pbxTarget;
    NSDictionary *_infoPlistDictionary;
    DVTFilePath *_infoPlistFilePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DVTFilePath *infoPlistFilePath; // @synthesize infoPlistFilePath=_infoPlistFilePath;
@property(retain, nonatomic) NSDictionary *infoPlistDictionary; // @synthesize infoPlistDictionary=_infoPlistDictionary;
@property BOOL targetInfoPlistFileExists; // @synthesize targetInfoPlistFileExists=_targetInfoPlistFileExists;
@property(readonly) PBXTarget *pbxTarget; // @synthesize pbxTarget=_pbxTarget;
@property(readonly, nonatomic) BOOL infoPlistFileExists; // @synthesize infoPlistFileExists=_infoPlistFileExists;
- (void)removeValue:(id)arg1 fromArrayForPlistSetting:(id)arg2;
- (void)addValue:(id)arg1 toArrayForPlistSetting:(id)arg2;
- (void)setValue:(id)arg1 forPlistSetting:(id)arg2;
- (id)valueForPlistSetting:(id)arg1 ofType:(Class)arg2;
- (id)valueForPlistSetting:(id)arg1;
- (void)removeRequiredCapabilityWithKey:(id)arg1;
- (void)addRequiredCapabilityWithKey:(id)arg1;
- (BOOL)requiredCapabilitiesStateForKey:(id)arg1;
- (void)removePlistSetting:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1 buildConfiguration:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

