//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DTHistogramBin, NSColor;

@interface DTHistogramBar : NSObject
{
    unsigned long long height;
    DTHistogramBin *bin;
    unsigned long long binOffset;
    NSColor *color;
    struct CGRect rect;
}

- (void).cxx_destruct;
@property(retain) NSColor *color; // @synthesize color;
@property(nonatomic) struct CGRect rect; // @synthesize rect;
@property(nonatomic) unsigned long long binOffset; // @synthesize binOffset;
@property DTHistogramBin *bin; // @synthesize bin;
@property(nonatomic) unsigned long long height; // @synthesize height;

@end

