//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBType-Protocol.h>

@class NSString;

@interface LLDBRPCType : NSObject <DBGSBType>
{
    struct SBType {
        struct shared_ptr<rpc::ObjectRef> m_object_ref_sp;
    } _type;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)IsReferenceType;
- (const char *)GetDisplayTypeName;
- (unsigned int)GetNumberOfDirectBaseClasses;
- (const char *)GetName;
- (unsigned int)GetTypeClass;
- (_Bool)IsPointerType;
- (_Bool)IsValid;
- (id)initWithSBType:(const struct SBType *)arg1;
- (id)GetDirectBaseClassAtIndex:(unsigned int)arg1;
- (id)GetPointeeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

