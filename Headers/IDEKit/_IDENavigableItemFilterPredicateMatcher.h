//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/_IDENavigableItemFilterMatcher.h>

@class NSPredicate;

@interface _IDENavigableItemFilterPredicateMatcher : _IDENavigableItemFilterMatcher
{
    BOOL _evaluatesRepresentedObject;
    NSPredicate *_predicate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL evaluatesRepresentedObject; // @synthesize evaluatesRepresentedObject=_evaluatesRepresentedObject;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_matchesRepresentedObject:(id)arg1;
- (BOOL)_matchesNavigableItem:(id)arg1;
- (id)_initWithPredicate:(id)arg1 evaluatesRepresentedObject:(BOOL)arg2;

@end

