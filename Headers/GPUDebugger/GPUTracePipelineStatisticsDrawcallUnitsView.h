//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface GPUTracePipelineStatisticsDrawcallUnitsView : NSView
{
    NSNumber *_maximum;
    NSArray *_units;
}

- (void).cxx_destruct;
@property(retain) NSArray *units; // @synthesize units=_units;
@property(retain) NSNumber *maximum; // @synthesize maximum=_maximum;
- (void)drawRect:(struct CGRect)arg1;

@end

