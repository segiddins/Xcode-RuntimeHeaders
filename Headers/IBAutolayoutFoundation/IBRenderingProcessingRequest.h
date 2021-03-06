//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBAutolayoutFoundation/IBSceneUpdateProcessingRequest.h>

@class IOSurface;

@interface IBRenderingProcessingRequest : IBSceneUpdateProcessingRequest
{
    IOSurface *_ioSurface;
    BOOL _shouldRequestAsynchronously;
    unsigned int _ioSurfaceID;
}

+ (struct CGColorSpace *)colorSpace;
- (void).cxx_destruct;
@property(readonly, nonatomic) IOSurface *ioSurface; // @synthesize ioSurface=_ioSurface;
@property(readonly, nonatomic) unsigned int ioSurfaceID; // @synthesize ioSurfaceID=_ioSurfaceID;
@property(readonly, nonatomic) BOOL shouldRequestAsynchronously; // @synthesize shouldRequestAsynchronously=_shouldRequestAsynchronously;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (BOOL)requiresSynchronousResultProcessing;
- (id)initWithResultPhase:(long long)arg1 shouldRequestAsynchronously:(BOOL)arg2 usingIOSurface:(id)arg3 postProcessingBlock:(CDUnknownBlockType)arg4;
- (id)initWithResultPhase:(long long)arg1 postProcessingBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

