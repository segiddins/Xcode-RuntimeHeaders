//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTSourceTextView.h>

@class DVTTextSidebarView;

@interface GPUSimpleGLSLSourceView : DVTSourceTextView
{
    DVTTextSidebarView *_sidebarView;
}

- (void).cxx_destruct;
- (void)installSidebarViewIfNeeded;
@property(readonly) DVTTextSidebarView *sidebarView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)_commonInit;

@end

