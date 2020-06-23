//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSButton, NSPopUpButton, NSString;
@protocol IDEBlueprint;

@interface IDETestTargetSelectorViewController : IDEViewController
{
    BOOL _shouldSetBundleLoader;
    id <IDEBlueprint> _unitTestBlueprint;
    NSString *_blueprintIdentifierToTest;
    NSPopUpButton *_testHostPopUp;
    NSButton *_bundleLoaderCheckbox;
}

- (void).cxx_destruct;
@property(retain) NSButton *bundleLoaderCheckbox; // @synthesize bundleLoaderCheckbox=_bundleLoaderCheckbox;
@property(retain) NSPopUpButton *testHostPopUp; // @synthesize testHostPopUp=_testHostPopUp;
@property(nonatomic) BOOL shouldSetBundleLoader; // @synthesize shouldSetBundleLoader=_shouldSetBundleLoader;
@property(retain, nonatomic) NSString *blueprintIdentifierToTest; // @synthesize blueprintIdentifierToTest=_blueprintIdentifierToTest;
@property(retain, nonatomic) id <IDEBlueprint> unitTestBlueprint; // @synthesize unitTestBlueprint=_unitTestBlueprint;
- (void)_rebuildTestHostPopUp;
- (id)filteredBlueprints;
- (id)selectedBlueprint;
- (id)blueprintForMenuItem:(id)arg1;
- (void)bundleLoaderCheckboxAction:(id)arg1;
- (void)selectBlueprint:(id)arg1;
- (void)updateUI;
- (void)updateUnitTestBlueprint;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithUnitTestBlueprint:(id)arg1;

@end

