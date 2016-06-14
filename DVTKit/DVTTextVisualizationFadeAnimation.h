//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class DVTTextVisualization;

@interface DVTTextVisualizationFadeAnimation : NSAnimation
{
    double _initialOpacity;
    DVTTextVisualization *_visualization;
    double _targetOpacity;
    CDUnknownBlockType _completionBlock;
}

@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property double targetOpacity; // @synthesize targetOpacity=_targetOpacity;
@property(retain) DVTTextVisualization *visualization; // @synthesize visualization=_visualization;
- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;
- (id)initWithVisualization:(id)arg1;

@end

