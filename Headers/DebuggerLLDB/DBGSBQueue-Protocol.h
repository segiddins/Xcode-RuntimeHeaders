//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBQueueItem, DBGSBThread;

@protocol DBGSBQueue <NSObject>
- (id <DBGSBThread>)GetThreadAtIndex:(unsigned int)arg1;
- (unsigned int)GetNumThreads;
- (id <DBGSBQueueItem>)GetPendingItemAtIndex:(unsigned int)arg1;
- (unsigned int)GetNumPendingItems;
- (int)GetKind;
- (const char *)GetName;
- (unsigned long long)GetQueueID;
- (_Bool)IsValid;
@end

