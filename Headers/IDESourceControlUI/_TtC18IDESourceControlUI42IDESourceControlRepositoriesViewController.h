//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTReplacementView, MISSING_TYPE, NSStackView;

@interface _TtC18IDESourceControlUI42IDESourceControlRepositoriesViewController : DVTViewController
{
    MISSING_TYPE *stackView;
    MISSING_TYPE *blankSlateReplacementView;
    MISSING_TYPE *repositoriesTableReplacementView;
    MISSING_TYPE *repositoryDetailReplacementView;
    MISSING_TYPE *delegate;
    MISSING_TYPE *addAccountWindow;
    MISSING_TYPE *accountsObservingToken;
    MISSING_TYPE *tableColumnObservationTokens;
    MISSING_TYPE *previousSelectedRow;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *inFlightStars;
    MISSING_TYPE *packageFilter;
    MISSING_TYPE *headerTableRowView;
    MISSING_TYPE *loadingStatus;
    MISSING_TYPE *movedToSearchThroughKeyPress;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)viewWillDisappear;
- (void)tableViewKeyDown:(id)arg1;
- (BOOL)handleMoveUpInTableView;
- (void)doubleAction:(id)arg1;
- (void)readmeClickWithSender:(id)arg1;
- (void)repoTitleClickWithSender:(id)arg1;
- (void)favoriteClickWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
@property(nonatomic) __weak DVTReplacementView *repositoryDetailReplacementView; // @synthesize repositoryDetailReplacementView;
@property(nonatomic) __weak DVTReplacementView *repositoriesTableReplacementView; // @synthesize repositoriesTableReplacementView;
@property(nonatomic) __weak DVTReplacementView *blankSlateReplacementView; // @synthesize blankSlateReplacementView;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView;

@end

