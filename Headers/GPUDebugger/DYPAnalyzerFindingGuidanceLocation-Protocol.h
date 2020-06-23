//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class NSMutableDictionary;
@protocol DYPAnalyzerFinding;

@protocol DYPAnalyzerFindingGuidanceLocation <NSObject>
@property(nonatomic, readonly) NSMutableDictionary *hints;
@property(nonatomic, readonly) unsigned int resourceType;
@property(nonatomic, readonly) unsigned long long resourceID;
@property(nonatomic, readonly) long long subCommandIndex;
@property(nonatomic, readonly) long long fileFunctionIndex;
@property(nonatomic, readonly) long long functionIndex;
@property(nonatomic, readonly) unsigned long long typeHint;
@property(nonatomic, readonly) unsigned long long levelHint;
@property(nonatomic, readonly) unsigned long long type;
@property(nonatomic, readonly) id <DYPAnalyzerFinding> finding;
@end

