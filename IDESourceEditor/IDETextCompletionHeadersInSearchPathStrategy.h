//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextCompletionStrategy.h>

@interface IDETextCompletionHeadersInSearchPathStrategy : DVTTextCompletionStrategy
{
}

- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (id)_completionItemsFromSubPath:(id)arg1 includerURL:(id)arg2 usingUserPaths:(BOOL)arg3 userHeaderSearchPaths:(id)arg4 systemHeaderSearchPaths:(id)arg5 headerMappedHeaders:(id)arg6 alwaysSearchUserPaths:(BOOL)arg7 context:(id)arg8;
- (id)_uniqueCompletionItemsFromHeaderMappedHeaders:(id)arg1;
- (id)_uniqueCompletionItemsAtPath:(id)arg1 withBasePriority:(long long)arg2;

@end

