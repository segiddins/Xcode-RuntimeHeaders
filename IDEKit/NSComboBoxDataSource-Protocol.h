//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSComboBox, NSString;

@protocol NSComboBoxDataSource <NSObject>

@optional
- (NSString *)comboBox:(NSComboBox *)arg1 completedString:(NSString *)arg2;
- (unsigned long long)comboBox:(NSComboBox *)arg1 indexOfItemWithStringValue:(NSString *)arg2;
- (id)comboBox:(NSComboBox *)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(NSComboBox *)arg1;
@end

