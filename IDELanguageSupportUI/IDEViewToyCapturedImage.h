//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface IDEViewToyCapturedImage : NSObject
{
    struct CGImage *_image;
    NSDate *_captureDate;
    struct CGSize _size;
}

+ (id)dummyImageWithCaptureDate:(id)arg1;
@property(readonly) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) struct CGImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCaptureDate:(id)arg1;
- (id)initWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 captureDate:(id)arg3;

@end

