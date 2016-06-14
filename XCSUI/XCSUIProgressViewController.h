//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSButton, NSProgressIndicator, NSStackView, NSString, NSTextField;

@interface XCSUIProgressViewController : DVTViewController
{
    BOOL _progressVisible;
    BOOL _cancellable;
    NSString *_headlineText;
    NSString *_primaryText;
    NSString *_secondaryText;
    double _progress;
    CDUnknownBlockType _cancellationHandler;
    NSTextField *_progressMessageField;
    NSProgressIndicator *_progressBar;
    NSStackView *_progressStackView;
    NSTextField *_primaryTextField;
    NSTextField *_secondaryTextField;
    NSButton *_cancelButton;
}

@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSTextField *secondaryTextField; // @synthesize secondaryTextField=_secondaryTextField;
@property __weak NSTextField *primaryTextField; // @synthesize primaryTextField=_primaryTextField;
@property __weak NSStackView *progressStackView; // @synthesize progressStackView=_progressStackView;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property __weak NSTextField *progressMessageField; // @synthesize progressMessageField=_progressMessageField;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property(nonatomic) BOOL cancellable; // @synthesize cancellable=_cancellable;
@property(nonatomic) BOOL progressVisible; // @synthesize progressVisible=_progressVisible;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(retain, nonatomic) NSString *headlineText; // @synthesize headlineText=_headlineText;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (id)accessibilityLabel;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

