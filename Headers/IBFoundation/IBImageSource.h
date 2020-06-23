//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IBImageSource : NSObject
{
    NSDictionary *_options;
    struct CGImageSource *_imageSource;
    struct CGPDFDocument *_pdfDocument;
    struct CGDataProvider *_dataProvider;
}

+ (BOOL)isSupportedImageUTI:(id)arg1;
+ (id)imageSourceWithData:(id)arg1 options:(id)arg2;
+ (id)imageSourceWithPath:(id)arg1 options:(id)arg2;
@property(nonatomic) struct CGDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) struct CGPDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property(nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)addImageAtIndex:(long long)arg1 toImageDestination:(struct CGImageDestination *)arg2 preferredSize:(id)arg3 scale:(double)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (struct CGImage *)imageAtIndex:(long long)arg1 preferredSize:(id)arg2 scale:(double)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (id)fileUTI;
- (id)fileType;
- (id)colorProfileNameForImageAtIndex:(long long)arg1;
- (id)pixelSizeForImageAtIndex:(long long)arg1 consideringOrientation:(BOOL)arg2;
- (id)pixelSizeForImageAtIndex:(long long)arg1;
- (long long)imageCount;
- (void)dealloc;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2;

@end

