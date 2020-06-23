//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GPUDependencyCGRenderer : NSObject
{
}

+ (void)renderDependencyGraph:(id)arg1 toContext:(struct CGContext *)arg2 withAnnotations:(id)arg3;
+ (void)renderCluster:(id)arg1 inGraph:(id)arg2 toContext:(struct CGContext *)arg3 withAnnotations:(id)arg4;
+ (void)renderEncoder:(id)arg1 inGraph:(id)arg2 toContext:(struct CGContext *)arg3 withAnnotations:(id)arg4;
+ (void)addIssue:(id)arg1 toAnnotations:(id)arg2 withBounds:(struct CGRect)arg3;
+ (void)renderResource:(id)arg1 atSlotIndex:(unsigned long long)arg2 forEncoder:(id)arg3 inGraph:(id)arg4 atPosition:(struct CGPoint)arg5 withThumbnails:(id)arg6 toContext:(struct CGContext *)arg7 withAnnotations:(id)arg8;
+ (void)renderTitleForEncoder:(id)arg1 atPosition:(struct CGPoint)arg2 inGraph:(id)arg3 toContext:(struct CGContext *)arg4;
+ (double)getHeightForEncoderStats:(id)arg1;
+ (void)renderStatsForEncoder:(id)arg1 withOrigin:(struct CGPoint)arg2 toContext:(struct CGContext *)arg3;
+ (void)renderIconForEncoder:(unsigned long long)arg1 inFrame:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
+ (void)renderEdgesForGraph:(id)arg1 toContext:(struct CGContext *)arg2;
+ (struct CGPoint)smoothLineToPoint:(struct CGPoint)arg1 fromPoint:(struct CGPoint)arg2 inContext:(struct CGContext *)arg3;
+ (id)exportDependencyGraph:(id)arg1 toURL:(id)arg2;
+ (struct CGRect)renderStatValue:(id)arg1 withTitle:(id)arg2 atPoint:(struct CGPoint *)arg3 inContext:(struct CGContext *)arg4 rightAlign:(BOOL)arg5;
+ (id)labelForResource:(id)arg1;
+ (BOOL)checkIssuesForResource:(id)arg1;
+ (id)thumbnailForResource:(id)arg1 fromThumbnailDictionary:(id)arg2;

@end
