//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSSet, _TtC13IDEFoundation11IDETestPlan;

@protocol IDETestCollection <NSObject>
- (id)subsetContainedInTestPlan:(_TtC13IDEFoundation11IDETestPlan *)arg1;
@property(nonatomic, readonly) BOOL isEmpty;
@property(nonatomic, readonly) NSSet *testContainers;

@optional
@property(nonatomic, readonly) NSArray *orderedTestContainers;
@end

