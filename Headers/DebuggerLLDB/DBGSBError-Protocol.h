//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBError <NSObject>
- (_Bool)Success;
- (_Bool)Fail;
- (const char *)GetCString;
- (id)initWithConnection:(id)arg1;
@end

