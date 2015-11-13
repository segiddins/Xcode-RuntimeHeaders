//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBViewRasterizer : NSObject
{
}

+ (id)maskOfCell:(id)arg1 withSize:(struct CGSize)arg2 andColor:(id)arg3 renderingDestination:(id)arg4;
+ (id)imageOfCell:(id)arg1 withSize:(struct CGSize)arg2 renderingDestination:(id)arg3;
+ (id)viewOfCell:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)maskOfView:(id)arg1 withColor:(id)arg2 renderingDestination:(id)arg3;
+ (id)dragImageOfViews:(id)arg1 renderingDestination:(id)arg2;
+ (double)dragImageOpacity;
+ (id)imageOfViews:(id)arg1 withOpacity:(double)arg2 renderingDestination:(id)arg3;
+ (struct CGRect)boundingFrameForViews:(id)arg1;
+ (id)imageOfView:(id)arg1 renderingDestination:(id)arg2;
+ (id)imageOfView:(id)arg1 withScale:(double)arg2 renderingDestination:(id)arg3;
+ (id)imageOfView:(id)arg1 withScale:(double)arg2 andOpacity:(double)arg3 renderingDestination:(id)arg4;

@end

