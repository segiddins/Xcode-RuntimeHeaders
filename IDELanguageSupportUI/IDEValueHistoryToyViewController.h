//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDELanguageSupportUI/IDEToyViewController.h>

@class IDEValueHistoryToy;

@interface IDEValueHistoryToyViewController : IDEToyViewController
{
}

+ (id)resultsFromValueHistoryToy:(id)arg1 insertionIndex:(unsigned long long *)arg2;
+ (id)displayableReflectionTags;
- (unsigned long long)playheadIndexForResultDisplayDateInResults:(id)arg1;
- (id)titleForDisplay;
@property(readonly) IDEValueHistoryToy *valueHistoryToy;

@end

