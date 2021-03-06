//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBValueList-Protocol.h>

@class NSString;

@interface LLDBValueList : NSObject <DBGSBValueList>
{
    struct SBValueList {
        struct unique_ptr<ValueListImpl, std::__1::default_delete<ValueListImpl>> m_opaque_up;
    } _valueList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)GetSize;
- (id)initWithSBValueList:(const struct SBValueList *)arg1;
- (id)GetValueAtIndex:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

