//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceControlUI/_TtC18IDESourceControlUI17PullRequestEditor.h>

@class DVTReplacementView, MISSING_TYPE;

@interface _TtC18IDESourceControlUI24PullRequestChangesEditor : _TtC18IDESourceControlUI17PullRequestEditor
{
    MISSING_TYPE *navigatorReplacementView;
    MISSING_TYPE *leftReplacementView;
    MISSING_TYPE *rightReplacementView;
    MISSING_TYPE *fileExporter;
    MISSING_TYPE *currentFileContent;
    MISSING_TYPE *previousFileContent;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (void)primitiveInvalidate;
- (void)loadView;
@property(nonatomic) __weak DVTReplacementView *rightReplacementView; // @synthesize rightReplacementView;
@property(nonatomic) __weak DVTReplacementView *leftReplacementView; // @synthesize leftReplacementView;
@property(nonatomic) __weak DVTReplacementView *navigatorReplacementView; // @synthesize navigatorReplacementView;

@end
