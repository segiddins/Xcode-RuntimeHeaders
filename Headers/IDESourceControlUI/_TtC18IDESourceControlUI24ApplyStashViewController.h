//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTSourceControlWorkingCopy, IDEWorkspace, NSButton, NSString;
@protocol IDEOperationViewDelegate;

@interface _TtC18IDESourceControlUI24ApplyStashViewController : DVTViewController
{
    // Error parsing type: , name: applyStashContext
    // Error parsing type: , name: delegate
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: workspace
    // Error parsing type: , name: operation
    // Error parsing type: , name: keepStashButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willBeginSheet;
- (void)tearDownAction;
- (void)primaryAction;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) BOOL showIcon;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic) __weak NSButton *keepStashButton; // @synthesize keepStashButton;
@property(nonatomic, copy) id context;
@property(nonatomic, retain) IDEWorkspace *workspace; // @synthesize workspace;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic) __weak id <IDEOperationViewDelegate> delegate; // @synthesize delegate;

@end

