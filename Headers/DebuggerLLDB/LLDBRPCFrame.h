//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBFrame-Protocol.h>

@class NSString;

@interface LLDBRPCFrame : NSObject <DBGSBFrame>
{
    struct SBFrame {
        struct shared_ptr<rpc::ObjectRef> m_object_ref_sp;
    } _frame;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)IsSwiftThunk;
- (_Bool)IsInlined;
- (const char *)GetDisplayFunctionName;
- (const char *)Disassemble;
- (unsigned long long)GetFP;
- (_Bool)SetPC:(unsigned long long)arg1;
- (unsigned long long)GetPC;
- (unsigned int)GetFrameID;
- (_Bool)IsValid;
- (id)initWithSBFrame:(const struct SBFrame *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)GetCompileUnit;
- (id)GetLineEntry;
- (id)GetSymbolContext:(unsigned int)arg1;
- (id)GetRegisters;
- (id)EvaluateExpression:(const char *)arg1 options:(id)arg2;
- (id)EvaluateExpression:(const char *)arg1 use_dynamic:(int)arg2;
- (id)EvaluateExpression:(const char *)arg1;
- (id)FindValue:(const char *)arg1 value_type:(int)arg2 use_dynamic:(int)arg3;
- (id)FindVariable:(const char *)arg1 use_dynamic:(int)arg2;
- (id)GetVariables:(_Bool)arg1 locals:(_Bool)arg2 statics:(_Bool)arg3 in_scope_only:(_Bool)arg4 use_dynamic:(int)arg5;
- (id)GetThread;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

