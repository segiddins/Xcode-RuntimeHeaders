//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEOpenQuicklyResultGenerator, NSArray;

@interface IDEOpenQuicklyAggregationEntry : NSObject
{
    BOOL _finishedStarting;
    IDEOpenQuicklyResultGenerator *_generator;
    NSArray *_resultsOrderedByScore;
    long long _receivedGeneration;
}

- (void).cxx_destruct;
@property(readonly) long long receivedGeneration; // @synthesize receivedGeneration=_receivedGeneration;
@property(readonly) NSArray *resultsOrderedByScore; // @synthesize resultsOrderedByScore=_resultsOrderedByScore;
@property(readonly) IDEOpenQuicklyResultGenerator *generator; // @synthesize generator=_generator;
- (id)description;
- (void)noteDidFinishStarting;
- (BOOL)updateOrderedResults:(id)arg1 generation:(long long)arg2;
- (id)initWithGenerator:(id)arg1;

@end

