//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSIndexSet, NSMutableArray, NSNumber, NSString;
@protocol DYPAnalyzerFindingGuidanceLocation;

@protocol DYPAnalyzerFinding <NSObject>
@property(nonatomic, retain) NSMutableArray *issues;
@property(nonatomic, readonly) id <DYPAnalyzerFindingGuidanceLocation> location;
@property(nonatomic, readonly) NSArray *guidance;
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
@end

