//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class MISSING_TYPE, NSArray, NSString;
@protocol IDEOperationViewDelegate;

@interface _TtC18IDESourceControlUI42IDESourceControlFetchChangesViewController : DVTViewController
{
    MISSING_TYPE *workspace;
    MISSING_TYPE *delegate;
    MISSING_TYPE *workingCopies;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tearDownAction;
- (void)willBeginSheet;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) BOOL showIcon;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic, copy) id context;
@property(nonatomic, copy) NSArray *workingCopies;
@property(nonatomic) __weak id <IDEOperationViewDelegate> delegate; // @synthesize delegate;

@end

