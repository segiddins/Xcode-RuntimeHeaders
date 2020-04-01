//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBSection-Protocol.h>

@class NSString;

@interface LLDBSection : NSObject <DBGSBSection>
{
    struct SBSection {
        struct weak_ptr<lldb_private::Section> m_opaque_wp;
    } _section;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)GetFileAddress;
- (_Bool)IsValid;
- (id)initWithSBSection:(const struct SBSection *)arg1;
- (unsigned long long)GetLoadAddress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

