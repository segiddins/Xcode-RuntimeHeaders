//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTSearchField, DVTTableView, MISSING_TYPE, NSButton;

__attribute__((visibility("hidden")))
@interface _TtC17IDETestPlanEditor46TestPlanConfigurationsSourceListViewController : IDEViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *testPlanEditor;
    MISSING_TYPE *tableView;
    MISSING_TYPE *removeConfigurationsButton;
    MISSING_TYPE *bottomBar;
    MISSING_TYPE *addConfigurationsButton;
    MISSING_TYPE *filterField;
    MISSING_TYPE *activeConfigurationEntries;
    MISSING_TYPE *filterString;
    MISSING_TYPE *configurationsObserver;
    MISSING_TYPE *validityIssuesObserver;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)removeSelectedConfigurations:(id)arg1;
- (void)addConfiguration:(id)arg1;
- (void)filterFieldDidChange:(id)arg1;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
@property(nonatomic, retain) DVTSearchField *filterField; // @synthesize filterField;
@property(nonatomic, retain) NSButton *addConfigurationsButton; // @synthesize addConfigurationsButton;
@property(nonatomic, retain) DVTBorderedView *bottomBar; // @synthesize bottomBar;
@property(nonatomic, retain) NSButton *removeConfigurationsButton; // @synthesize removeConfigurationsButton;
@property(nonatomic, retain) DVTTableView *tableView; // @synthesize tableView;

@end

