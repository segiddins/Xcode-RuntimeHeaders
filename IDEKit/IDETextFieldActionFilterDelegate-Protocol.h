//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSComboBoxDelegate-Protocol.h>

@class NSNotification;

@protocol IDETextFieldActionFilterDelegate <NSComboBoxDelegate>

@optional
- (void)controlTextDidEndEditing:(NSNotification *)arg1;
- (void)controlTextDidChange:(NSNotification *)arg1;
- (void)controlTextDidBeginEditing:(NSNotification *)arg1;
@end

