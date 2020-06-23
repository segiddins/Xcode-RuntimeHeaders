//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <IDESourceControlUI/NSOutlineViewDataSource-Protocol.h>
#import <IDESourceControlUI/NSOutlineViewDelegate-Protocol.h>

@class DVTBorderedView, DVTOutlineView, DVTSourceControlPathLocation, DVTSourceControlRepository, NSMutableDictionary, NSString;
@protocol IDESourceControlFilePickerDelegate;

@interface IDESourceControlFilePickerViewController : DVTViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    DVTBorderedView *_borderedView;
    CDUnknownBlockType _completionBlock;
    DVTSourceControlRepository *_repository;
    DVTSourceControlPathLocation *_root;
    NSMutableDictionary *_cachedPaths;
    DVTOutlineView *_outlineView;
    id <IDESourceControlFilePickerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) id <IDESourceControlFilePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)primitiveInvalidate;
- (void)choose:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)setRepository:(id)arg1;
- (void)displayError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
