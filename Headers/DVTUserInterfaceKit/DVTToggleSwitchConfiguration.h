//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTToggleSwitchConfiguration : NSObject
{
    BOOL _hasBorder;
    double _trackCornerRadius;
    double _knobRectInset;
    double _knobCornerRadius;
    struct CGSize _trackSize;
}

+ (id)defaultConfiguration;
+ (id)dfr_configuration;
@property(nonatomic) BOOL hasBorder; // @synthesize hasBorder=_hasBorder;
@property(nonatomic) double knobCornerRadius; // @synthesize knobCornerRadius=_knobCornerRadius;
@property(nonatomic) double knobRectInset; // @synthesize knobRectInset=_knobRectInset;
@property(nonatomic) double trackCornerRadius; // @synthesize trackCornerRadius=_trackCornerRadius;
@property(nonatomic) struct CGSize trackSize; // @synthesize trackSize=_trackSize;
- (id)initWithTrackSize:(struct CGSize)arg1 trackCornerRadius:(double)arg2 knobRectInset:(double)arg3 knobCornerRadius:(double)arg4 hasBorder:(BOOL)arg5;

@end

