//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTTapMemoHandlerDelegate-Protocol.h>

@class NSString;

@interface DTActivityTraceTapMemoHandlerDelegate : NSObject <DTTapMemoHandlerDelegate>
{
}

- (id)peekAtMemo:(id)arg1;
- (void)sendHeartbeatMemo:(id)arg1 toClientUsingConfig:(id)arg2;
- (void)sendDataMemo:(id)arg1 toClientUsingConfig:(id)arg2;
- (void)sendDataMemo:(id)arg1 toBulkReceiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

