//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTEncodableIndex.h>

@interface DVTLibraryFragmentFilter : DVTEncodableIndex
{
    CDStruct_fd921134 _specification;
}

- (id)unitTestingDescription;
- (long long)indexSize;
- (BOOL)couldIdentifier:(id)arg1 matchQuery:(id)arg2;
- (id)candidateIdentifiersForQuery:(id)arg1 allIdentifiers:(id *)arg2 validationBlock:(CDUnknownBlockType)arg3;
- (id)candidateIdentifiersForQuery:(id)arg1;
- (void)addFilterWithDocument:(id)arg1 timestamp:(double)arg2 forIdentifier:(id)arg3;
- (id)initWithFilterSpecification:(CDStruct_fd921134)arg1;

@end

