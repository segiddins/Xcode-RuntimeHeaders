//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTKPDatastream-Protocol.h>

@class NSString;

@interface DTKPDatastreamMemory : NSObject <DTKPDatastream>
{
    unsigned int _state;
    int _error;
    struct vector<DTKPDataStreamMemoryRecord *, std::__1::allocator<DTKPDataStreamMemoryRecord *>> _records;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_releaseRecords;
- (int)peekAtRawDataWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (int)exportRawDataWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (int)importRawData:(const void *)arg1 bufferSize:(unsigned long long)arg2 error:(id *)arg3 destructor:(CDUnknownBlockType)arg4;
- (int)setWritingCompletedWithError:(id *)arg1;
- (BOOL)hasData;
- (void)dealloc;
- (id)createNextStream:(id *)arg1;
- (id)initFromDatastream:(id)arg1 error:(id *)arg2;
- (id)initWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

