//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEGeneratedInterfaceBasedGeniusResultsFinder.h>

@class NSMutableArray;

@interface IDECounterpartsGeniusResultsFinder : IDEGeneratedInterfaceBasedGeniusResultsFinder
{
    BOOL _updateGeniusResults;
    NSMutableArray *_orderedJumpToNavItemResults;
    NSMutableArray *_orderedCounterpartNavItemResults;
}

+ (id)_fileReferenceForFileURL:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_collectNameBasedCounterpartsForDocumentURL:(id)arg1 fileDataType:(id)arg2;
- (void)_populateNameBasedCounterpartsByTraversingContainer:(id)arg1 inputFolderPath:(id)arg2 fileName:(id)arg3 immediateCounterparts:(id)arg4 associateCounterparts:(id)arg5;
- (void)injectSwiftSourceInterfaceCounterpartsIntoJumpToCounterparts:(id)arg1;
- (id)_prioritizedNamedBasedCounterpartsFromJumpToCounterparts:(id)arg1 immediateCounterparts:(id)arg2 inputPathAndFileType:(id)arg3;
- (id)_nameBasedJumpToCounterpartsByCategorizingAllNameBasedCounterparts:(id)arg1;
- (id)_fileBaseNameForFileName:(id)arg1;
- (void)_collectGeniusResultForFileReference:(id)arg1 fileReferencePath:(id)arg2 fileReferenceName:(id)arg3 toImmediateCounterparts:(id)arg4 associateCounterparts:(id)arg5 fileBaseName:(id)arg6 inputFolderPath:(id)arg7;
- (BOOL)_fileReferenceName:(id)arg1 hasPrefix:(id)arg2 matchingRange:(struct _NSRange)arg3;
- (void)_updateGeniusResults;
- (id)_swiftSourceInterfaceNavItemForDocumentURL:(id)arg1;
- (id)_documentFileDataTypeForDocumentURL:(id)arg1;
- (BOOL)_documentURLIsSwiftSource:(id)arg1;
- (id)_originalSourceNavItemForURL:(id)arg1 documentURL:(id)arg2;
- (id)_geniusResultsForCounterpartsAndJumpTo;

@end

