//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class DVTResourceComboBox, DVTResourceComboBoxCellView, NSString;

@protocol DVTResourceComboBoxDataSource <NSObject>
- (DVTResourceComboBoxCellView *)comboBox:(DVTResourceComboBox *)arg1 cellAtRow:(long long)arg2;
- (void)comboBox:(DVTResourceComboBox *)arg1 didChooseCell:(DVTResourceComboBoxCellView *)arg2;
- (BOOL)comboBox:(DVTResourceComboBox *)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)comboBox:(DVTResourceComboBox *)arg1 isGroupRow:(long long)arg2;
- (void)comboBox:(DVTResourceComboBox *)arg1 filterRowsWithText:(NSString *)arg2 firstTime:(BOOL)arg3;
- (long long)numberOfRowsInComboBox:(DVTResourceComboBox *)arg1;
@end

