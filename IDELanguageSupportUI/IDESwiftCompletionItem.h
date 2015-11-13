//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDELanguageSupportUI/DVTTextCompletionItem-Protocol.h>

@class NSArray, NSAttributedString, NSImage, NSString;

@interface IDESwiftCompletionItem : NSObject <DVTTextCompletionItem>
{
    CDStruct_3b0d17db _obj;
    double _priority;
    double _fuzzyMatchingScore;
}

@property double fuzzyMatchingScore; // @synthesize fuzzyMatchingScore=_fuzzyMatchingScore;
@property double priority; // @synthesize priority=_priority;
- (unsigned long long)leadingCharactersToReplaceFromString:(id)arg1 location:(unsigned long long)arg2;
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSArray *associatedUSRs;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL notRecommended;
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) long long priorityBucket;
@property(readonly) NSImage *icon;
- (id)symbolKind;
@property(readonly, copy) NSAttributedString *descriptionText;
@property(readonly, copy) NSString *parentText;
@property(readonly, copy) NSString *completionText;
@property(readonly, copy) NSString *displayType;
@property(readonly, copy) NSString *displayText;
@property(readonly, copy) NSString *name;
- (id)initWithSourceKitDictionary:(CDStruct_3b0d17db)arg1;

// Remaining properties
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;

@end

