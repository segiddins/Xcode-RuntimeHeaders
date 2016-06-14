//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBCompileUnit-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LLDBCompileUnit : NSObject <DBGSBCompileUnit>
{
    struct SBCompileUnit {
        struct CompileUnit *m_opaque_ptr;
    } _compileUnit;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)IsValid;
- (id)initWithSBCompileUnit:(const struct SBCompileUnit *)arg1;
- (id)GetLineEntryAtIndex:(unsigned int)arg1;
- (unsigned int)FindLineEntryIndex:(unsigned int)arg1 line:(unsigned int)arg2 inline_file_spec:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

