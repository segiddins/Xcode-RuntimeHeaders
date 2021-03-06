//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SymbolicationDT/DVT_VMUStackLogReaderBase.h>

#import <SymbolicationDT/VMUStackLogReader-Protocol.h>

@class DVT_VMUTaskMemoryScanner, DVT_VMUVMRegionTracker, NSSet, NSString;

@interface DVT_VMUTaskStackLogReader : DVT_VMUStackLogReaderBase <VMUStackLogReader>
{
    DVT_VMUTaskMemoryScanner *_scanner;
    struct _CSTypeRef _symbolicator;
    unsigned long long _msl_payload_version;
}

- (void).cxx_destruct;
@property(nonatomic) __weak DVT_VMUTaskMemoryScanner *scanner; // @synthesize scanner=_scanner;
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;
- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long nodesInUniquingTable;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (struct _VMURange)binaryImageRangeForPCaddress:(unsigned long long)arg1;
- (id)binaryImagePathForPCaddress:(unsigned long long)arg1;
- (int)enumerateMSLRecordsAndPayloads:(CDUnknownBlockType)arg1;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (CDStruct_69d7cc99)liteMSLPayloadforVMregionAddress:(unsigned long long)arg1;
- (CDStruct_69d7cc99)liteMSLPayloadforMallocAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
@property(readonly) DVT_VMUVMRegionTracker *regionTracker;
@property(readonly) BOOL inspectingLiveProcess;
@property(readonly) BOOL is64bit;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (id)initWithTask:(unsigned int)arg1;

// Remaining properties
@property(readonly) BOOL coldestFrameIsNotThreadId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *excludedFrames;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) unsigned int task;
@property(readonly) BOOL usesLiteMode;

@end

