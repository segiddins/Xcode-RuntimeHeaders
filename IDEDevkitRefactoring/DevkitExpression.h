//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEDevkitRefactoring/DevkitASTNode.h>

@class DevkitLocation, DevkitType, NSMutableArray;

@interface DevkitExpression : DevkitASTNode
{
    DevkitType *_type;
    NSMutableArray *_children;
    int _kind;
    DevkitExpression *_parent;
    DevkitLocation *_location;
    DevkitLocation *_semiLocation;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)containsLocalDeclaration:(id)arg1;
- (id)parentList;
- (id)childAfterLocation:(id)arg1;
- (id)childBeforeLocation:(id)arg1;
- (id)searchString;
- (id)expressionContainingLocation:(id)arg1;
- (id)description;
- (id)shortDescription;
- (id)prettyPrint;
- (void)dumpAST;
- (void)dumpASTLevel:(unsigned long long)arg1;
- (BOOL)maxHeight;
- (BOOL)isChildOfAny:(id)arg1;
- (BOOL)isChildOf:(id)arg1;
- (BOOL)isStatement;
- (id)overallLocation;
- (id)overallChildren;
- (id)location;
- (void)setSemiLocation:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setExpressionKind:(int)arg1;
- (int)expressionKind;
- (id)children;
- (long long)numberOfChildren;
- (id)childAtIndex:(long long)arg1;
- (void)addChild:(id)arg1;
- (id)expressionParent;
- (id)nontrivialParent;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)containingStatement;
- (id)containingScope;
- (id)type;
- (void)setType:(id)arg1;
- (void)dealloc;
- (void)cleanup;
- (id)init;
- (BOOL)declaration:(id)arg1 hasReachingUsesOutside:(id)arg2;
- (id)reaching_uses_for:(id)arg1;
- (id)control_exits;
- (id)killed_defs;
- (id)reaching_defs;
- (id)reaching_defs_of_decl:(id)arg1;
- (id)reaching_defs_internal_for:(id)arg1;
- (id)control_predecessors;
- (id)loopExitsIncludeBreak:(BOOL)arg1 includeContinue:(BOOL)arg2;
- (id)default_control_predecessors_with_parent:(id)arg1;
- (id)referencesTo:(id)arg1;
- (id)control_entry;
- (id)control_successors;
- (id)allSwitchLabelStatements;
- (id)default_control_successors_with_parent:(id)arg1;
- (id)containing_loop;
- (id)containing_loop_or_switch;
- (id)containing_switch;
- (BOOL)is_control_flow_interesting;
- (id)followingStatement;
- (id)transitive_control_successors;
- (BOOL)isResultUnused;
- (BOOL)hasSideEffects;
- (BOOL)isUse:(id)arg1;
- (BOOL)isDef:(id)arg1 isPartial:(char *)arg2;
- (BOOL)isDef:(id)arg1;
- (id)_highestMemberParent;
- (BOOL)isLValue;

@end

