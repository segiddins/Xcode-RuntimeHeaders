//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBTypeSummaryOptions-Protocol.h>

@class NSString;

@interface LLDBRPCTypeSummaryOptions : NSObject <DBGSBTypeSummaryOptions>
{
    struct SBTypeSummaryOptions {
        unsigned int m_connection_id;
        unsigned int m_class_id;
        unsigned long long m_object_id;
    } _typeSummaryOptions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)SetCapping:(int)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

