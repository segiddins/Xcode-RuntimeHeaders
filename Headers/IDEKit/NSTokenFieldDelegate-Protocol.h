//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSTextFieldDelegate-Protocol.h>

@class NSArray, NSMenu, NSPasteboard, NSString, NSTokenField;

@protocol NSTokenFieldDelegate <NSTextFieldDelegate>

@optional
- (unsigned long long)tokenField:(NSTokenField *)arg1 styleForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(NSTokenField *)arg1 hasMenuForRepresentedObject:(id)arg2;
- (NSMenu *)tokenField:(NSTokenField *)arg1 menuForRepresentedObject:(id)arg2;
- (NSArray *)tokenField:(NSTokenField *)arg1 readFromPasteboard:(NSPasteboard *)arg2;
- (BOOL)tokenField:(NSTokenField *)arg1 writeRepresentedObjects:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (id)tokenField:(NSTokenField *)arg1 representedObjectForEditingString:(NSString *)arg2;
- (NSString *)tokenField:(NSTokenField *)arg1 editingStringForRepresentedObject:(id)arg2;
- (NSString *)tokenField:(NSTokenField *)arg1 displayStringForRepresentedObject:(id)arg2;
- (NSArray *)tokenField:(NSTokenField *)arg1 shouldAddObjects:(NSArray *)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)tokenField:(NSTokenField *)arg1 completionsForSubstring:(NSString *)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
@end

