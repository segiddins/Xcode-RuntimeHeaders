//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPURenderBufferCanvas.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GPURenderBufferCanvasGrid : GPURenderBufferCanvas
{
    unsigned int _maxColumns;
    unsigned int _maxRows;
    unsigned int _renderbufferCount;
    NSMutableArray *_grid;
}

- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)drawRect:(struct CGRect)arg1;
- (id)constraintsForRenderBufferViews:(id)arg1;
- (void)_configurationForRenderbuffers:(id)arg1;
- (void)drawSeperatorLines:(struct CGRect)arg1;
- (void)viewDidEndLiveResize;
- (void)setup;

@end
