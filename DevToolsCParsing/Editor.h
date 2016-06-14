//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSMutableArray, NSString;

@interface Editor : NSObject
{
    NSMutableArray *_lines;
    NSString *_filename;
    BOOL _pendingChanges;
    NSCharacterSet *_nonBlankChars;
    NSMutableArray *_potentiallyBlankLines;
}

- (id)filename;
- (id)getStringAtStartLine:(unsigned long long)arg1 col:(unsigned long long)arg2 toLine:(unsigned long long)arg3 col:(unsigned long long)arg4 replacing:(id)arg5;
- (id)getStringAtStartLine:(unsigned long long)arg1 col:(unsigned long long)arg2 toLine:(unsigned long long)arg3 col:(unsigned long long)arg4;
- (id)getStringAtLine:(unsigned long long)arg1;
- (BOOL)deleteFromLine:(unsigned long long)arg1 col:(unsigned long long)arg2 toLine:(unsigned long long)arg3 col:(unsigned long long)arg4;
- (BOOL)insertStringAtLine:(unsigned long long)arg1 column:(unsigned long long)arg2 string:(id)arg3;
- (BOOL)changeStringAtLine:(unsigned long long)arg1 column:(unsigned long long)arg2 fromString:(id)arg3 toString:(id)arg4;
- (BOOL)hasPendingChanges;
- (BOOL)writeFile;
- (void)removeIfBlank:(unsigned long long)arg1;
- (void)rescanFile;
- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (id)initWithFileContents:(id)arg1;
- (void)breakLinesForFileContents:(id)arg1;

@end

