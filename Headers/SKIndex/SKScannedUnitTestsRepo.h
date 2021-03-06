//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SKIndex/SKIndexableDelegate-Protocol.h>
#import <SKIndex/SKScannedFilesDelegate-Protocol.h>

@class IDEIndex, NSMutableDictionary, NSMutableSet, NSString, SKScanIndex;
@protocol SKScannedUnitTestsDelegate;

__attribute__((visibility("hidden")))
@interface SKScannedUnitTestsRepo : NSObject <SKScannedFilesDelegate, SKIndexableDelegate>
{
    IDEIndex *_index;
    SKScanIndex *_scanIndex;
    struct SmartMutex<false> _stateMtx;
    NSMutableDictionary *_targetsByFilePath;
    NSMutableDictionary *_unitTestScanDataByFilePath;
    NSMutableSet *_monitoredIndexables;
    id <SKScannedUnitTestsDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property __weak id <SKScannedUnitTestsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;
- (id)_testablesForIndexable:(id)arg1;
- (BOOL)_isUnitTestOrLinkedFromUnitTest:(id)arg1;
- (id)_allTestables;
- (id)indexablesForFile:(id)arg1;
- (void)_onSymbolsChangedInIndexables:(id)arg1;
- (void)scannedSymbols:(id)arg1 scanIndex:(id)arg2;
- (id)unitTestsForTestable:(id)arg1;
- (BOOL)renameTestableFile:(id)arg1 newFile:(id)arg2 testable:(id)arg3;
- (BOOL)removeTestableFiles:(id)arg1 testable:(id)arg2;
- (BOOL)addNewTestableFiles:(id)arg1 testable:(id)arg2;
- (void)linkedIndexablesChanged:(id)arg1 forIndexable:(id)arg2;
- (void)indexableFileRenamedFrom:(id)arg1 to:(id)arg2 forIndexable:(id)arg3;
- (void)indexableFileRemoved:(id)arg1 forIndexable:(id)arg2;
- (void)indexableFileAdded:(id)arg1 forIndexable:(id)arg2;
- (void)unregisterIndexable:(id)arg1;
- (void)registerIndexable:(id)arg1;
- (void)setScanIndexDelegate:(id)arg1;
- (id)initWithIndex:(id)arg1 toolchainResolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

