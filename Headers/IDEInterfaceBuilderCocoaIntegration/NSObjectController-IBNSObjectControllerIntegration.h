//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObjectController.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface NSObjectController (IBNSObjectControllerIntegration) <IBDocumentArchiving>
+ (id)keyPathsForValuesAffectingIbShadowedUsingManagedProxy;
+ (id)ibDynamicShadowedKeyPathsToTypes;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (void)ibAwakeInDocument:(id)arg1;
- (void)ibPullExternalPredicateFormatInDocument:(id)arg1;
@property(copy) NSString *ibExternalFetchPredicateFormat;
- (id)ibControlledObjectClassKey;
- (id)ibControlledObjectClassName;
- (BOOL)ibAcceptsBindingsValidation;
@property long long ibArchivedControllerMode;
- (void)setIbShadowedUsingManagedProxy:(BOOL)arg1;
- (BOOL)ibShadowedUsingManagedProxy;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibResolvedTypeNameForControllerKey:(id)arg1;
- (id)ibDocumentationSymbolInfosForKeyPath:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property BOOL ibShadowedAutomaticallyPreparesContent; // @dynamic ibShadowedAutomaticallyPreparesContent;
@property BOOL ibShadowedEditable; // @dynamic ibShadowedEditable;
@property(copy) NSString *ibShadowedEntityName; // @dynamic ibShadowedEntityName;
@property(copy) NSString *ibShadowedObjectClassName; // @dynamic ibShadowedObjectClassName;
@property BOOL ibShadowedUsesLazyFetching; // @dynamic ibShadowedUsesLazyFetching;
@property(readonly) Class superclass;
@end

