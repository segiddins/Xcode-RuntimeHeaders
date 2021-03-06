//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <Xcode3UI/IDESourcePackagePreflightResolutionDelegate-Protocol.h>

@class DVTBorderedView, DVTReplacementView, NSImageView, NSProgressIndicator, NSTextField, NSView;

@interface Xcode3PackageAddPackageReferenceProgressAssistant : IDEAssistant <IDESourcePackagePreflightResolutionDelegate>
{
    BOOL _hadFatalError;
    BOOL _resolutionComplete;
    BOOL _canFinishEarly;
    BOOL _resolutionStarted;
    NSView *_progressView;
    NSTextField *_progressTitleField;
    NSTextField *_progressSubtitleField;
    NSProgressIndicator *_progressBar;
    NSView *_successView;
    NSTextField *_successTextField;
    NSImageView *_successImageView;
    NSView *_failureView;
    DVTReplacementView *_failureLogView;
    DVTBorderedView *_failureLogBorderView;
    NSImageView *_failureImageView;
    NSTextField *_failureViewSubtitle;
}

+ (id)keyPathsForValuesAffectingCanGoBack;
+ (id)keyPathsForValuesAffectingCanFinish;
+ (id)keyPathsForValuesAffectingCanGoForward;
- (void).cxx_destruct;
@property __weak NSTextField *failureViewSubtitle; // @synthesize failureViewSubtitle=_failureViewSubtitle;
@property __weak NSImageView *failureImageView; // @synthesize failureImageView=_failureImageView;
@property __weak DVTBorderedView *failureLogBorderView; // @synthesize failureLogBorderView=_failureLogBorderView;
@property __weak DVTReplacementView *failureLogView; // @synthesize failureLogView=_failureLogView;
@property __weak NSView *failureView; // @synthesize failureView=_failureView;
@property __weak NSImageView *successImageView; // @synthesize successImageView=_successImageView;
@property __weak NSTextField *successTextField; // @synthesize successTextField=_successTextField;
@property __weak NSView *successView; // @synthesize successView=_successView;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property __weak NSTextField *progressSubtitleField; // @synthesize progressSubtitleField=_progressSubtitleField;
@property __weak NSTextField *progressTitleField; // @synthesize progressTitleField=_progressTitleField;
@property __weak NSView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) BOOL resolutionStarted; // @synthesize resolutionStarted=_resolutionStarted;
@property(nonatomic) BOOL canFinishEarly; // @synthesize canFinishEarly=_canFinishEarly;
@property(nonatomic) BOOL resolutionComplete; // @synthesize resolutionComplete=_resolutionComplete;
@property(nonatomic) BOOL hadFatalError; // @synthesize hadFatalError=_hadFatalError;
- (void)preflightResolutionDidUpdateStatus:(id)arg1 progress:(long long)arg2;
- (void)preflightResolutionDidCompleteWithPackageName:(id)arg1 products:(id)arg2 logSection:(id)arg3 success:(BOOL)arg4 binaryArtifacts:(id)arg5;
- (id)packageAssistantContext;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)canFinish;
- (id)nextAssistantIdentifier;
- (id)assistantTitle;
- (void)primitiveInvalidate;
- (void)setActiveView:(long long)arg1;
- (void)viewDidLoad;

@end

