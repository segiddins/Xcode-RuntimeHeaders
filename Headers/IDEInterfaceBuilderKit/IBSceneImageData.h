//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface IBSceneImageData : NSObject
{
    NSImage *_image;
    double _scaleFactor;
}

@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 scaleFactor:(double)arg2;

@end
