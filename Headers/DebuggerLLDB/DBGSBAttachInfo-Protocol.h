//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBAttachInfo <NSObject>
- (void)SetIgnoreExisting:(_Bool)arg1;
- (void)SetUserID:(unsigned int)arg1;
- (id)initWithConnection:(id)arg1 PID:(int)arg2;
- (id)initWithConnection:(id)arg1 path:(const char *)arg2 wait_for:(_Bool)arg3 async:(_Bool)arg4;
@end

