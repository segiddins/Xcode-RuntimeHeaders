//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class DTMutableOrderedSet;

@interface DTMutableOrderedSetEnumerator : NSEnumerator
{
    DTMutableOrderedSet *set;
    struct DTBucketTag *bucket;
    struct DTBucketTag *head;
    long long initialChangeCount;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithSet:(id)arg1 andHead:(struct DTBucketTag *)arg2;

@end

