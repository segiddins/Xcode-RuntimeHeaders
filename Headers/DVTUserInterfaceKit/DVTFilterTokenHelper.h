//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilterTokenComparisonType, DVTFilterTokenType, NSArray;

@interface DVTFilterTokenHelper : NSObject
{
    NSArray *_tokenTypes;
    NSArray *_tokenComparisonTypes;
    DVTFilterTokenType *_defaultTokenType;
    DVTFilterTokenComparisonType *_defaultTokenComparisonType;
    NSArray *_tokenMenuItemList;
    NSArray *_tokenMenuItemListValueless;
}

+ (id)stringFormForGlobalOperatorType:(int)arg1;
+ (int)globalOperatorTypeFromString:(id)arg1;
+ (int)_globalOperatorTypeFromDisplayString:(id)arg1;
+ (id)_displayStringForOperatorType:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) DVTFilterTokenComparisonType *defaultTokenComparisonType; // @synthesize defaultTokenComparisonType=_defaultTokenComparisonType;
@property(readonly, nonatomic) DVTFilterTokenType *defaultTokenType; // @synthesize defaultTokenType=_defaultTokenType;
@property(readonly, nonatomic) NSArray *tokenComparisonTypes; // @synthesize tokenComparisonTypes=_tokenComparisonTypes;
@property(readonly, nonatomic) NSArray *tokenTypes; // @synthesize tokenTypes=_tokenTypes;
- (id)tokensForTokensFromPasteboard:(id)arg1;
- (id)tokenForValuelessType:(id)arg1;
- (id)valuelessTokenIconMenuItemsWithTarget:(id)arg1 andAction:(SEL)arg2;
- (id)menuItemsForToken:(id)arg1;
- (id)tokensFromString:(id)arg1;
- (id)_tokenComparisonTypeWithKeyString:(id)arg1;
- (id)_tokenTypeWithKeyString:(id)arg1;
- (id)initWithAvailableTypes:(id)arg1 comparisonTypes:(id)arg2 defaultType:(id)arg3 defaultComparisonType:(id)arg4;
- (void)_setupMenuItems;

@end

