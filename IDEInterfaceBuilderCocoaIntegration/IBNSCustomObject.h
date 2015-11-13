//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBCocoaCustomObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/NSCoding-Protocol.h>

@class NSNumber, NSString;

@interface IBNSCustomObject : NSObject <IBDocumentArchiving, IBCocoaCustomObject, NSCoding>
{
    id _extension;
    NSNumber *_compilationIstantiationBehavior;
    NSString *_className;
}

+ (void)ibPopulateAdditionalInspectors:(id)arg1 forCategory:(id)arg2;
+ (id)keyPathsForValuesAffectingIbExternalCustomClassName;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(copy) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibRuntimeClassName;
- (id)ibExternalCustomClassModule;
- (void)setIbExternalCustomClassModule:(id)arg1;
- (id)ibExternalCustomClassName;
- (void)setIbExternalCustomClassName:(id)arg1;
- (BOOL)ibTopLevelSceneObjectWantsInclusionInCompiledStoryboard;
- (BOOL)ibIsPlaceholder;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)ibShouldUseClassSwapper;
- (BOOL)ibInitializesWithInitWhenUsingClassSwapper;
- (id)ibFallbackClassNameForClassSwapper;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoderWhenNotCompiling;
- (Class)classForCoder;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (BOOL)ibMustCompileWithCustomObjectSemanticsInDocument:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
