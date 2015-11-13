//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IBRelativeMeasurement : NSObject
{
    NSArray *measurementLines;
    struct CGRect sourceFrame;
    struct CGRect destinationFrame;
}

+ (id)emptyRelativeMeasurement;
@property(readonly) NSArray *measurementLines; // @synthesize measurementLines;
@property(readonly) struct CGRect destinationFrame; // @synthesize destinationFrame;
@property(readonly) struct CGRect sourceFrame; // @synthesize sourceFrame;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDesinationFrame:(struct CGRect)arg1 andSourceFrame:(struct CGRect)arg2 andMeasurementLines:(id)arg3;

@end

