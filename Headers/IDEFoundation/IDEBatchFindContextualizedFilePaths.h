//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEBatchFindContextualSuffixTree, IDEBatchFindFilePathTable;

@interface IDEBatchFindContextualizedFilePaths : NSObject
{
    IDEBatchFindContextualSuffixTree *_suffixTree;
    IDEBatchFindFilePathTable *_filePathTable;
}

- (void).cxx_destruct;
@property(readonly) IDEBatchFindFilePathTable *filePathTable; // @synthesize filePathTable=_filePathTable;
@property(readonly) IDEBatchFindContextualSuffixTree *suffixTree; // @synthesize suffixTree=_suffixTree;
- (id)init;

@end
