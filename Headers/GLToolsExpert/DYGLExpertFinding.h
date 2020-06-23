//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYInvestigatorFinding.h>

#import <GLToolsExpert/NSCopying-Protocol.h>
#import <GLToolsExpert/NSSecureCoding-Protocol.h>

@class DYGLExpertExperimentRunner, DYInvestigatorRecommendation, NSArray, NSMutableArray, NSMutableDictionary;

@interface DYGLExpertFinding : DYInvestigatorFinding <NSCopying, NSSecureCoding>
{
    int kind;
    float confidence;
    unsigned int severity;
    NSMutableDictionary *evidence;
    NSMutableArray *analyzerFindingList;
    DYInvestigatorRecommendation *recommendation;
    DYGLExpertExperimentRunner *_experimentRunner;
    BOOL verified;
    NSArray *rationaleTranslation;
    struct DYGLExpertFindingPrototype *_prototype;
}

+ (void)sortFindings:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *rationaleTranslation; // @synthesize rationaleTranslation;
@property(nonatomic) BOOL verified; // @synthesize verified;
@property(retain, nonatomic) DYInvestigatorRecommendation *recommendation; // @synthesize recommendation;
@property(readonly, nonatomic) NSMutableArray *analyzerFindingList; // @synthesize analyzerFindingList;
@property(retain, nonatomic) NSMutableDictionary *evidence; // @synthesize evidence;
@property(nonatomic) unsigned int severity; // @synthesize severity;
@property(nonatomic) float confidence; // @synthesize confidence;
@property(readonly, nonatomic) int kind; // @synthesize kind;
- (void).cxx_destruct;
- (void)_convertLegacyRecommendation:(id)arg1;
- (void)_convertLegacyEvidence:(id)arg1;
- (id)_domainString;
- (id)kindString;
- (void)printFormatted:(int)arg1;
- (id)nameValueStringForEvidenceItem:(id)arg1 withObject:(id)arg2;
- (id)verifyWithExpert:(id)arg1 withCase:(id)arg2;
- (id)numberOfVerificationExperiments;
- (BOOL)createVerificationExperiments:(id)arg1;
- (void)generateRecommendation:(id)arg1;
- (void)associateAnalyzerFindings:(id)arg1;
- (void)addAnalyzerFinding:(id)arg1;
- (id)rationaleString;
- (id)findingDescription;
- (int)domain;
- (id)synopsis;
@property(readonly, nonatomic) unsigned int urgency;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(int)arg1 withConfidence:(float)arg2;
- (id)init;
- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

