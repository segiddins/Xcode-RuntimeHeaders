//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBAddress, DBGSBFileSpec, DBGSBLineEntry;

@protocol DBGSBLineEntry <NSObject>
- (BOOL)isEqual:(id <DBGSBLineEntry>)arg1;
- (unsigned int)GetColumn;
- (unsigned int)GetLine;
- (id <DBGSBAddress>)GetStartAddress;
- (id <DBGSBFileSpec>)GetFileSpec;
- (_Bool)IsValid;
- (id)initWithConnection:(id)arg1;
@end

