//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSImage, NSString;

@protocol DVTTextCompletionItem <NSObject>
@property(readonly) BOOL notRecommended;
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
@property(readonly, copy) NSString *name;

@optional
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
- (unsigned long long)leadingCharactersToReplaceFromString:(NSString *)arg1 location:(unsigned long long)arg2;
- (void)infoViewControllerWithWidth:(double)arg1 context:(NSDictionary *)arg2 completionBlock:(void (^)(DVTViewController<DVTInvalidation> *))arg3;
@end

