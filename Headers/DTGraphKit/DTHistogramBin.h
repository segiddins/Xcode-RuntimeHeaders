//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface DTHistogramBin : NSObject
{
    _Bool isFake;
    NSString *name;
    double start;
    double end;
    NSMutableArray *bars;
}

@property(retain) NSMutableArray *bars; // @synthesize bars;
@property(nonatomic) _Bool isFake; // @synthesize isFake;
@property(nonatomic) double end; // @synthesize end;
@property(nonatomic) double start; // @synthesize start;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)init;

@end

