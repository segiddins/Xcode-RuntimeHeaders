//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTFoldingTokenType : NSObject
{
}

+ (void)unregisterFoldingTokenType:(id)arg1;
+ (void)registerFoldingTokenType:(id)arg1;
+ (id)registeredFoldingTokenTypeForClass:(Class)arg1;
+ (id)registeredFoldingTokenTypes;
+ (void)initialize;
- (id)stringByStrippingTokens:(id)arg1;
- (struct _NSRange)rangeOfTokenMatchingInString:(id)arg1 range:(struct _NSRange)arg2;

@end

