//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUTools/DYCaptureStore-Protocol.h>

@class NSString;

@interface DYCaptureArchiveStack : NSObject <DYCaptureStore>
{
    struct vector<GPUTools::objc_ref<DYCaptureArchive *>, std::__1::allocator<GPUTools::objc_ref<DYCaptureArchive *>>> _archives;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)acceptCaptureVisitor:(id)arg1;
- (BOOL)adjunctFileExistsForFilename:(id)arg1 error:(id *)arg2;
- (id)copyAdjunctDataForFilename:(id)arg1 error:(id *)arg2;
- (id)metadataValueForKey:(id)arg1;
- (id)getFilenameForFilePosition:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)getInfo:(CDStruct_61ea625d *)arg1 forFilePosition:(unsigned long long)arg2 error:(id *)arg3;
- (id)copyDataForFilePosition:(unsigned long long)arg1 error:(id *)arg2;
- (long long)readDataForFilePosition:(unsigned long long)arg1 buffer:(void *)arg2 size:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)fileExistsForFilename:(id)arg1 error:(id *)arg2;
- (BOOL)fileExistsForFilenameBuffer:(const char *)arg1 error:(id *)arg2;
- (BOOL)getInfo:(CDStruct_61ea625d *)arg1 forFilename:(id)arg2 error:(id *)arg3;
- (BOOL)getInfo:(CDStruct_61ea625d *)arg1 forFilenameBuffer:(const char *)arg2 error:(id *)arg3;
- (void *)allocateAndReadDataForFilenameBuffer:(const char *)arg1 outSize:(unsigned long long *)arg2 error:(id *)arg3;
- (id)copyDataForFilename:(id)arg1 error:(id *)arg2;
- (id)copyDataForFilenameBuffer:(const char *)arg1 error:(id *)arg2;
- (long long)readDataForFilename:(id)arg1 buffer:(void *)arg2 size:(unsigned long long)arg3 error:(id *)arg4;
- (long long)readDataForFilenameBuffer:(const char *)arg1 buffer:(void *)arg2 size:(unsigned long long)arg3 error:(id *)arg4;
- (id)openFileWithFilename:(id)arg1 error:(id *)arg2;
- (vector_cfeb9b06)getSortedFilePositionsForDataCaching;
- (id)resolveFilename:(id)arg1 error:(id *)arg2;
- (id)filenamesWithPredicate:(id)arg1 error:(id *)arg2;
- (id)filenamesWithPrefix:(id)arg1 error:(id *)arg2;
- (void)close;
- (_Bool)_stackIsEmpty:(id *)arg1;
- (id)allObjects;
- (id)top;
- (_Bool)empty;
- (unsigned long long)size;
- (void)clear;
- (void)pop;
- (void)push:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

