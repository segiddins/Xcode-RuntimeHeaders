//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/Xcode3TargetCoordinator.h>

#import <DevToolsCore/IDEBuildSettingsCoordination-Protocol.h>

@class DVTNotificationToken, DVTStackBacktrace, IDEBuildParameters, NSString, PBXTarget;

@interface Xcode3TargetBuildSettingsCoordinator : Xcode3TargetCoordinator <IDEBuildSettingsCoordination>
{
    DVTNotificationToken *_targetBuildSettingsChangeNotificationToken;
    PBXTarget *_pbxTarget;
    IDEBuildParameters *_buildParameters;
}

@property(retain, nonatomic) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
@property(retain, nonatomic) PBXTarget *pbxTarget; // @synthesize pbxTarget=_pbxTarget;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forBuildSettingsKey:(id)arg2;
- (id)expandedValueForString:(id)arg1;
- (BOOL)boolValueForBuildSetting:(id)arg1 buildParameters:(id)arg2;
@property(readonly) IDEBuildParameters *iOSMacBuildParameters;
- (id)evaluatedStringValueForBuildSetting:(id)arg1;
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

