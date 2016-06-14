//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface DTRangeArray : NSArray
{
    unsigned long long _count;
    struct _NSRange *_ranges;
}

+ (void)initialize;
- (id)normalizedRangeArray;
- (unsigned long long)indexOfRangeContainingOrFollowing:(unsigned long long)arg1;
- (unsigned long long)indexOfRangeContainingOrPreceding:(unsigned long long)arg1;
- (unsigned long long)indexOfRangeFollowing:(unsigned long long)arg1;
- (unsigned long long)indexOfRangePreceding:(unsigned long long)arg1;
- (struct _NSRange)lastRange;
- (struct _NSRange)firstRange;
- (unsigned long long)indexOfRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;
- (id)initWithRanges:(const struct _NSRange *)arg1 count:(unsigned long long)arg2;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;

@end

