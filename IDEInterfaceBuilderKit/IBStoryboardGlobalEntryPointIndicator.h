//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBStoryboardEntryPointIndicator-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class IBTargetRuntime, NSString;
@protocol IBPrimarySceneObject;

@interface IBStoryboardGlobalEntryPointIndicator : NSObject <IBStoryboardEntryPointIndicator, NSCoding>
{
    IBTargetRuntime *_targetRuntime;
    NSObject<IBPrimarySceneObject> *_indicatedEntryPoint;
}

+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
@property(retain, nonatomic) NSObject<IBPrimarySceneObject> *indicatedEntryPoint; // @synthesize indicatedEntryPoint=_indicatedEntryPoint;
@property(retain, nonatomic) IBTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
- (void).cxx_destruct;
- (id)storyboardIndicatedEntryPointKeyPath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (id)init;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)ibIsCopyableGivenSelection:(id)arg1;
- (id)ibTopLevelObjectToSelectInCanvasForDocument:(id)arg1;
- (BOOL)ibTopLevelSceneObjectWantsInclusionInCompiledStoryboard;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibStoryboardEntryPointIndicatorCanvasTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

