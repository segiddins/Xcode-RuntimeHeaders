//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IDEInfoPlistCoordination;

@interface IDEiOSInfoPlistIconAdapter : NSObject
{
    NSString *_modifier;
    id <IDEInfoPlistCoordination> _coordinator;
}

+ (BOOL)testPresenceUsingInfoPlistCoordinator:(id)arg1 deviceModifier:(id)arg2;
+ (int)adapterType;
+ (Class)infoPlistValueClass;
+ (id)infoPlistKey;
+ (id)adapterUsingInfoPlistCoordinator:(id)arg1 deviceModifier:(id)arg2 type:(int)arg3 targetDeploymentOS:(id)arg4;
+ (id)_appIconAdapterSubclassesOrderedPreferentially;
- (void).cxx_destruct;
@property(readonly) __weak id <IDEInfoPlistCoordination> coordinator; // @synthesize coordinator=_coordinator;
@property(readonly) NSString *modifier; // @synthesize modifier=_modifier;
- (void)deleteImagesInPlist;
- (id)imageBaseNamesForRow:(id)arg1;
- (void)addImageBaseName:(id)arg1 forFilePath:(id)arg2 forRow:(id)arg3;
- (BOOL)requiresBaseImageNameForRow:(id)arg1;
- (void)setInfoPlistValue:(id)arg1;
- (id)infoPlistValue;
- (id)initWithInfoPlistCoordinator:(id)arg1 deviceModifier:(id)arg2;

// Remaining properties
@property BOOL applyShineEffect; // @dynamic applyShineEffect;

@end

