//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTSourceTextView.h>

@class DVTTextSidebarView;

@interface DVTScriptSourceTextView : DVTSourceTextView
{
    DVTTextSidebarView *_sidebarView;
    BOOL _showingPlaceholder;
}

+ (id)placeholder;
- (void).cxx_destruct;
@property(readonly, getter=isShowingPlaceholder) BOOL showingPlaceholder; // @synthesize showingPlaceholder=_showingPlaceholder;
@property(readonly) unsigned long long lineCount;
- (BOOL)becomeFirstResponder;
- (void)showPlaceholder;
- (void)installSidebarViewIfNeeded;
@property(readonly) DVTTextSidebarView *sidebarView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)_commonInitDVTScriptSourceTextView;

@end

