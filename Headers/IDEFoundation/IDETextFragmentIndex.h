//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDETextFragmentIndexRecordStorage;

@interface IDETextFragmentIndex : NSObject
{
    IDETextFragmentIndexRecordStorage *_storage;
    unsigned int _currentSaveGeneration;
    CDUnknownBlockType _storagePathResolver;
    BOOL _completedPrescan;
}

+ (id)indexPathForWorkspace:(id)arg1;
+ (void)deriveEntryForFilePath:(id)arg1 initialTimestamp:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)runProvider:(Class)arg1 forFilePath:(id)arg2 initialTimestamp:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property BOOL completedPrescan; // @synthesize completedPrescan=_completedPrescan;
- (void).cxx_destruct;
- (void)loadContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)scheduleSaveAndOptionallyTrimToFilePaths:(id)arg1;
- (void)dropIndex;
- (void)ensureEntryForFilePathIsUpToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fragmentProviderForFilePath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fragmentProviderForFilePath:(id)arg1 thatMightMatchQueryTextFragmentProbe:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fragmentProviderForFilePath:(id)arg1 indexEntryFilter:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithStoragePathLocationResolver:(CDUnknownBlockType)arg1;
- (id)init;

@end

