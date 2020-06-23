//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DYInvestigatorFinding, GPUTraceOutlineItem, NSString;

@interface GPUInvestigatorReportResource : NSObject
{
    unsigned int _type;
    unsigned long long _drawFunctionIndex;
    unsigned long long _functionIndex;
    unsigned long long _objectID;
    double _totalFramePercent;
    double _currentTotalFrameTime;
    double _baselineTotalFrameTime;
    NSString *_label;
    DYInvestigatorFinding *_investigatorFinding;
    GPUTraceOutlineItem *_outlineItem;
}

+ (double)maximumFrameTime;
+ (void)setMaximumFrameTime:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak GPUTraceOutlineItem *outlineItem; // @synthesize outlineItem=_outlineItem;
@property(nonatomic) __weak DYInvestigatorFinding *investigatorFinding; // @synthesize investigatorFinding=_investigatorFinding;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) double baselineTotalFrameTime; // @synthesize baselineTotalFrameTime=_baselineTotalFrameTime;
@property(nonatomic) double currentTotalFrameTime; // @synthesize currentTotalFrameTime=_currentTotalFrameTime;
@property(nonatomic) double totalFramePercent; // @synthesize totalFramePercent=_totalFramePercent;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(nonatomic) unsigned long long functionIndex; // @synthesize functionIndex=_functionIndex;
@property(nonatomic) unsigned long long drawFunctionIndex; // @synthesize drawFunctionIndex=_drawFunctionIndex;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)displayableString;

@end
