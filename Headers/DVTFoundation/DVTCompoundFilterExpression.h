//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTFilterExpression.h>

#import <DVTFoundation/NSCopying-Protocol.h>
#import <DVTFoundation/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface DVTCompoundFilterExpression : DVTFilterExpression <NSCopying, NSSecureCoding>
{
    NSMutableArray *_subExpressions;
    unsigned long long _expressionOperator;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) unsigned long long expressionOperator; // @synthesize expressionOperator=_expressionOperator;
@property(retain) NSMutableArray *subExpressions; // @synthesize subExpressions=_subExpressions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)areAllSubExpressionsOfType:(id)arg1;
- (id)compoundExpressionExcludingIdentifiers:(id)arg1;
- (id)compoundExpressionIncludingIdentifiers:(id)arg1;
- (id)_compoundExpressionWithIdentifiers:(id)arg1 excludeIdentifiers:(BOOL)arg2;
- (id)initWithIdentifier:(id)arg1 subExpressions:(id)arg2 expressionOperator:(unsigned long long)arg3 isNegation:(BOOL)arg4;
- (id)initWithIdentifier:(id)arg1 subExpressions:(id)arg2 expressionOperator:(unsigned long long)arg3;
- (id)initWithSubExpressions:(id)arg1 expressionOperator:(unsigned long long)arg2;

@end

