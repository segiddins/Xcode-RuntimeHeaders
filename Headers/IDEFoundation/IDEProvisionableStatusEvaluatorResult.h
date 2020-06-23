//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEProvisionableStatusEvaluation, NSString;

@interface IDEProvisionableStatusEvaluatorResult : NSObject
{
    NSString *_configuration;
    IDEProvisionableStatusEvaluation *_evaluation;
    IDEProvisionableStatusEvaluation *_iOSMacEvaluation;
}

+ (id)resultWithConfiguration:(id)arg1 evaluation:(id)arg2 iOSMacEvaluation:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDEProvisionableStatusEvaluation *iOSMacEvaluation; // @synthesize iOSMacEvaluation=_iOSMacEvaluation;
@property(readonly, nonatomic) IDEProvisionableStatusEvaluation *evaluation; // @synthesize evaluation=_evaluation;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;

@end
