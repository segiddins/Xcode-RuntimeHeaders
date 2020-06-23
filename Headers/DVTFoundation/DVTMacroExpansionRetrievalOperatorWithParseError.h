//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTMacroExpansionRetrievalOperator.h>

@class NSError;

@interface DVTMacroExpansionRetrievalOperatorWithParseError : DVTMacroExpansionRetrievalOperator
{
    NSError *_parseError;
}

+ (id)operatorName;
- (void).cxx_destruct;
- (id)stringByApplyingOperatorToString:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)parseError;
- (id)initWithParseError:(id)arg1;

@end

