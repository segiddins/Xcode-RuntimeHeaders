//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HexFiend/NSCopying-Protocol.h>

@interface HFRangeWrapper : NSObject <NSCopying>
{
    CDStruct_91ee6ea3 range;
}

+ (void)getRanges:(CDStruct_91ee6ea3 *)arg1 fromArray:(id)arg2;
+ (id)organizeAndMergeRanges:(id)arg1;
+ (id)withRanges:(const CDStruct_91ee6ea3 *)arg1 count:(unsigned long long)arg2;
+ (id)withRange:(CDStruct_91ee6ea3)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (CDStruct_91ee6ea3)HFRange;

@end

