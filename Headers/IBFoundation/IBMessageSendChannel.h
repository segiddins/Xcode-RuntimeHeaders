//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBMessageChannel.h>

@interface IBMessageSendChannel : IBMessageChannel
{
    _Atomic int _concurrentWriters;
}

- (BOOL)sendMessage:(SEL)arg1 returnValue:(id *)arg2 context:(id)arg3 error:(id *)arg4 arguments:(int)arg5;
- (void)shutdown;

@end

