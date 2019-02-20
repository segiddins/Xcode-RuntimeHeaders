//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectBasedBatchFinder.h>

@class NSMutableArray, PBXFileReference, PBXTextFileDocument;

@interface PBXDefinitionBatchFinder : PBXProjectBasedBatchFinder
{
    NSMutableArray *_unprocessedProjects;
    NSMutableArray *_foundSymbols;
    NSMutableArray *_allFoundSymbols;
    NSMutableArray *_unreportedResults;
    long long _totalSymbolCount;
    PBXTextFileDocument *_curDoc;
    BOOL _shouldCloseCurDoc;
    PBXFileReference *_curRef;
}

- (float)percentageDone;
- (void)stopFind;
- (id)resultSymbols;
- (void)doSomeFindingUntilDate:(id)arg1;
- (void)_processProjectsUntilDate:(id)arg1;
- (void)_getSymbolsForProject:(id)arg1 searchIn:(int)arg2;
- (id)_retainedFindResultForSymbol:(id)arg1;
- (void)_loadDocumentForReference:(id)arg1;
- (void)_closeCachedDocument;
- (id)initWithSearchList:(id)arg1 findString:(id)arg2;
- (void)dealloc;
- (BOOL)requiresProjectIndex;

@end
