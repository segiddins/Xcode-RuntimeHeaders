//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDETestPlan, NSArray, NSSet;

@protocol IDETestCollection <NSObject>
- (id)subsetContainedInTestPlan:(IDETestPlan *)arg1;
@property(nonatomic, readonly) BOOL isEmpty;
@property(nonatomic, readonly) NSSet *testContainers;

@optional
@property(nonatomic, readonly) NSArray *orderedTestContainers;
@end

