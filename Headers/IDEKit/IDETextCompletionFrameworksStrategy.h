//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTTextCompletionStrategy.h>

@interface IDETextCompletionFrameworksStrategy : DVTTextCompletionStrategy
{
}

- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (id)_completionItemsFromSubPath:(id)arg1 frameworkHeaderSearchPaths:(id)arg2;
- (id)_uniqueCompletionItemsAtPath:(id)arg1 insideFramework:(BOOL)arg2 privateHeaders:(BOOL)arg3;

@end

