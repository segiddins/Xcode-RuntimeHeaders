//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/DYTexture-Protocol.h>

@class NSString;

@protocol DYPMTLTexture <DYTexture>
- (unsigned int)elementCount;
- (NSString *)pixelFormatAsString;
- (NSString *)typeAsString;
- (BOOL)isColor;
- (BOOL)isStencil;
- (BOOL)isDepth;
- (BOOL)isPacked;
@property(nonatomic, readonly) unsigned long long arrayLength;
@end

