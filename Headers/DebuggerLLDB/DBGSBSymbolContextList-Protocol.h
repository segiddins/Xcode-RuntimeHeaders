//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBSymbolContext;

@protocol DBGSBSymbolContextList <NSObject>
- (id <DBGSBSymbolContext>)GetContextAtIndex:(unsigned int)arg1;
- (unsigned int)GetSize;
@end
