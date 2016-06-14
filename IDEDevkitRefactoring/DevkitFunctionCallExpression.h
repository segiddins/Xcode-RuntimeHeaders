//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEDevkitRefactoring/DevkitExpression.h>

@class DevkitLocation;

@interface DevkitFunctionCallExpression : DevkitExpression
{
    DevkitExpression *_functionExpr;
    DevkitLocation *_lparen;
    DevkitLocation *_rparen;
}

- (void).cxx_destruct;
- (id)searchString;
- (id)shortDescription;
- (id)prettyPrint;
- (id)rightParenLocation;
- (id)leftParenLocation;
- (void)setRightParenLoc:(id)arg1;
- (void)setLeftParenLoc:(id)arg1;
- (id)functionExpr;
- (id)overallChildren;
- (id)expressionContainingLocation:(id)arg1;
- (id)overallLocation;
- (void)setFunctionExpr:(id)arg1;
- (void)cleanup;
- (id)init;

@end

