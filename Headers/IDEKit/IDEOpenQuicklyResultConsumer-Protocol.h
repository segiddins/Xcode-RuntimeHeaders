//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEOpenQuicklyResultGenerator, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol IDEOpenQuicklyResultConsumer <NSObject>
- (void)resultGeneratorFinishedStarting:(IDEOpenQuicklyResultGenerator *)arg1;
- (void)resultGenerator:(IDEOpenQuicklyResultGenerator *)arg1 didGenerateOrderedResults:(NSArray *)arg2 generation:(long long)arg3;
- (NSObject<OS_dispatch_queue> *)resultConsumptionQueue;
@end

