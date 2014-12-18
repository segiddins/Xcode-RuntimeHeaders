//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTTextCompletionItem.h"

@class NSArray, NSAttributedString, NSImage, NSString;

@interface IDECodeSnippetCompletionItem : NSObject <DVTTextCompletionItem>
{
    NSAttributedString *_descriptionText;
    NSString *_completionText;
    NSString *_displayText;
    NSString *_displayType;
    double _priority;
    NSString *_name;
    NSImage *_icon;
}

+ (id)infoViewControllerFont;
@property(readonly) NSImage *icon; // @synthesize icon=_icon;
@property(readonly, copy) NSAttributedString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy) NSString *completionText; // @synthesize completionText=_completionText;
@property(readonly, copy) NSString *displayType; // @synthesize displayType=_displayType;
@property(readonly, copy) NSString *displayText; // @synthesize displayText=_displayText;
@property double priority; // @synthesize priority=_priority;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) long long priorityBucket;
@property(readonly) BOOL notRecommended;
@property(readonly, copy) NSString *parentText;
- (id)initWithCodeSnippet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;

@end

