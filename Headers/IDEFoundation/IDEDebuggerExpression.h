//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDEDebuggerExpression : NSObject <NSCopying>
{
    NSString *_expressionString;
    NSString *_result;
}

- (void).cxx_destruct;
@property(copy) NSString *result; // @synthesize result=_result;
@property(copy) NSString *expressionString; // @synthesize expressionString=_expressionString;
- (void)resetResult;
- (BOOL)hasBeenEvaluated;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExpressionString:(id)arg1;

@end

