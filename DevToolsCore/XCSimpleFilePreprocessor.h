//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString;

@interface XCSimpleFilePreprocessor : NSObject
{
    struct {
        unsigned int stripComments:1;
        unsigned int forceIncludeFilesToEndWithNewline:1;
        unsigned int processIncludes:1;
        unsigned int searchLocalDirForIncludes:1;
        unsigned int reservedForFutureUse:28;
    } _sppFlags;
    NSArray *_includeSearchPath;
    NSString *_filePath;
    unsigned long long _encoding;
    NSString *_result;
    NSMutableSet *_filesProcessed;
    NSMutableArray *_errors;
}

+ (id)preprocessor;
- (id)errors;
- (id)filesProcessed;
- (id)preprocessedFileContents;
- (unsigned long long)fileEncoding;
- (id)preprocessedFilePath;
- (id)preprocessFileAtPath:(id)arg1 encoding:(unsigned long long)arg2;
- (id)_preprocessFileAtPath:(id)arg1 seenFiles:(id)arg2;
- (id)_pathToIncludedFileNamed:(id)arg1 usingSearchPath:(id)arg2;
- (void)setIncludeSearchPath:(id)arg1;
- (void)setSearchLocalDirForIncludes:(BOOL)arg1;
- (void)setProcessIncludes:(BOOL)arg1;
- (void)setForceIncludedFilesToEndWithNewline:(BOOL)arg1;
- (void)setStripComments:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

