//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DYPPerformanceBottleneck, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUTracePerformanceBottleneck : NSObject
{
    DYPPerformanceBottleneck *_bottleneck;
    unsigned long long _severity;
    NSString *_issue;
    NSArray *_associatedItems;
}

@property(retain, nonatomic) NSArray *associatedItems; // @synthesize associatedItems=_associatedItems;
@property(retain, nonatomic) NSString *issue; // @synthesize issue=_issue;
@property(nonatomic) unsigned long long severity; // @synthesize severity=_severity;
@property(retain, nonatomic) DYPPerformanceBottleneck *bottleneck; // @synthesize bottleneck=_bottleneck;
- (void).cxx_destruct;

@end

