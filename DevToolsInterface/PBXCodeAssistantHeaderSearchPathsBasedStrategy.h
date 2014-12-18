//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXCodeAssistantStrategy.h>

@class NSArray, PBXFileReference, PBXHeaderFileSearchContext, PBXNativeTarget;

@interface PBXCodeAssistantHeaderSearchPathsBasedStrategy : PBXCodeAssistantStrategy
{
    PBXFileReference *_associatedFileReference;
    PBXNativeTarget *_associatedTarget;
    PBXHeaderFileSearchContext *_headerFileSearchContext;
    NSArray *_userHeaderSearchPaths;
    NSArray *_systemHeaderSearchPaths;
}

- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (id)_importLineStringUnderCursor;
- (id)_completionItemsFromSubPath:(id)arg1 usingUserPaths:(BOOL)arg2;
- (id)uniqueCompletionItemsAtPath:(id)arg1 withBasePriority:(long long)arg2;
- (BOOL)alwaysSearchUserPaths;
- (id)userHeaderSearchPaths;
- (id)systemHeaderSearchPaths;
- (id)headerFileSearchContext;
- (id)associatedTarget;
- (id)associatedProject;
- (id)associatedFileReference;
- (void)dealloc;

@end

