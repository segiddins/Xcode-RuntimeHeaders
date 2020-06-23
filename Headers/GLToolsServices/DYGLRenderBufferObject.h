//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GLToolsServices/DYGLResourceObject.h>

#import <GLToolsServices/DYRenderBuffer-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

@interface DYGLRenderBufferObject : DYGLResourceObject <DYRenderBuffer>
{
    BOOL _flipped;
    unsigned int _format;
    int _width;
    int _height;
    int _numSamples;
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) BOOL flipped; // @synthesize flipped=_flipped;
@property(readonly, nonatomic) int numSamples; // @synthesize numSamples=_numSamples;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned int format; // @synthesize format=_format;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long cachingCost;
@property(readonly, copy) NSString *description;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) unsigned long long containerID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isStatic;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) NSMutableDictionary *properties;
@property(readonly, nonatomic) CDStruct_b00b4bef resolution;
@property(readonly, nonatomic) unsigned int resourceType;
@property(readonly) Class superclass;

@end

