//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDETextFragmentIndex, NSArray;

@interface IDEBatchFindTextFragmentIndexContentSnapshot : NSObject
{
    IDETextFragmentIndex *_textFragmentIndex;
    NSArray *_filteredGroups;
}

@property(readonly) NSArray *filteredGroups; // @synthesize filteredGroups=_filteredGroups;
@property(readonly) IDETextFragmentIndex *textFragmentIndex; // @synthesize textFragmentIndex=_textFragmentIndex;
- (void).cxx_destruct;
- (long long)totalNumberOfFilteredUniquedFilePaths;
@property(readonly) NSArray *ordredCandidateFilePaths;
- (id)initWithTextFragmentIndex:(id)arg1 filteredGroups:(id)arg2;

@end

