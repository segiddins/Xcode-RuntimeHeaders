//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTLogger.h>

@class NSFileHandle, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface DVTFileLogger : DVTLogger
{
    unsigned long long _indentLevel;
    NSURL *_fileURL;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
@property(readonly) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property unsigned long long indentLevel; // @synthesize indentLevel=_indentLevel;
- (void).cxx_destruct;
- (void)decreaseIndentLevelForAspect:(id)arg1;
- (void)increaseIndentLevelForAspect:(id)arg1;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(unsigned long long)arg3;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;

@end

