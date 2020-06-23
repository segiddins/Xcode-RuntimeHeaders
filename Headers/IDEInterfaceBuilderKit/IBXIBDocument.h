//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocument.h>

@interface IBXIBDocument : IBDocument
{
}

+ (Class)metricsInferrerClass;
+ (Class)libraryAssetProviderClassForIdiom:(id)arg1;
+ (int)libraryInclusionStatusForExternalPrimarySceneObject;
+ (int)libraryInclusionStatusForContainerView;
+ (BOOL)supportsPrototypeObjects;
- (id)firstResponderForConnectingToObject:(id)arg1;
- (BOOL)shouldPreserveWrapperContentsWhenWritingToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4;
- (id)hybridPackageEditableDocumentFilename;
- (Class)compilerClass;
- (id)allIntrinsicPackageContentFileNames;
- (id)archivingSchema;
- (id)hybridPackageType;
- (id)preferredFileType;
- (BOOL)canHaveMultipleTopLevelObjectsInLaunchScreen;
- (BOOL)supportsUserDefinedRuntimeAttributesForObject:(id)arg1;
- (BOOL)isObjectBuiltInPlaceholder:(id)arg1;
- (id)connectToSourceCandidatesForConnectingToObject:(id)arg1 preferredCandidates:(id *)arg2;
- (id)connectToSourceFileOwnershipObjectForConnectingToObject:(id)arg1 relativeTopLevelObjects:(id *)arg2;
- (BOOL)isDocumentLifeCycleManagementObject:(id)arg1;
- (void)documentUnarchiver:(id)arg1 willUnarchiveObject:(id)arg2;
- (void)documentArchiver:(id)arg1 didArchiveObject:(id)arg2;
- (BOOL)usesDocumentArchiver;
- (id)verifier;
- (id)classNamesForForcingPersistenceOfClassDescriptions;
- (void)classDescriber:(id)arg1 didModifyClasses:(id)arg2;
- (double)automaticGeniusResultScoreForObject:(id)arg1 givenSelectedObject:(id)arg2;
- (BOOL)isObjectCandidateForAutomaticGeniusResults:(id)arg1 givenSelectedObject:(id)arg2;
- (id)fallbackControllersForSelectedMemberIDs:(id)arg1;
- (id)primaryControllerForGeniusFinder;
- (id)filesOwner;
- (id)firstResponder;
- (id)initWithType:(id)arg1 targetRuntime:(id)arg2 transientPasteboardDocument:(BOOL)arg3 enableAutomaticAutolayoutStatusUpdating:(BOOL)arg4 error:(id *)arg5;
- (BOOL)supportedInferredMetricsPriorToXcode6;

@end

