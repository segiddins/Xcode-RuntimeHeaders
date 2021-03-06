//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBCanvasOverlay.h>

@class IBDeviceConfiguration, NSObject;
@protocol IBSceneDetailDelegate;

@interface IBSceneDetailOverlay : IBCanvasOverlay
{
    NSObject<IBSceneDetailDelegate> *_detail;
    IBDeviceConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IBDeviceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSObject<IBSceneDetailDelegate> *detail; // @synthesize detail=_detail;
- (BOOL)scalesWithCanvasFrameChrome;
- (BOOL)canScaleIndependentlyFromCanvasContent;
- (void)drawRect:(struct CGRect)arg1;
- (void)setDetail:(id)arg1 configuration:(id)arg2;

@end

