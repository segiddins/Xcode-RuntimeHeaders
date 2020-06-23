//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DevToolsCore/DVTFileSystemRepresentationProviding-Protocol.h>
#import <DevToolsCore/DVTMacroExpansion-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, XCBuildInfo, XCDepGraphNodeState, XCDependencyGraph;

@interface XCDependencyNode : NSObject <DVTMacroExpansion, DVTFileSystemRepresentationProviding>
{
    NSString *_name;
    NSString *_path;
    NSMutableArray *_producerCommands;
    NSMutableArray *_includedNodes;
    NSMutableSet *_consumerCommands;
    NSMutableArray *_includingNodes;
    XCBuildInfo *_buildInfo;
    XCDependencyGraph *_depGraph;
    XCDependencyNode *_supernode;
    NSMutableArray *_subnodes;
    XCDepGraphNodeState *_currentState;
    struct os_unfair_lock_s _subnodeLock;
    unsigned int _nodeNumber;
    unsigned int _alwaysOutOfDate:1;
    unsigned int _isAuxiliaryOutput:1;
    unsigned int _dontCareIfExists:1;
    unsigned int _shouldBeProcessed:1;
    unsigned int _anyDescendantHasProducerCommands:1;
    unsigned int _isVirtual:1;
    unsigned char _suffixLen;
    unsigned short _pathLen;
    unsigned short _nameLen;
    char _nameCStr[0];
    BOOL _performDeepScanForModificationTimes;
}

+ (id)newNodeWithNumber:(unsigned int)arg1 nameCStr:(const char *)arg2 length:(unsigned long long)arg3 supernode:(id)arg4 isVirtual:(BOOL)arg5 inDependencyGraph:(id)arg6;
@property BOOL performDeepScanForModificationTimes; // @synthesize performDeepScanForModificationTimes=_performDeepScanForModificationTimes;
- (void).cxx_destruct;
- (void)dvt_provideFileSystemRepresentationToBlock:(CDUnknownBlockType)arg1;
- (_Bool)removeRecursively;
- (_Bool)createDirectoryRecursively;
- (BOOL)isValid;
- (void)invalidate;
- (id)dependencyGraph;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)shortNameForDebugging;
- (void)prepareForUpdatingDependencyGraph;
- (BOOL)hasProducerCommandsConsideringDescendants:(BOOL)arg1;
@property(nonatomic) BOOL isAuxiliaryOutput;
@property BOOL shouldBeProcessed;
- (void)setDontCareIfExists:(BOOL)arg1;
- (BOOL)dontCareIfExists;
- (void)setAlwaysOutOfDate:(BOOL)arg1;
- (BOOL)isAlwaysOutOfDate;
- (void)_addConsumerCommand:(id)arg1;
- (void)_addProducerCommand:(id)arg1;
- (void)visitDownstreamCommandsUsingPreorderBlock:(CDUnknownBlockType)arg1 postorderBlock:(CDUnknownBlockType)arg2;
- (void)visitUpstreamCommandsUsingPreorderBlock:(CDUnknownBlockType)arg1 postorderBlock:(CDUnknownBlockType)arg2;
- (void)setBuildInfo:(id)arg1;
- (id)buildInfo;
- (id)producerCommand;
- (id)includingNodes;
- (id)consumerCommands;
- (id)includedNodes;
- (id)producerCommands;
- (id)displayPath;
- (id)displayName;
- (id)path;
- (id)identifier;
- (unsigned int)nodeNumber;
- (void)discardCurrentNodeState;
- (id)currentNodeState;
- (id)currentNodeStateWithOptions:(unsigned long long)arg1 ignoringCache:(BOOL)arg2;
- (id)currentNodeStateWithOptions:(unsigned long long)arg1 ignoringCache:(BOOL)arg2 withPreviousNodeState:(id)arg3;
- (id)buildContext;
- (const char *)suffixCStr;
- (unsigned long long)suffixLength;
- (const char *)nameCStr;
- (unsigned long long)nameLength;
- (id)subpathFromNode:(id)arg1;
- (id)subpathFromAncestorNode:(id)arg1;
- (id)ancestorSharedWithNode:(id)arg1;
- (BOOL)isDescendantOfNode:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)subnodeWithSubpath:(id)arg1;
- (id)subnodeWithSubpath:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)subnodeWithSubpathCStr:(const char *)arg1 createIfNeeded:(BOOL)arg2;
- (long long)getPathCStr:(char *)arg1 bufferSize:(unsigned long long)arg2;
- (long long)getPathCStr:(char *)arg1 bufferSize:(unsigned long long)arg2 fromAncestorNode:(id)arg3;
- (unsigned long long)pathLength;
- (void)enumerateNodeTreeRecursivelyUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateNodeTreeRecursivelyWithStop:(char *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)subnodes;
- (BOOL)isVirtual;
- (id)supernode;
- (id)init;
- (id)initWithNumber:(unsigned int)arg1 nameCStr:(const char *)arg2 length:(unsigned long long)arg3 supernode:(id)arg4 isVirtual:(BOOL)arg5 inDependencyGraph:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

