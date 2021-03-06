//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUStateValue.h>

@class NSArray;

@interface GPUUniformStateValue : GPUStateValue
{
    BOOL _isRowMajor;
    unsigned int _offset;
    unsigned int _uniformType;
    unsigned int _matrixStride;
    NSArray *_quickLookData;
}

- (void).cxx_destruct;
@property(retain) NSArray *quickLookData; // @synthesize quickLookData=_quickLookData;
@property(readonly) BOOL isRowMajor; // @synthesize isRowMajor=_isRowMajor;
@property(readonly) unsigned int matrixStride; // @synthesize matrixStride=_matrixStride;
@property(readonly) unsigned int uniformType; // @synthesize uniformType=_uniformType;
@property(readonly) unsigned int offset; // @synthesize offset=_offset;
- (id)initWithUniformType:(unsigned int)arg1 offset:(unsigned int)arg2 matrixStride:(unsigned int)arg3 isRowMajor:(BOOL)arg4;

@end

