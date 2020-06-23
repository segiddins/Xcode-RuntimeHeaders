//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface OSLogEventStore : NSObject
{
    NSURL *_archiveURL;
    NSArray *_relativeFilePaths;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _upgradeHandler;
}

+ (id)storeWithArchiveURL:(id)arg1 relativePaths:(id)arg2;
+ (id)storeWithFileURL:(id)arg1;
+ (id)storeWithArchiveURL:(id)arg1;
+ (id)localStore;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType _upgradeHandler; // @synthesize _upgradeHandler;
@property(copy, nonatomic) CDUnknownBlockType _progressHandler; // @synthesize _progressHandler;
@property(retain, nonatomic) NSArray *_relativeFilePaths; // @synthesize _relativeFilePaths;
@property(retain, nonatomic) NSURL *_archiveURL; // @synthesize _archiveURL;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setUpgradeConfirmationHandler:(CDUnknownBlockType)arg1;
- (void)setProgressHandler:(CDUnknownBlockType)arg1;
- (id)initWithArchiveURL:(id)arg1 relativePaths:(id)arg2;
- (id)initWithArchiveURL:(id)arg1;

@end

