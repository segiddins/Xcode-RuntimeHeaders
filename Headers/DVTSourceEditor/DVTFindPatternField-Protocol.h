//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceEditor/NSObject-Protocol.h>

@class DVTFindPatternComponents, NSArray, NSFont, NSString;
@protocol DVTFindPatternManager;

@protocol DVTFindPatternField <NSObject>
- (NSFont *)font;
- (NSString *)plainTextValue;
- (void)setFindPatternPropertyList:(id)arg1;
- (id)findPatternPropertyList;
- (BOOL)hasFindPattern;
- (NSString *)replacementExpression;
- (NSString *)regularExpression;
@property(nonatomic) BOOL searchesImmediatelyAfterInsertingPattern;
@property(nonatomic, copy) DVTFindPatternComponents *findPatternComponents;
@property(nonatomic) __weak id <DVTFindPatternManager> findPatternManager;
- (void)setFindPatternArray:(NSArray *)arg1;
@end

