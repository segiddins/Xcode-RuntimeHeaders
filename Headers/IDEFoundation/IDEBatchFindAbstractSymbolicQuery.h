//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindAbstractQuery.h>

@interface IDEBatchFindAbstractSymbolicQuery : IDEBatchFindAbstractQuery
{
}

+ (id)queryTermPlaceholderText;
+ (BOOL)supportsCaseMatching;
+ (BOOL)supportsAnchorning;
- (void)execute;
- (BOOL)requiresEditorDocumentsToSaveBeforeSearching;
- (id)occurenceCollectionsForSymbol:(id)arg1;
- (id)makeRootResult;

@end

