//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class MISSING_TYPE, NSArray, NSString, NSTableView;
@protocol IDEOperationViewDelegate;

@interface _TtC18IDESourceControlUI58IDESourceControlMultipleWorkingCopyOperationViewController : DVTViewController
{
    MISSING_TYPE *workingCopyCellNibName;
    MISSING_TYPE *workingCopyCellRowHeight;
    MISSING_TYPE *workingCopyBranchCellNibName;
    MISSING_TYPE *workingCopyBranchCellRowHeight;
    MISSING_TYPE *singleWorkingCopyBranchCellNibName;
    MISSING_TYPE *singleWorkingCopyBranchCellRowHeight;
    MISSING_TYPE *workingCopyCellIdentifier;
    MISSING_TYPE *tableView;
    MISSING_TYPE *performingAction;
    MISSING_TYPE *workingCopyDetails;
    MISSING_TYPE *workingCopies;
    MISSING_TYPE *delegate;
    MISSING_TYPE *operation;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tearDownAction;
- (void)primaryAction;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
- (BOOL)validateMenuItem:(id)arg1;
- (void)selectBranch:(id)arg1;
- (void)check:(id)arg1;
- (void)willBeginSheet;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) BOOL showIcon;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic, copy) id context;
@property(nonatomic) __weak id <IDEOperationViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic, copy) NSArray *workingCopies;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView;

@end

