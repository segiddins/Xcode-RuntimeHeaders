//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface GPUReportChartData : NSObject
{
    NSArray *_currentData;
    NSArray *_baselineData;
    NSArray *_columnTitles;
    NSArray *_availableFields;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *availableFields; // @synthesize availableFields=_availableFields;
@property(retain, nonatomic) NSArray *columnTitles; // @synthesize columnTitles=_columnTitles;
@property(retain, nonatomic) NSArray *baselineData; // @synthesize baselineData=_baselineData;
@property(retain, nonatomic) NSArray *currentData; // @synthesize currentData=_currentData;
- (id)initWithCurrentData:(id)arg1 columnTitles:(id)arg2 availableFields:(id)arg3;

@end

