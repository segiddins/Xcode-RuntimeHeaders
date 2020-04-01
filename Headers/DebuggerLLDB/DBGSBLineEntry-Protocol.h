//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBAddress, DBGSBFileSpec, DBGSBLineEntry;

@protocol DBGSBLineEntry <NSObject>
- (BOOL)isEqual:(id <DBGSBLineEntry>)arg1;
- (unsigned int)GetLine;
- (id <DBGSBAddress>)GetStartAddress;
- (id <DBGSBFileSpec>)GetFileSpec;
- (_Bool)IsValid;
- (id)initWithConnection:(id)arg1;
@end

