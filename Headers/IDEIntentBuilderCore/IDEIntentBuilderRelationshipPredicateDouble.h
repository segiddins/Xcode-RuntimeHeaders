//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderRelationshipPredicate.h>

@interface IDEIntentBuilderRelationshipPredicateDouble : IDEIntentBuilderRelationshipPredicate
{
    double _value;
}

@property(nonatomic) double value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)supportsMultipleValues;

@end
