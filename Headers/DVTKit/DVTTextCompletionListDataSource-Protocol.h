//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NSView;

@protocol DVTTextCompletionListDataSource <NSObject>
@property(readonly) NSString *patternString;
@property(readonly) NSDictionary *currentCompletionContext;
@property long long selectedCompletionItemIndex;
@property(readonly) long long arrangedCompletionItemsChangeGeneration;
@property(readonly) NSArray *arrangedCompletionItems;
@property(readonly) NSView *textView;
- (void)insertCurrentCompletion;
@end

