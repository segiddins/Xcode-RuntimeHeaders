//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/NSCopying-Protocol.h>
#import <DVTInstrumentsUtilities/NSMutableCopying-Protocol.h>

@interface XRIndexSet : NSObject <NSCopying, NSMutableCopying>
{
    struct _XRIndexRange _range;
    struct _XRIndexRange *_rangeArray;
    unsigned long long _arraySize;
    unsigned long long _numRanges;
}

+ (id)indexSetWithIndexesInRange:(struct _XRIndexRange)arg1;
+ (id)indexSetWithIndex:(unsigned long long)arg1;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)intersectsIndexesInRange:(struct _XRIndexRange)arg1;
- (BOOL)containsIndex:(unsigned long long)arg1;
- (unsigned long long)lastIndex;
- (unsigned long long)firstIndex;
- (unsigned long long)count;
- (unsigned long long)_queryRange:(struct _XRIndexRange)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithIndexes:(struct _XRIndexRange)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)init;

@end

