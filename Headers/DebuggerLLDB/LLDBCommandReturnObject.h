//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBCommandReturnObject-Protocol.h>

@class NSString;

@interface LLDBCommandReturnObject : NSObject <DBGSBCommandReturnObject>
{
    struct SBCommandReturnObject {
        struct unique_ptr<lldb_private::SBCommandReturnObjectImpl, std::__1::default_delete<lldb_private::SBCommandReturnObjectImpl>> m_opaque_up;
    } _commandReturnObject;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)GetOutputSize;
- (const char *)GetOutput;
- (unsigned long long)GetErrorSize;
- (const char *)GetError;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

