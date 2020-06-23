//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SMSourceModel;

@interface SourceModelAutoOpenBracketImpl : NSObject
{
    NSString *_string;
    SMSourceModel *_sourceModel;
}

- (void).cxx_destruct;
- (BOOL)_isExpressionItemLikeFunction:(id)arg1;
- (BOOL)_isExpressionItemLikelyTarget:(id)arg1;
- (BOOL)_isItemExpression:(id)arg1;
- (unsigned long long)_reverseParseExpressionFromIndex:(unsigned long long)arg1 ofParent:(id)arg2;
- (unsigned long long)_startLocationForObjCMethodCallAtLocation:(unsigned long long)arg1 withArgs:(char *)arg2;
- (unsigned long long)locationForOpeningBracketForClosingBracket:(unsigned long long)arg1 withArgs:(char *)arg2;
- (BOOL)isAtFirstArgumentInMethodCallAtLocation:(unsigned long long)arg1 inCall:(char *)arg2;
- (BOOL)_isTextEmptyInBetweenItem:(id)arg1 prevItem:(id)arg2;
- (id)_textInBetweenItem:(id)arg1 prevItem:(id)arg2;
- (id)_enclosingParenLikeItemAtLocation:(unsigned long long)arg1;
- (id)_parenLikeItemAtLocation:(unsigned long long)arg1;
- (BOOL)_isItemParenExpression:(id)arg1;
- (BOOL)_isItemBlockExpression:(id)arg1;
- (BOOL)_isItemBracketLikeExpression:(id)arg1;
- (BOOL)_isItemBracketExpression:(id)arg1;
- (id)stringForItem:(id)arg1;
- (id)initWithSourceModel:(id)arg1 string:(id)arg2;

@end

