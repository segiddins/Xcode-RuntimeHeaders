//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPlaygroundsKit/IDEValueHistoryToyViewController.h>

@class QLPreviewView;

@interface IDEValueHistoryURLViewController : IDEValueHistoryToyViewController
{
    BOOL _playgroundIsExecuting;
    BOOL _playgroundDidCompleteLastExecution;
    QLPreviewView *_qlPreviewView;
}

+ (id)displayableReflectionTags;
- (void).cxx_destruct;
@property(retain) QLPreviewView *qlPreviewView; // @synthesize qlPreviewView=_qlPreviewView;
- (id)url;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (id)toolTip;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (id)undoManager;
- (void)viewDidLoad;

@end

