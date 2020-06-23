//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUDebuggerController, GPUTraceOutlineItem, MISSING_TYPE, NSArray, NSDictionary, NSIndexSet, NSMutableArray, NSNumber, NSString, NSUUID, _TtC11GPUDebugger18GPUFindingLocation;
@protocol DYPAnalyzerFinding;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger16GPUFindingsGroup : NSObject
{
    MISSING_TYPE *uuid;
    MISSING_TYPE *subfindings;
    MISSING_TYPE *lock;
    MISSING_TYPE *debuggerController;
    MISSING_TYPE *outlineItem;
    MISSING_TYPE *issues;
    MISSING_TYPE *thumbnailTuple;
    MISSING_TYPE *info;
    MISSING_TYPE *$__lazy_storage_$_reportingOutlineItemName;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *reportingOutlineItemName;
@property(nonatomic, readonly) GPUTraceOutlineItem *reportingOutlineItem;
@property(nonatomic, readonly) id <DYPAnalyzerFinding> analyzerFinding;
@property(nonatomic, readonly) NSArray *guidances;
- (long long)benifitFor:(unsigned long long)arg1;
- (void)reportingItemInfoWithCallback:(CDUnknownBlockType)arg1;
- (void)thumbnailWithContentScale:(double)arg1 callback:(CDUnknownBlockType)arg2;
@property(nonatomic, readonly) _TtC11GPUDebugger18GPUFindingLocation *location;
@property(nonatomic, readonly) NSDictionary *statistics;
@property(nonatomic, readonly) id additionalData;
@property(nonatomic, readonly) NSIndexSet *functionIndices;
@property(nonatomic, readonly) NSString *details;
@property(nonatomic, readonly) unsigned long long severity;
@property(nonatomic, readonly) NSNumber *confidenceLevel;
@property(nonatomic, readonly) NSDictionary *rankings;
@property(nonatomic, readonly) unsigned long long category;
@property(nonatomic, readonly) NSString *findingType;
@property(nonatomic, readonly) NSString *shortTitle;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, retain) NSMutableArray *issues; // @synthesize issues;
@property(nonatomic) __weak GPUDebuggerController *debuggerController; // @synthesize debuggerController;
@property(nonatomic, copy) NSArray *subfindings;
@property(nonatomic, readonly) NSUUID *uuid;

@end
