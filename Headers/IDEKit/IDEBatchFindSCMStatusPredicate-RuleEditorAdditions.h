//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindSCMStatusPredicate.h>

@interface IDEBatchFindSCMStatusPredicate (RuleEditorAdditions)
+ (unsigned long long)ruleEditorRowType;
+ (id)predicateFromClauseChoices:(id)arg1 subpredicates:(id)arg2;
+ (id)followOnClausesForRuleEditorClause:(id)arg1;
+ (id)ruleEditorClauseForDesiredStatus:(long long)arg1;
+ (id)displayStringForStatus:(long long)arg1;
+ (id)rootRuleEditorClause;
- (id)ruleEditorClauses;
@end

