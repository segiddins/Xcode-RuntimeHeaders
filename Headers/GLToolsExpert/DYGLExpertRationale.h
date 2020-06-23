//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GLToolsExpert/NSCopying-Protocol.h>
#import <GLToolsExpert/NSSecureCoding-Protocol.h>

@class DYGLExpertConclusion, NSArray, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface DYGLExpertRationale : NSObject <NSSecureCoding, NSCopying>
{
    DYGLExpertConclusion *_currentConclusion;
    NSMutableDictionary *_conclusionDict;
    NSMutableArray *_invalidConclusions;
    NSMutableDictionary *_conclusionTranslations;
    NSMutableDictionary *_evidenceTranslations;
    unsigned long long _numExpertIssues;
    NSArray *_issues;
    int _generationReason;
    BOOL _valid;
    DYGLExpertConclusion *_lastCreatedConclusion;
    NSString *_dominantLimitConclusionName;
}

+ (void)_debugPrintFormattedConclusion:(id)arg1;
+ (void)_debugPrintFormattedConclusions:(id)arg1;
+ (id)_capitalize:(id)arg1;
+ (id)_notConclusion:(id)arg1;
+ (id)relOpString:(int)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *dominantLimitConclusionName; // @synthesize dominantLimitConclusionName=_dominantLimitConclusionName;
@property(readonly, nonatomic) DYGLExpertConclusion *lastCreatedConclusion; // @synthesize lastCreatedConclusion=_lastCreatedConclusion;
@property(readonly, nonatomic) BOOL valid; // @synthesize valid=_valid;
- (void)translateConclusionAndSupportingConclusions:(id)arg1 intoArray:(id)arg2;
- (void)resetVisitStatus;
- (void)translateFindings;
- (id)_translateResultGLLimited:(id)arg1;
- (id)translateResult:(id)arg1;
- (id)_translateConclusion:(id)arg1;
- (void)defineEvidenceTranslation:(id)arg1 withSubject:(id)arg2 withVerb:(id)arg3 withObject:(id)arg4;
- (void)defineConclusionTranslation:(id)arg1 withSubject:(id)arg2 withVerb:(id)arg3 withObject:(id)arg4;
- (void)_initRationaleTranslations;
- (void)debugPrintFormatted;
- (void)translateDatumEvidence:(id)arg1 intoArray:(id)arg2;
- (void)translateNamedEvidence:(id)arg1 intoArray:(id)arg2;
- (void)evidence:(id)arg1 value:(id)arg2 relOp:(int)arg3 compareValue:(id)arg4;
- (void)evidence:(id)arg1 value:(id)arg2;
- (void)evidenceAnalyzerFinding:(id)arg1;
- (void)evidence:(id)arg1;
- (id)conclusionLookup:(id)arg1;
- (void)conclude:(id)arg1 inFile:(id)arg2 atLine:(id)arg3;
- (void)conclude:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

