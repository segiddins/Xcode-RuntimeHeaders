//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCPerformanceMetricCheckpoint : NSObject
{
    NSString *_label;
    double _checkpointTime;
    NSString *_memoryStats;
}

- (void).cxx_destruct;
- (double)checkpointTime;
- (id)memoryStats;
- (id)label;
- (id)initWithLabel:(id)arg1;

@end

