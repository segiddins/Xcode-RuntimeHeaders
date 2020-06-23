//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTMacroExpansionReplacementOperator.h>

@class NSError;

@interface DVTMacroExpansionReplacementOperatorWithParseError : DVTMacroExpansionReplacementOperator
{
    NSError *_parseError;
}

+ (id)operatorName;
- (void).cxx_destruct;
- (id)stringByApplyingOperatorToString:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)parseError;
- (id)initWithReplacementExpression:(id)arg1 parseError:(id)arg2;

@end

