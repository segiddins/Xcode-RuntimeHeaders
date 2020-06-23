//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface DVTIssueCompressor : NSObject
{
    int _archive_fd;
    NSObject<OS_dispatch_queue> *_tarQueue;
    NSFileManager *_fm;
    NSString *_archiveName;
    long long _archiveStatus;
    struct archive *_archive;
    long long _uncompressed_size;
    NSURL *_archiveLocation;
    NSString *_baseURLPath;
}

+ (id)_allExpandedFilesToBeArchived:(id)arg1;
+ (id)expandedURLsAtLocation:(id)arg1;
+ (void)archiveWithName:(id)arg1 destination:(id)arg2 fileURLs:(id)arg3 baseURL:(id)arg4 progress:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) NSString *baseURLPath; // @synthesize baseURLPath=_baseURLPath;
@property(copy, nonatomic) NSURL *archiveLocation; // @synthesize archiveLocation=_archiveLocation;
@property(nonatomic) long long uncompressed_size; // @synthesize uncompressed_size=_uncompressed_size;
@property(nonatomic) int archive_fd; // @synthesize archive_fd=_archive_fd;
@property(nonatomic) struct archive *archive; // @synthesize archive=_archive;
@property(nonatomic) long long archiveStatus; // @synthesize archiveStatus=_archiveStatus;
@property(copy, nonatomic) NSString *archiveName; // @synthesize archiveName=_archiveName;
@property(retain, nonatomic) NSFileManager *fm; // @synthesize fm=_fm;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tarQueue; // @synthesize tarQueue=_tarQueue;
- (void).cxx_destruct;
- (id)_errorWithMessage:(id)arg1 reason:(id)arg2;
- (void)_closeArchive;
- (BOOL)_addDirectoryToArchive:(id)arg1 error:(id *)arg2;
- (BOOL)_addFileToArchive:(id)arg1 error:(id *)arg2;
- (void)_archiveWithFileURLs:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)bootstrapArchiverWithDestination:(id)arg1 error:(id *)arg2;

@end

