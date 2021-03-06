//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBData-Protocol.h>

@class NSString;

@interface LLDBData : NSObject <DBGSBData>
{
    struct SBData {
        struct shared_ptr<lldb_private::DataExtractor> m_opaque_sp;
    } _data;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)GetByteSize;
- (id)initWithSBData:(const struct SBData *)arg1;
- (unsigned long long)ReadRawData:(id)arg1 offset:(unsigned long long)arg2 buf:(void *)arg3 size:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

