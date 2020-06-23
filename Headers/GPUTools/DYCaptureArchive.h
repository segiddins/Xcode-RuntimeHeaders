//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUTools/DYCaptureStore-Protocol.h>

@class NSMutableDictionary, NSString, NSURL;

@interface DYCaptureArchive : NSObject <DYCaptureStore>
{
    NSURL *_url;
    struct __CFUUID *_uuid;
    unsigned long long _options;
    CDStruct_ac07b3a8 _header;
    CDStruct_32a7f38a *_hash_table;
    CDStruct_fa775e3a *_file_table;
    CDStruct_f6a177db *_name_table;
    unsigned int _file_table_capacity;
    unsigned int _name_table_capacity;
    void *_string_table_storage;
    unsigned long long _string_table_capacity;
    unsigned long long *_string_table_offsets;
    id *_string_table_nscache;
    NSMutableDictionary *_aliasCreationMap;
    void *_store_write_buffer;
    void *_store_write_ptr;
    NSMutableDictionary *_metadata;
    void *_read_buffer;
    long long _read_buffer_capacity;
    int _read_buffer_tokens_lock;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _read_buffer_tokens;
    struct dispatch_semaphore_s *_read_buffer_sem;
    struct dispatch_queue_s *_write_queue;
    struct dispatch_group_s *_add_group;
    int _lock_readers;
    struct dispatch_semaphore_s *_lock_global_semaphore;
    int _blocking_readers;
    long long _backingStoreSize;
    long long _backingStoreWritePosition;
    int _backingStoreFD;
    unsigned int _open_file_count;
    BOOL _modified;
    BOOL _deleteOnClose;
    struct atomic<unsigned long> _preloadAtomicIndex;
    unsigned long long _cacheSize;
    struct vector<DYCaptureArchiveCacheEntry, std::__1::allocator<DYCaptureArchiveCacheEntry>> _cacheTable;
    BOOL _useCache;
    char *_scratch;
    unsigned long long _scratchSize;
}

+ (id)createArchiveInTemporaryDirectoryWithName:(id)arg1 deleteOnClose:(BOOL)arg2 error:(id *)arg3;
+ (id)createArchiveInTemporaryDirectoryWithName:(id)arg1 error:(id *)arg2;
+ (id)createArchiveInTemporaryDirectory:(id *)arg1;
+ (id)getReturnAllFilesPredicate;
+ (id)coreArchiveBundleFilesPredicate;
+ (unsigned long long)contextFromFilename:(id)arg1;
+ (BOOL)isNotSpecialFilename:(id)arg1;
+ (BOOL)isInternalFilename:(id)arg1;
+ (BOOL)isFunctionStreamFilename:(id)arg1;
+ (id)internalFilenamePredicate;
+ (id)standardFunctionStreamFilenamePredicate;
+ (id)standardFunctionStreamFilenamePrefixes;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) BOOL deleteOnClose; // @synthesize deleteOnClose=_deleteOnClose;
@property(readonly, nonatomic) struct __CFUUID *uuid; // @synthesize uuid=_uuid;
- (BOOL)acceptCaptureVisitor:(id)arg1;
- (BOOL)adjunctFileExistsForFilename:(id)arg1 error:(id *)arg2;
- (id)copyAdjunctDataForFilename:(id)arg1 error:(id *)arg2;
- (BOOL)storeAdjunctData:(id)arg1 filename:(id)arg2 error:(id *)arg3;
- (void)setMetadataFromArchive:(id)arg1;
- (BOOL)setMetadataValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)metadataValueForKey:(id)arg1;
- (BOOL)fileExistsForFilename:(id)arg1 error:(id *)arg2;
- (BOOL)fileExistsForFilenameBuffer:(const char *)arg1 error:(id *)arg2;
- (BOOL)getInfo:(CDStruct_61ea625d *)arg1 forFilename:(id)arg2 error:(id *)arg3;
- (BOOL)getInfo:(CDStruct_61ea625d *)arg1 forFilenameBuffer:(const char *)arg2 error:(id *)arg3;
- (BOOL)_getInfo:(CDStruct_61ea625d *)arg1 forFilePosition:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)getInfo:(CDStruct_61ea625d *)arg1 forFilePosition:(unsigned long long)arg2 error:(id *)arg3;
- (id)getFilenameForFilePosition:(unsigned long long)arg1 error:(id *)arg2;
- (void *)allocateAndReadDataForFilenameBuffer:(const char *)arg1 outSize:(unsigned long long *)arg2 error:(id *)arg3;
- (id)copyDataForFilename:(id)arg1 error:(id *)arg2;
- (id)copyDataForFilenameBuffer:(const char *)arg1 error:(id *)arg2;
- (long long)readDataForFilename:(id)arg1 buffer:(void *)arg2 size:(unsigned long long)arg3 error:(id *)arg4;
- (long long)readDataForFilenameBuffer:(const char *)arg1 buffer:(void *)arg2 size:(unsigned long long)arg3 error:(id *)arg4;
- (id)openFileWithFilename:(id)arg1 error:(id *)arg2;
- (id)_copyDataForFilePosition:(unsigned long long)arg1 error:(id *)arg2;
- (id)copyDataForFilePosition:(unsigned long long)arg1 error:(id *)arg2;
- (long long)_readDataForFilePosition:(unsigned long long)arg1 buffer:(void *)arg2 size:(unsigned long long)arg3 error:(id *)arg4;
- (long long)readDataForFilePosition:(unsigned long long)arg1 buffer:(void *)arg2 size:(unsigned long long)arg3 error:(id *)arg4;
- (id)_readRawDataForFilePosition:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)requestDataForFilePosition:(unsigned long long)arg1 buffer:(void **)arg2 size:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)_requestDataForFilePosition:(unsigned long long)arg1 buffer:(void **)arg2 size:(unsigned long long *)arg3 error:(id *)arg4;
- (void)_printUsage;
- (_Bool)requestBuffer:(void **)arg1 forFilePosition:(unsigned long long)arg2 cacheEntry:(CDStruct_05590e52 *)arg3 needsData:(_Bool *)arg4 error:(id *)arg5;
- (_Bool)allocatePageAlignedMemory:(void **)arg1 forFilePosition:(unsigned long long)arg2 error:(id *)arg3;
- (void)releaseBytesForFilePosition:(unsigned long long)arg1;
- (void)cacheAllResources;
- (void)resizeCache;
- (void)initCache;
- (BOOL)updateDataReferenceCounts:(id)arg1 error:(id *)arg2;
- (BOOL)replaceDataOfFile:(id)arg1 withData:(id)arg2 error:(id *)arg3;
- (BOOL)_performReplaceDataOfFile:(id)arg1 withData:(id)arg2 error:(id *)arg3;
- (BOOL)addFilesFromArchive:(id)arg1 error:(id *)arg2 passingTest:(CDUnknownBlockType)arg3;
- (BOOL)addCaptureFile:(id)arg1 options:(id)arg2 error:(id *)arg3 waitUntilDone:(BOOL)arg4;
- (BOOL)addFileWithName:(id)arg1 data:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)addTempFileWithName:(id)arg1 options:(id)arg2 fromLocation:(id)arg3 error:(id *)arg4;
- (BOOL)addFileWithName:(id)arg1 data:(id)arg2 options:(id)arg3 error:(id *)arg4 waitUntilDone:(BOOL)arg5;
- (BOOL)_performFinalizeAddFileAtPosition:(unsigned int)arg1 name:(id)arg2 data:(id)arg3 error:(id *)arg4;
- (unsigned int)_performAddFileWithName:(id)arg1 dataSize:(unsigned int)arg2 withFlags:(unsigned int)arg3 error:(id *)arg4;
- (unsigned int)_performAddFileWithName:(id)arg1 dataSize:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)addAlias:(id)arg1 forName:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)addAlias:(id)arg1 forName:(id)arg2 options:(id)arg3 error:(id *)arg4 waitUntilDone:(BOOL)arg5;
- (BOOL)_performAddAlias:(id)arg1 targetting:(id)arg2 error:(id *)arg3;
- (BOOL)_flushWriteBuffer:(id *)arg1;
- (long long)_writeBufferToBackingStore:(const void *)arg1 size:(long long)arg2 error:(id *)arg3;
- (void)close;
- (void)discardAndClose;
- (BOOL)commitForExport:(id *)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (BOOL)commit:(id *)arg1;
- (BOOL)_performCommit:(id *)arg1;
- (BOOL)_writeIndexInPath:(id)arg1 error:(id *)arg2;
- (BOOL)_writeMetadataInPath:(id)arg1 error:(id *)arg2;
- (id)resolveFilename:(id)arg1 error:(id *)arg2;
- (id)_resolveCFilename:(const char *)arg1 error:(id *)arg2;
- (id)filenamesWithPredicate:(id)arg1 error:(id *)arg2;
- (id)filenamesWithPrefix:(id)arg1 error:(id *)arg2;
- (vector_7984f87c)getSortedFilePositionsForDataCaching;
- (void)getFilenames:(id *)arg1 range:(struct _NSRange)arg2;
- (id)filenamesAtIndexes:(id)arg1;
- (id)objectInFilenamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfFilenames;
- (void)_fillStringTableNSCacheForRange:(struct _NSRange)arg1;
- (void)_performEmptyStringTableNSCache;
- (unsigned int)_findHashEntry:(const char *)arg1;
- (unsigned long long)_reserveStringStorageSize:(unsigned long long)arg1;
- (unsigned int)_createNewNameEntry;
- (unsigned int)_createNewFileEntry;
- (unsigned int)_createNewHashEntry:(const char *)arg1 didGrowTable:(char *)arg2;
- (void)_growHashTable;
- (id)_getCFilename:(id)arg1 outSize:(unsigned long long *)arg2 error:(id *)arg3;
- (void)_fileObjectDidDeallocate;
- (void)_fileObjectDidInitialize;
- (unsigned long long *)_stringTableOffsets;
- (void *)_stringTableStorage;
- (CDStruct_f6a177db *)_nameTable;
- (CDStruct_fa775e3a *)_fileTable;
- (CDStruct_32a7f38a *)_hashTable;
- (CDStruct_ac07b3a8 *)_header;
- (int)_storeFileDescriptor;
@property(readonly, nonatomic, getter=isClosed) BOOL closed;
@property(readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property(readonly, retain, nonatomic) NSString *path;
@property(readonly, retain, nonatomic) NSURL *url;
- (void)setTargetQueue:(struct dispatch_queue_s *)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)init;
- (void)_swapNameTable;
- (void)_swapFileTable;
- (void)_swapHashTable;
- (BOOL)_loadArchiveAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)_createNewArchiveAtPath:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

