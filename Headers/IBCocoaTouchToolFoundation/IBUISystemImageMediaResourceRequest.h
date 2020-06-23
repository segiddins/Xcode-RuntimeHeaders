//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUIImageMediaResourceRequest.h>

@interface IBUISystemImageMediaResourceRequest : IBUIImageMediaResourceRequest
{
    double _scale;
    struct CGSize _minimumPixelSize;
    struct CGSize _maximumPixelSize;
    CDStruct_c519178c _renderInset;
}

+ (id)requestWithResourceName:(id)arg1 traits:(id)arg2 minimumPixelSize:(struct CGSize)arg3 maximumPixelSize:(struct CGSize)arg4 renderInset:(CDStruct_c519178c)arg5 scale:(double)arg6;
@property(readonly, nonatomic) CDStruct_c519178c renderInset; // @synthesize renderInset=_renderInset;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize maximumPixelSize; // @synthesize maximumPixelSize=_maximumPixelSize;
@property(readonly, nonatomic) struct CGSize minimumPixelSize; // @synthesize minimumPixelSize=_minimumPixelSize;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithResourceName:(id)arg1 traits:(id)arg2 minimumPixelSize:(struct CGSize)arg3 maximumPixelSize:(struct CGSize)arg4 renderInset:(CDStruct_c519178c)arg5 scale:(double)arg6;

@end
