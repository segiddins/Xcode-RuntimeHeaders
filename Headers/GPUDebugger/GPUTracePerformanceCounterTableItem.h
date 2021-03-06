//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/GPUFilterableObject-Protocol.h>

@class GPUTracePerformanceCounterTableGroup, NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface GPUTracePerformanceCounterTableItem : NSObject <GPUFilterableObject>
{
    BOOL _availablePerDraw;
    NSString *_name;
    NSString *_functionName;
    NSString *_valueString;
    NSString *_maxValueString;
    NSString *_averageValueString;
    NSString *_totalValueString;
    NSString *_medianValueString;
    NSString *_encoderValueString;
    NSString *_tooltip;
    NSString *_unit;
    GPUTracePerformanceCounterTableGroup *_group;
    unsigned long long _plane;
    NSSet *_filterItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *filterItems; // @synthesize filterItems=_filterItems;
@property(nonatomic) unsigned long long plane; // @synthesize plane=_plane;
@property(nonatomic) __weak GPUTracePerformanceCounterTableGroup *group; // @synthesize group=_group;
@property(nonatomic) BOOL availablePerDraw; // @synthesize availablePerDraw=_availablePerDraw;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(retain, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(retain, nonatomic) NSString *encoderValueString; // @synthesize encoderValueString=_encoderValueString;
@property(retain, nonatomic) NSString *medianValueString; // @synthesize medianValueString=_medianValueString;
@property(retain, nonatomic) NSString *totalValueString; // @synthesize totalValueString=_totalValueString;
@property(retain, nonatomic) NSString *averageValueString; // @synthesize averageValueString=_averageValueString;
@property(retain, nonatomic) NSString *maxValueString; // @synthesize maxValueString=_maxValueString;
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)pasteboardString;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *filterableChildObjects;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *parentFilterItems;
@property(readonly) Class superclass;

@end

