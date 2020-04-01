//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUICommandChange.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class NSArray, NSString;

@interface IBUICommandItemInsertion : IBUICommandChange <IBDocumentArchiving>
{
    NSArray *_fallbacks;
    NSArray *_insertsAfter;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(copy, nonatomic) NSArray *insertsAfter; // @synthesize insertsAfter=_insertsAfter;
@property(copy, nonatomic) NSArray *fallbacks; // @synthesize fallbacks=_fallbacks;
- (void).cxx_destruct;
- (void)unarchiveInsertsAfter:(id)arg1;
- (void)archiveInsertsAfter:(id)arg1;
- (void)unarchiveAnchor:(id)arg1;
- (void)archiveAnchor:(id)arg1;
- (void)ibPrepareForCommandDiffCompilationInDocument:(id)arg1;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendToInsertsAfter:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1 anchor:(id)arg2 fallbacks:(id)arg3;
- (id)initWithTargetRuntime:(id)arg1 anchor:(id)arg2;
- (id)initWithTargetRuntime:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

