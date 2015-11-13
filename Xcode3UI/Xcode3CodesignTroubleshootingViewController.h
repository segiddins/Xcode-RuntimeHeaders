//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, DVTStackView_ML, Xcode3Target;

@interface Xcode3CodesignTroubleshootingViewController : IDEViewController
{
    DVTObservingToken *_codesignErrorObserver;
    BOOL _busy;
    DVTStackView_ML *_stackView;
    Xcode3Target *_target;
}

@property(nonatomic) BOOL busy; // @synthesize busy=_busy;
@property(retain) Xcode3Target *target; // @synthesize target=_target;
@property(retain) DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)refreshUI;
- (id)sliceViewsForError:(id)arg1;
- (id)capabilitiesContext;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;

@end

