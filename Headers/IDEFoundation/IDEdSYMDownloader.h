//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEArchive, NSArray, NSURLSession;

@interface IDEdSYMDownloader : NSObject
{
    IDEArchive *_archive;
    NSURLSession *_urlSession;
    CDUnknownBlockType _fileDownloadedCallback;
    CDUnknownBlockType _completionCallback;
    unsigned long long _maximumConcurrentTasks;
    NSArray *_downloadTasks;
}

- (void).cxx_destruct;
@property(copy) NSArray *downloadTasks; // @synthesize downloadTasks=_downloadTasks;
@property(nonatomic) unsigned long long maximumConcurrentTasks; // @synthesize maximumConcurrentTasks=_maximumConcurrentTasks;
@property(copy, nonatomic) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property(copy, nonatomic) CDUnknownBlockType fileDownloadedCallback; // @synthesize fileDownloadedCallback=_fileDownloadedCallback;
@property(readonly) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly) IDEArchive *archive; // @synthesize archive=_archive;
- (void)initiateDownloadWithAccount:(id)arg1;
- (id)initWithArchive:(id)arg1;

@end

