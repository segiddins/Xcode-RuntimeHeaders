//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEStoreKitEditor/_TtC17IDEStoreKitEditor36IDEStoreKitEditorPanelViewController.h>

@class DVTBorderedView, MISSING_TYPE, NSButton, NSStackView, NSTextField;

__attribute__((visibility("hidden")))
@interface _TtC17IDEStoreKitEditor32IDEStoreKitKeyPairViewController : _TtC17IDEStoreKitEditor36IDEStoreKitEditorPanelViewController
{
    MISSING_TYPE *borderView;
    MISSING_TYPE *generateKeyButton;
    MISSING_TYPE *keyIDLabel;
    MISSING_TYPE *keyIDStackView;
    MISSING_TYPE *keyLabel;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *keyPair;
    MISSING_TYPE *isSubscriptionOffersKey;
    MISSING_TYPE *generatedKeyPair;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)generateKeyButtonPressed:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak NSTextField *keyLabel; // @synthesize keyLabel;
@property(nonatomic) __weak NSStackView *keyIDStackView; // @synthesize keyIDStackView;
@property(nonatomic) __weak NSTextField *keyIDLabel; // @synthesize keyIDLabel;
@property(nonatomic) __weak NSButton *generateKeyButton; // @synthesize generateKeyButton;
@property(nonatomic) __weak DVTBorderedView *borderView; // @synthesize borderView;

@end

