//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HexFiend/HFByteSlice.h>

@interface HFRepeatingDataByteSlice : HFByteSlice
{
    unsigned long long start;
    unsigned long long length;
}

+ (void)initialize;
- (id)subsliceWithRange:(CDStruct_91ee6ea3)arg1;
- (void)copyBytes:(char *)arg1 range:(CDStruct_91ee6ea3)arg2;
- (unsigned long long)length;
- (id)initWithRepeatingDataLength:(unsigned long long)arg1;

@end

