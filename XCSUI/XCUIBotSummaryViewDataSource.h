//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCSBot;

@interface XCUIBotSummaryViewDataSource : NSObject
{
    XCSBot *_bot;
}

@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
- (void).cxx_destruct;
- (void)queryDataSourceWithItemsCount:(unsigned long long)arg1 CompletionHandler:(CDUnknownBlockType)arg2;

@end

