//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBBreakpointLocation-Protocol.h>

@class NSString;

@interface LLDBRPCBreakpointLocation : NSObject <DBGSBBreakpointLocation>
{
    struct SBBreakpointLocation {
        struct shared_ptr<rpc::ObjectRef> m_object_ref_sp;
    } _breakpointLocation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)IsEnabled;
- (void)SetEnabled:(_Bool)arg1;
- (void)SetIgnoreCount:(unsigned int)arg1;
- (unsigned int)GetIgnoreCount;
- (const char *)GetCondition;
- (void)SetCondition:(const char *)arg1;
- (int)GetID;
- (id)initWithSBBreakpointLocation:(const struct SBBreakpointLocation *)arg1;
- (id)GetAddress;
- (id)GetBreakpoint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

