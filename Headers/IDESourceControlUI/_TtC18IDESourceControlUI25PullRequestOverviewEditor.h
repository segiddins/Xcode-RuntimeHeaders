//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceControlUI/_TtC18IDESourceControlUI17PullRequestEditor.h>

@class DVTReplacementView, MISSING_TYPE;

@interface _TtC18IDESourceControlUI25PullRequestOverviewEditor : _TtC18IDESourceControlUI17PullRequestEditor
{
    MISSING_TYPE *formatBarReplacementView;
    MISSING_TYPE *labelsReplacementView;
    MISSING_TYPE *contentReplacementView;
    MISSING_TYPE *didPerformCapabilitiesCheck;
    MISSING_TYPE *updateAttachmentsOperation;
    MISSING_TYPE *updatePullRequestDescriptionOperation;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (void)viewWillLayout;
- (void)loadView;
@property(nonatomic) __weak DVTReplacementView *contentReplacementView; // @synthesize contentReplacementView;
@property(nonatomic) __weak DVTReplacementView *labelsReplacementView; // @synthesize labelsReplacementView;
@property(nonatomic) __weak DVTReplacementView *formatBarReplacementView; // @synthesize formatBarReplacementView;

@end

