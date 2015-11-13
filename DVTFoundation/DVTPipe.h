//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;

@interface DVTPipe : NSObject
{
    NSFileHandle *_fileHandleForReading;
    NSFileHandle *_fileHandleForWriting;
}

+ (id)pipeReturningError:(id *)arg1;
@property(readonly) NSFileHandle *fileHandleForWriting; // @synthesize fileHandleForWriting=_fileHandleForWriting;
@property(readonly) NSFileHandle *fileHandleForReading; // @synthesize fileHandleForReading=_fileHandleForReading;
- (void).cxx_destruct;
- (void)closeBothFileHandles;
- (id)initWithReadHandle:(id)arg1 andWriteHandle:(id)arg2;

@end

