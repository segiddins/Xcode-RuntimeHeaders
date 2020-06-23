//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GLToolsServices/DYTextureImage-Protocol.h>

@class DYGLTextureImageBackingStore, NSData, NSString;

@interface DYGLTextureImage : NSObject <DYTextureImage>
{
    DYGLTextureImageBackingStore *_backingStore;
    NSData *_data;
    NSData *_uncompressedData;
    unsigned int _genericFormat;
    int _mipmapLevel;
    int _layerIndex;
    unsigned int _numSamples;
    unsigned int _target;
    unsigned int _internalFormat;
    unsigned int _format;
    unsigned int _dataType;
    int _border;
    unsigned int _engineFormat;
    unsigned int _engineDataType;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _depth;
    unsigned long long _offset;
}

+ (id)imagesFromProperties:(id)arg1;
+ (id)imagesFromFunction:(const struct Function *)arg1 resolver:(CDUnknownBlockType)arg2;
+ (id)_imagesFromImage:(id)arg1 maxLevelSpecified:(int)arg2 function:(const struct Function *)arg3;
+ (id)_imagesFromLayeredTexture:(id)arg1 function:(const struct Function *)arg2 numLayers:(int)arg3;
+ (unsigned long long)_computeOffsetFromFunction:(const struct Function *)arg1 forImage:(id)arg2 numLayers:(int)arg3;
+ (id)_imagesFromPaletteTexture:(id)arg1 numLevels:(int)arg2;
+ (id)textureImageKeyForLevel:(unsigned int)arg1 layer:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int engineDataType; // @synthesize engineDataType=_engineDataType;
@property(readonly, nonatomic) unsigned int engineFormat; // @synthesize engineFormat=_engineFormat;
@property(readonly, nonatomic) int border; // @synthesize border=_border;
@property(readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned int format; // @synthesize format=_format;
@property(readonly, nonatomic) unsigned int internalFormat; // @synthesize internalFormat=_internalFormat;
@property(readonly, nonatomic) unsigned int target; // @synthesize target=_target;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned int numSamples; // @synthesize numSamples=_numSamples;
@property(readonly, nonatomic) int layerIndex; // @synthesize layerIndex=_layerIndex;
@property(readonly, nonatomic) int mipmapLevel; // @synthesize mipmapLevel=_mipmapLevel;
@property(readonly, nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned int genericFormat; // @synthesize genericFormat=_genericFormat;
@property(readonly, nonatomic) unsigned long long cachingCost;
- (void)_processTextureImageUploadInfo:(const struct Function *)arg1;
- (id)uncompressedData;
@property(readonly, nonatomic) NSData *palette;
- (id)planeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long planeCount;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) unsigned long long imageBytes;
@property(readonly, nonatomic) unsigned long long rowBytes;
@property(readonly, copy) NSString *description;
- (id)_initWithProperties:(id)arg1;
- (id)_initWithFunction:(const struct Function *)arg1 resolver:(CDUnknownBlockType)arg2;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long planeIndex;
@property(readonly) Class superclass;

@end

