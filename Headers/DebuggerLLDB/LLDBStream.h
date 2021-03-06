//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBStream-Protocol.h>

@class NSString;

@interface LLDBStream : NSObject <DBGSBStream>
{
    struct SBStream {
        struct unique_ptr<lldb_private::Stream, std::__1::default_delete<lldb_private::Stream>> m_opaque_up;
        _Bool m_is_file;
    } _stream;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)GetSize;
- (const char *)GetData;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

