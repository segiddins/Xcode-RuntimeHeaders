//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface IDEiPhoneOrganizerCompareFilter : CIFilter
{
    CIImage *inputImage1;
    CIImage *inputImage2;
    CIImage *inputImage3;
    CIImage *inputImage4;
    NSNumber *inputTolerance;
}

- (void).cxx_destruct;
- (id)outputImage;
- (id)init;

@end

