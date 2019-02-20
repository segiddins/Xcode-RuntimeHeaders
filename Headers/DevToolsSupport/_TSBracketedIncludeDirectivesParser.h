//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, NSTimer;

@interface _TSBracketedIncludeDirectivesParser : NSObject
{
    NSTimer *_invalidationTimer;
    NSDate *_lastUsedDate;
    char *_bytes;
    unsigned long long _bytesLength;
    unsigned long long _fileLength;
    NSMutableSet *_includeFiles;
}

+ (id)includeDirectivesInFile:(id)arg1;
- (id)_includeDirectivesInFile:(id)arg1;
- (BOOL)_readFileContentsAtPath:(id)arg1;
- (void)_ensureBufferSize:(unsigned long long)arg1;
- (void)_startTimer;
- (void)_invalidate:(id)arg1;

@end
