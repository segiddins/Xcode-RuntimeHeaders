//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPlaygroundsKit/IDEValueHistoryToyViewController.h>

@class IDEPlaygroundQuickLookController, NSView;

@interface IDEValueHistorySingleQuickLookViewController : IDEValueHistoryToyViewController
{
    BOOL _playgroundIsExecuting;
    BOOL _playgroundDidCompleteLastExecution;
    IDEPlaygroundQuickLookController *_currentQuickLookController;
    struct CGSize _cachedPreferredSize;
    NSView *_containerView;
    NSView *_quickLookView;
}

+ (id)displayableReflectionTags;
- (void).cxx_destruct;
@property(retain, nonatomic) NSView *quickLookView; // @synthesize quickLookView=_quickLookView;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (id)toolTip;
- (double)preferredVerticalInset;
- (double)preferredHorizontalInset;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (void)viewDidLoad;

@end

