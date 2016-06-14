//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDEProductsSingleButtonUtilityPane.h"

@class NSLayoutConstraint, NSProgressIndicator, NSString;
@protocol DVTCancellable;

@interface IDEProductsSingleButtonBusyUtilityPane : IDEProductsSingleButtonUtilityPane
{
    id <DVTCancellable> _progressIndicatorHiddenBindingToken;
    id <DVTCancellable> _progressIndicatorAnimateBindingToken;
    id <DVTCancellable> _updateConstraintsToken;
    NSString *_progressIndicatorBusyKeyPath;
    NSProgressIndicator *_progressIndicator;
    NSLayoutConstraint *_buttonToProgressIndicatorConstraint;
    NSLayoutConstraint *_buttonToContainerConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *buttonToContainerConstraint; // @synthesize buttonToContainerConstraint=_buttonToContainerConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonToProgressIndicatorConstraint; // @synthesize buttonToProgressIndicatorConstraint=_buttonToProgressIndicatorConstraint;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSString *progressIndicatorBusyKeyPath; // @synthesize progressIndicatorBusyKeyPath=_progressIndicatorBusyKeyPath;
- (void).cxx_destruct;
- (void)bindProgressIndicatorBusyKeyPath;
- (void)buttonClicked:(id)arg1;
- (void)viewDidLoad;
- (void)primitiveInvalidate;

@end

