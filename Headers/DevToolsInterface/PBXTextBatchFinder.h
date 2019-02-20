//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXReferenceBasedBatchFinder.h>

@class NSData, PBXDocumentController, PBXFileType;

@interface PBXTextBatchFinder : PBXReferenceBasedBatchFinder
{
    PBXFileType *_sourceFileType;
    PBXDocumentController *_docCtrl;
    NSData *_asciiSearchData;
    char *_asciiSearchChars;
    long long _searchLength;
}

- (void)processCompletedFindables:(id)arg1;
- (id)findableForReference:(id)arg1;
- (void)startFindWithProjectDocument:(id)arg1;
- (long long)searchLength;
- (char *)asciiSearchChars;
- (void)dealloc;
- (id)initWithSearchList:(id)arg1 findString:(id)arg2;

@end
