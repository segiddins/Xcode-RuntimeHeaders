//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MISSING_TYPE, NSLayoutConstraint, NSTextField, _TtC11GPUDebugger18GPUImageRenderView;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger48GPUShaderDebuggerVariableSnapshotTextureCellView : NSTableCellView
{
    MISSING_TYPE *textureView;
    MISSING_TYPE *pixelFormatView;
    MISSING_TYPE *widthView;
    MISSING_TYPE *heightView;
    MISSING_TYPE *depthView;
    MISSING_TYPE *constraintTextureW;
    MISSING_TYPE *constraintTextureH;
    MISSING_TYPE *session;
    MISSING_TYPE *variableSnapshotNode;
    MISSING_TYPE *variableSnapshot;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) NSLayoutConstraint *constraintTextureH; // @synthesize constraintTextureH;
@property(nonatomic, retain) NSLayoutConstraint *constraintTextureW; // @synthesize constraintTextureW;
@property(nonatomic, retain) NSTextField *depthView; // @synthesize depthView;
@property(nonatomic, retain) NSTextField *heightView; // @synthesize heightView;
@property(nonatomic, retain) NSTextField *widthView; // @synthesize widthView;
@property(nonatomic, retain) NSTextField *pixelFormatView; // @synthesize pixelFormatView;
@property(nonatomic, retain) _TtC11GPUDebugger18GPUImageRenderView *textureView; // @synthesize textureView;

@end
