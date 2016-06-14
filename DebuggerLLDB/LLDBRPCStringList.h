//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBStringList-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LLDBRPCStringList : NSObject <DBGSBStringList>
{
    struct SBStringList {
        unsigned int m_connection_id;
        unsigned int m_class_id;
        unsigned long long m_object_id;
    } _stringList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)AppendString:(const char *)arg1;
- (const char *)GetStringAtIndex:(unsigned long long)arg1;
- (unsigned int)GetSize;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

