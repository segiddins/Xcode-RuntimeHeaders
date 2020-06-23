//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSData, NSSet;
@protocol IDEIndexStringSetFileWatcherDelegate, OS_dispatch_queue;

@interface IDEIndexStringSetFileWatcher : NSObject
{
    DVTFilePath *_filePath;
    id <IDEIndexStringSetFileWatcherDelegate> _delegate;
    NSSet *_contents;
    NSData *_digest;
    NSObject<OS_dispatch_queue> *_fileProcessingQueue;
}

- (void).cxx_destruct;
- (void)_fileChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 delegate:(id)arg2;
@property(readonly) NSSet *allStrings;
@property(readonly) id <IDEIndexStringSetFileWatcherDelegate> delegate;
@property(readonly) DVTFilePath *watchedFilePath;

@end
