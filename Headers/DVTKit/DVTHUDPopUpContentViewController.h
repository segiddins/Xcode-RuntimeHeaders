//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DVTViewController.h"

@class DVTHUDPopUpController;

@interface DVTHUDPopUpContentViewController : DVTViewController
{
    CDStruct_bf6d4a14 _contentInset;
    DVTHUDPopUpController *_windowController;
}

+ (id)HUDPopUpContentViewController;
@property(retain) DVTHUDPopUpController *windowController; // @synthesize windowController=_windowController;
@property CDStruct_bf6d4a14 contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)alternateButtonAction:(id)arg1;
- (id)alternateButtonLabel;
- (BOOL)shouldShowDoneButton;
- (id)doneButtonLabel;
- (void)close:(id)arg1;
@property(readonly) struct CGSize doneButtonOffset;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

