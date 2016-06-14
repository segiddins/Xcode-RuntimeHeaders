//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPURenderTargetEditor/DYCacheableResource-Protocol.h>
#import <GPURenderTargetEditor/NSObject-Protocol.h>

@class NSData, NSString;

@protocol DYTextureImage <NSObject, DYCacheableResource>
+ (NSString *)textureImageKeyForLevel:(unsigned int)arg1 layer:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned long long offset;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) int layerIndex;
@property(readonly, nonatomic) int mipmapLevel;
@property(readonly, nonatomic) unsigned int numSamples;
@property(readonly, nonatomic) unsigned long long depth;
@property(readonly, nonatomic) unsigned long long height;
@property(readonly, nonatomic) unsigned long long width;
@property(readonly, nonatomic) unsigned int genericFormat;
- (NSData *)uncompressedData;
@end

