//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MLComposerKit/_TtC13MLComposerKit34ExperimentObservableViewController.h>

@class NSPopUpButton;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit30WTColumnSelectorViewController : _TtC13MLComposerKit34ExperimentObservableViewController
{
    // Error parsing type: , name: tokenColumnPopupBtn
    // Error parsing type: , name: labelColumnPopupBtn
    // Error parsing type: , name: popups
    // Error parsing type: , name: selectorEnabled
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)columnSelected:(id)arg1;
- (void)updateColumnItems;
- (void)refresh;
- (void)viewDidLoad;
@property(nonatomic) __weak NSPopUpButton *labelColumnPopupBtn; // @synthesize labelColumnPopupBtn;
@property(nonatomic) __weak NSPopUpButton *tokenColumnPopupBtn; // @synthesize tokenColumnPopupBtn;

@end

