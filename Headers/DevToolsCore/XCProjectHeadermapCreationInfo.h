//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XCProjectHeadermapCreationInfo : NSObject
{
    struct vector<XC::PathRecord, std::__1::allocator<XC::PathRecord>> _pathTable;
    struct vector<XC::FileRefRecord, std::__1::allocator<XC::FileRefRecord>> _fileRefTable;
    struct vector<XC::TargetRecord, std::__1::allocator<XC::TargetRecord>> _targetTable;
    struct os_unfair_lock_s _lastEvaluatedPathsLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createVFSWithMacroExpansionScope:(id)arg1;
- (id)createProjectHeadermapForTargetID:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)createAllNonFrameworkTargetsHeadermapForTargetID:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)createAllTargetsHeadermapForTargetID:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)createOwnTargetHeadermapForTargetID:(id)arg1 withMacroExpansionScope:(id)arg2;
- (void)enumerateProjectHeadersWithMacroExpansionScope:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTargetHeadersForPrimaryTargetID:(id)arg1 withMacroExpansionScope:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)expandedProjectHeadermapFilePathsWithMacroExpansionScope:(id)arg1;
- (void)dealloc;
- (void)dumpDebugOutput;
- (id)initForProject:(id)arg1;

@end

