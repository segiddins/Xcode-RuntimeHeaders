//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEDataMatrix.h>

@interface IDEDataMatrixSIn64 : IDEDataMatrix
{
    struct vector<long long, std::__1::allocator<long long>> *_columns;
}

- (unsigned long long)rowCount;
- (void)executeRowOperation:(const struct _IDEDataMatrixRowOp *)arg1 overColumns:(id)arg2;
- (long long)SInt64AtRow:(unsigned long long)arg1 column:(unsigned char)arg2;
- (void)addSInt64Rows:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateInt64Range:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1 descriptor:(struct _IDEDataMatrixDescriptor *)arg2;

@end

