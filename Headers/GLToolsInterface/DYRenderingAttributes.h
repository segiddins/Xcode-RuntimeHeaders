//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUHistogram, MISSING_TYPE;

@interface DYRenderingAttributes : NSObject
{
    GPUHistogram *_histograms[4];
    BOOL _hasUserDefinedChannelMappings;
    BOOL _hasUserDefinedToneMapping;
    BOOL _flipped;
    BOOL _premultipliedAlpha;
    BOOL _combineColorChannelHistograms;
    union DYTextureChannelMappings _channelMappings;
    union DYTextureChannelMappings _defaultChannelMappings;
    int _selectedMipmapLevel;
    int _selectedLayer;
    int _renderTargetArrayIndex;
    unsigned int _pixelFormat;
    MISSING_TYPE *_enabledStates;
    MISSING_TYPE *_minValues;
    MISSING_TYPE *_maxValues;
    MISSING_TYPE *_tonemappingMinValues;
    MISSING_TYPE *_tonemappingMaxValues;
    MISSING_TYPE *_defaultTonemappingMinValues;
    MISSING_TYPE *_defaultTonemappingMaxValues;
    MISSING_TYPE *_histogramMinValues;
    MISSING_TYPE *_histogramMaxValues;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL combineColorChannelHistograms; // @synthesize combineColorChannelHistograms=_combineColorChannelHistograms;
@property(nonatomic) MISSING_TYPE *histogramMaxValues; // @synthesize histogramMaxValues=_histogramMaxValues;
@property(nonatomic) MISSING_TYPE *histogramMinValues; // @synthesize histogramMinValues=_histogramMinValues;
@property(nonatomic) BOOL premultipliedAlpha; // @synthesize premultipliedAlpha=_premultipliedAlpha;
@property(readonly, nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) BOOL flipped; // @synthesize flipped=_flipped;
@property(nonatomic) int renderTargetArrayIndex; // @synthesize renderTargetArrayIndex=_renderTargetArrayIndex;
@property(nonatomic) int selectedLayer; // @synthesize selectedLayer=_selectedLayer;
@property(nonatomic) int selectedMipmapLevel; // @synthesize selectedMipmapLevel=_selectedMipmapLevel;
@property(nonatomic) BOOL hasUserDefinedToneMapping; // @synthesize hasUserDefinedToneMapping=_hasUserDefinedToneMapping;
@property(nonatomic) MISSING_TYPE *defaultTonemappingMaxValues; // @synthesize defaultTonemappingMaxValues=_defaultTonemappingMaxValues;
@property(nonatomic) MISSING_TYPE *defaultTonemappingMinValues; // @synthesize defaultTonemappingMinValues=_defaultTonemappingMinValues;
@property(nonatomic) MISSING_TYPE *tonemappingMaxValues; // @synthesize tonemappingMaxValues=_tonemappingMaxValues;
@property(nonatomic) MISSING_TYPE *tonemappingMinValues; // @synthesize tonemappingMinValues=_tonemappingMinValues;
@property(nonatomic) MISSING_TYPE *maxValues; // @synthesize maxValues=_maxValues;
@property(nonatomic) MISSING_TYPE *minValues; // @synthesize minValues=_minValues;
@property(nonatomic) BOOL hasUserDefinedChannelMappings; // @synthesize hasUserDefinedChannelMappings=_hasUserDefinedChannelMappings;
@property(nonatomic) union DYTextureChannelMappings defaultChannelMappings; // @synthesize defaultChannelMappings=_defaultChannelMappings;
@property(nonatomic) union DYTextureChannelMappings channelMappings; // @synthesize channelMappings=_channelMappings;
@property(nonatomic) MISSING_TYPE *enabledStates; // @synthesize enabledStates=_enabledStates;
- (id)description;
- (void)setHistogram:(id)arg1 forChannel:(long long)arg2;
- (id)histogramForChannel:(long long)arg1;
- (void)setTonemappingMaxValue:(double)arg1 forChannel:(long long)arg2;
- (void)setTonemappingMinValue:(double)arg1 forChannel:(long long)arg2;
- (void)setChannelMapping:(unsigned char)arg1 forChannel:(long long)arg2;
- (unsigned char)channelMappingForChannel:(long long)arg1;
- (void)setEnabledState:(BOOL)arg1 forChannel:(long long)arg2;
- (BOOL)enabledStateForChannel:(long long)arg1;
- (id)initWithPixelFormat:(unsigned int)arg1;

@end

