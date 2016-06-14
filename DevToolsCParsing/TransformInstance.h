//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EntireProject, FileCache, NSMutableArray, NSMutableDictionary, Transform;

@interface TransformInstance : NSObject
{
    NSMutableArray *_changeList;
    FileCache *_fileCache;
    NSMutableArray *_changeListStack;
    BOOL _testDoNotCheckMacros;
    BOOL _ignoreChangesToSystemHeaders;
    EntireProject *_project;
    Transform *_transform;
    NSMutableDictionary *_editorCache;
}

- (BOOL)commit;
- (void)addChanges:(id)arg1;
- (id)changeList;
- (void)setIgnoreChangesToSystemHeaders:(BOOL)arg1;
- (void)revertChangeListScope;
- (void)commitChangeListScope;
- (void)openChangeListScope;
- (void)removeWhitespaceBetweenLocations:(id)arg1 lhsLoc:(id)arg2;
- (id)locationOfIBOutletTagBeforeDeclaration:(id)arg1;
- (id)locationOfBlockCommentBeforeLocation:(id)arg1;
- (id)getStringAtFile:(id)arg1 line:(long long)arg2 macroTolerance:(int)arg3;
- (id)getStringAtLocation:(id)arg1 replacing:(id)arg2 macroTolerance:(int)arg3;
- (id)getStringAtLocation:(id)arg1 macroTolerance:(int)arg2;
- (BOOL)deleteAtLocation:(id)arg1 priority:(long long)arg2 macroTolerance:(int)arg3;
- (BOOL)deleteString:(id)arg1 atLocation:(id)arg2 priority:(long long)arg3 macroTolerance:(int)arg4;
- (BOOL)insertString:(id)arg1 before:(id)arg2 priority:(long long)arg3 macroTolerance:(int)arg4;
- (BOOL)insertString:(id)arg1 after:(id)arg2 priority:(long long)arg3 macroTolerance:(int)arg4;
- (BOOL)replaceString:(id)arg1 withString:(id)arg2 location:(id)arg3 priority:(long long)arg4 macroTolerance:(int)arg5;
- (BOOL)isMacroEditingProblemAtLocation:(id)arg1 tol:(int)arg2;
- (id)project;
- (void)dealloc;
- (void)setTransform:(id)arg1;
- (id)initWithFileCache:(id)arg1 project:(id)arg2;

@end

