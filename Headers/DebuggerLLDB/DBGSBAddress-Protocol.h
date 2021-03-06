//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBLineEntry, DBGSBModule, DBGSBSymbol, DBGSBSymbolContext, DBGSBTarget;

@protocol DBGSBAddress <NSObject>
- (unsigned long long)GetLoadAddress:(id <DBGSBTarget>)arg1;
- (id <DBGSBLineEntry>)GetLineEntry;
- (unsigned long long)GetOffset;
- (id <DBGSBModule>)GetModule;
- (id <DBGSBSymbol>)GetSymbol;
- (id <DBGSBSymbolContext>)GetSymbolContext:(unsigned int)arg1;
- (id)initWithConnection:(id)arg1;
@end

