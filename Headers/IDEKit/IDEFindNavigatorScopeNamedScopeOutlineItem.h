//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEFindNavigatorAbstractScopeOutlineItem.h>

@class IDEBatchFindNamedScope;

@interface IDEFindNavigatorScopeNamedScopeOutlineItem : IDEFindNavigatorAbstractScopeOutlineItem
{
    IDEBatchFindNamedScope *_namedScope;
}

- (void).cxx_destruct;
@property(readonly) IDEBatchFindNamedScope *namedScope; // @synthesize namedScope=_namedScope;
- (id)filteredCloneWithChildren:(id)arg1 passedFilterLocally:(BOOL)arg2 descendantPassedFilter:(BOOL)arg3;
- (id)initWithNamedScope:(id)arg1 passedFilterLocally:(BOOL)arg2 descendantPassedFilter:(BOOL)arg3;

@end

