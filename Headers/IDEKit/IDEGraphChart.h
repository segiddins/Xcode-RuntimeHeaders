//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSColor, NSString;

@interface IDEGraphChart : NSObject
{
    NSString *_label;
    NSColor *_color;
    NSColor *_keyColor;
    NSArray *_entries;
}

@property(copy) NSArray *entries; // @synthesize entries=_entries;
@property(copy) NSColor *keyColor; // @synthesize keyColor=_keyColor;
@property(copy) NSColor *color; // @synthesize color=_color;
@property(copy) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)clearValues;
- (void)flushEntriesToCount:(unsigned long long)arg1;
- (void)addLabeledMetrics:(id)arg1 chartName:(id)arg2 startingAtIndex:(long long)arg3 withLabels:(id)arg4;
- (void)addLabeledEntries:(id)arg1 startingAtIndex:(long long)arg2;
- (void)addValues:(id)arg1 startingAtIndex:(long long)arg2 userInfos:(id)arg3;
- (void)addValues:(id)arg1 startingAtIndex:(long long)arg2;
- (void)setValue:(id)arg1 forIndexedValue:(id)arg2 userInfo:(id)arg3;
- (void)setValue:(id)arg1 forIndexedValue:(id)arg2;
- (id)initWithLabel:(id)arg1 color:(id)arg2;

@end

