//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGLLDBProcess;

__attribute__((visibility("hidden")))
@interface DBGLLDBThreadSanitizerHelper : NSObject
{
    DBGLLDBProcess *_process;
}

- (void).cxx_destruct;
- (void)handleExtendedInfo:(id)arg1 forThread:(id)arg2;
- (id)_threadsFromIssueThreads:(id)arg1;
- (id)_firstFrameDocumentLocationFromRecordedThreads:(id)arg1;
- (id)_recordedIssueThreadsFromThread:(id)arg1;
- (id)initWithProcess:(id)arg1;
- (id)init;

@end
