//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBSceneUpdateContentView, IBTargetRuntime, NSBezierPath, NSColor, NSImage, NSString;

@protocol IBSceneUpdateContentViewDelegate <NSObject>
@property(nonatomic) __weak IBSceneUpdateContentView *owningSceneUpdateContentView;
- (double)maskRotationInRadiansForContentView:(IBSceneUpdateContentView *)arg1;
- (NSImage *)maskImageForContentView:(IBSceneUpdateContentView *)arg1;
- (NSBezierPath *)normalizedBackgroundMaskPathForContentView:(IBSceneUpdateContentView *)arg1;
- (NSBezierPath *)normalizedMaskPathForContentView:(IBSceneUpdateContentView *)arg1;
- (NSString *)maskIdentifierForContentView:(IBSceneUpdateContentView *)arg1;
- (NSColor *)backgroundColorForSceneUpdateContentView:(IBSceneUpdateContentView *)arg1;
- (IBTargetRuntime *)targetRuntimeForSceneUpdateContentView:(IBSceneUpdateContentView *)arg1;
- (double)defaultScreenScaleForContentView:(IBSceneUpdateContentView *)arg1;
- (struct CGSize)defaultContentSizeForContentView:(IBSceneUpdateContentView *)arg1;
@end

