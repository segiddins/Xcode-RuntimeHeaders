//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IBDesignablesStatusAction, IBInspectorViewController, IDEInspectorKeyPath, NSButton, NSDate, NSLayoutConstraint, NSString, NSTextField;

@interface IBDesignablesStatusInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_statusKeyPath;
    long long _tooltipTag;
    NSString *_statusText;
    NSString *_statusToolTip;
    long long _statusValue;
    NSDate *_lastUpdateDate;
    IBDesignablesStatusAction *_action;
    NSTextField *_statusLabel;
    NSButton *_actionButton;
    NSLayoutConstraint *_currentStatusTextTrailingConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *currentStatusTextTrailingConstraint; // @synthesize currentStatusTextTrailingConstraint=_currentStatusTextTrailingConstraint;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSTextField *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) IBDesignablesStatusAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(nonatomic) long long statusValue; // @synthesize statusValue=_statusValue;
@property(retain, nonatomic) NSString *statusToolTip; // @synthesize statusToolTip=_statusToolTip;
@property(retain, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
- (void)userDidSelectActionButton:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)_updateActionButton;
- (void)_updateLabelColors;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)_effectiveToolTip;
- (void)_updateLabel;
- (void)_setupViewTooltip;
- (void)refresh;
- (double)baseline;
- (void)primitiveInvalidate;
- (void)loadView;
@property(readonly) IBInspectorViewController *inspectorController;

@end

