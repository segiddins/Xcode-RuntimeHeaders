//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class DVTResourceComboBox;

@protocol DVTResourceComboBoxDelegate <NSObject>

@optional
- (void)resourceComboBoxDidStopShowingMenu:(DVTResourceComboBox *)arg1;
- (void)resourceComboBoxDidStartShowingMenu:(DVTResourceComboBox *)arg1;
- (void)resourceComboBoxFollowButtonPressed:(DVTResourceComboBox *)arg1;
@end

