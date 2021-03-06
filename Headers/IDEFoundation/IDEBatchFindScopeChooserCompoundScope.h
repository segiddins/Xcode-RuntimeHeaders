//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindNamedScope.h>

@class NSArray;

@interface IDEBatchFindScopeChooserCompoundScope : IDEBatchFindNamedScope
{
    NSArray *_namedScopes;
    NSArray *_workspaceLocationPredicates;
}

+ (id)decodeFromPropertyListRepresentation:(id)arg1;
+ (id)propertyListIdentifier;
- (void).cxx_destruct;
@property(readonly) NSArray *workspaceLocationPredicates; // @synthesize workspaceLocationPredicates=_workspaceLocationPredicates;
@property(readonly) NSArray *namedScopes; // @synthesize namedScopes=_namedScopes;
- (id)propertyListRepresentation;
- (id)predicate;
- (id)source;
- (id)name;
- (BOOL)isEqualToNamedScopeWithIdenticalClass:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNamedScopes:(id)arg1 workspaceLocationPredicates:(id)arg2;

@end

