//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;
@protocol IBRenderingDestination;

@interface IBViewRenderer : NSObject
{
    NSView *_view;
    id <IBRenderingDestination> _destination;
}

+ (id)rendererWithView:(id)arg1 renderingDestination:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <IBRenderingDestination> destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSView *view; // @synthesize view=_view;
- (void)renderIntoCoreGraphicsContext:(id)arg1 scale:(double)arg2 appearance:(id)arg3;
- (void)renderIntoCoreGraphicsContext:(id)arg1 scale:(double)arg2;
- (id)renderViewImageWithAppearance:(id)arg1;
- (void)ignoreAutolayoutStatusInvalidationForDocument:(id)arg1 during:(CDUnknownBlockType)arg2;
- (id)renderContentWithAppearance:(id)arg1;
- (void)invokeWithDestinationScaleFactors:(CDUnknownBlockType)arg1;
- (id)initWithView:(id)arg1 renderingDestination:(id)arg2;

@end

