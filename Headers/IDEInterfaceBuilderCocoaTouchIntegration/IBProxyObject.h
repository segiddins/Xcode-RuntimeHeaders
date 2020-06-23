//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBExternalReferencePlaceholder-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class IBCocoaTouchTargetRuntime, NSString;

@interface IBProxyObject : NSObject <IBDocumentArchiving, NSCoding, IBExternalReferencePlaceholder>
{
    NSString *_proxiedObjectIdentifier;
    IBCocoaTouchTargetRuntime *_targetRuntime;
}

+ (id)externalReferenceWithIdentifier:(id)arg1 targetRuntime:(id)arg2;
+ (void)ibPopulateAdditionalInspectorSlices:(id)arg1 forCategory:(id)arg2;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (int)ibLibraryInclusionStatusForTargetRuntime:(id)arg1 andDocumentClass:(Class)arg2 assetIdentifier:(id)arg3;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(copy, nonatomic) NSString *proxiedObjectIdentifier; // @synthesize proxiedObjectIdentifier=_proxiedObjectIdentifier;
@property(copy) NSString *externalReferenceIdentifier;
@property(readonly, copy) NSString *description;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (BOOL)ibTopLevelSceneObjectWantsInclusionInCompiledStoryboard;
- (BOOL)ibIsPlaceholder;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibIsInspectorSliceApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibRuntimeClassName;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)isFirstResponder;
- (BOOL)isFilesOwner;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

