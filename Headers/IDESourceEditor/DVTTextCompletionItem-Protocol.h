//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTRangeArray, DVTSourceCodeLanguage, NSArray, NSAttributedString, NSDictionary, NSImage, NSString;

@protocol DVTTextCompletionItem <NSObject>
@property(readonly) BOOL notRecommended;
@property(retain) DVTRangeArray *fuzzyMatchingRanges;
@property double fuzzyMatchingScore;
@property double priority;
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) long long priorityBucket;
@property(readonly) NSImage *icon;
@property(readonly, copy) NSAttributedString *descriptionText;
@property(readonly, copy) NSString *parentText;
@property(readonly, copy) NSString *completionText;
@property(readonly, copy) NSString *displayType;
@property(readonly, copy) NSString *displayText;
@property(readonly, copy, nonatomic) NSString *name;

@optional
@property(readonly) NSString *usr;
@property(readonly, copy) NSString *action;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly) DVTSourceCodeLanguage *language;
@property(readonly, copy) NSString *displaySignature;
@property(readonly, copy) NSAttributedString *attributedDisplaySignature;
@property(readonly, copy) DVTRangeArray *briefDisplayTextRanges;
@property(readonly, copy) DVTRangeArray *displayTextRanges;
@property(readonly, copy) DVTRangeArray *nameRanges;
@property(readonly, copy) NSString *briefDisplayText;
@property(readonly, copy) NSAttributedString *attributedDisplayType;
- (unsigned long long)leadingCharactersToReplaceFromString:(NSString *)arg1 location:(unsigned long long)arg2;
- (void)infoViewControllerWithWidth:(double)arg1 context:(NSDictionary *)arg2 completionBlock:(void (^)(DVTViewController<DVTInvalidation> *))arg3;
@end

