//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol DVTFilterExpressionPredicateProducerDelegate;

@interface DVTFilterExpressionPredicateProducer : NSObject
{
    NSMutableDictionary *_identifierToAccessorMap;
    id <DVTFilterExpressionPredicateProducerDelegate> _producerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DVTFilterExpressionPredicateProducerDelegate> producerDelegate; // @synthesize producerDelegate=_producerDelegate;
- (id)matcherForFilterExpression:(id)arg1 includingIdentifiers:(id)arg2;
- (id)matcherForFilterExpression:(id)arg1;
- (id)_predicateForExpression:(id)arg1;
- (id)_predicateForTextExpression:(id)arg1;
- (id)_predicateForNumericExpression:(id)arg1;
- (id)_predicateForCustomExpression:(id)arg1;
- (id)_predicateForCompoundFilterExpression:(id)arg1;
- (void)registerIdentifier:(id)arg1 withAccessorForNumericExpression:(CDUnknownBlockType)arg2;
- (void)registerIdentifier:(id)arg1 withAccessorForTextExpression:(CDUnknownBlockType)arg2;
- (void)registerIdentifier:(id)arg1 withAccessorForCustomExpression:(CDUnknownBlockType)arg2;
- (id)init;

@end

