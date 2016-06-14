//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEDataMatrix : NSObject
{
    const struct _IDEDataMatrixDescriptor *_descriptor;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
@property(readonly, nonatomic) struct _IDEDataMatrixDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void)executeRowOperation:(const struct _IDEDataMatrixRowOp *)arg1 overColumns:(id)arg2;
@property(readonly) unsigned long long rowCount;
- (long long)SInt64AtRow:(unsigned long long)arg1 column:(unsigned char)arg2;
- (void)enumerateInt64Range:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addSInt64Rows:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 descriptor:(struct _IDEDataMatrixDescriptor *)arg2;

@end

