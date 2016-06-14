//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

@class DVTBorderedView, DVTNotificationToken, DVTObservingToken, IBConnectionsInspectorLayoutView, IBConnectionsViewController, IBDocument, NSScrollView, NSView;

@interface IBConnectionsInspector : IDEInspectorViewController
{
    id inspectedEndPoint;
    IBDocument *inspectedDocument;
    NSScrollView *scrollView;
    DVTBorderedView *statusAreaView;
    IBConnectionsInspectorLayoutView *layoutView;
    NSView *scrolledDocumentView;
    IBConnectionsViewController *connectionsController;
    DVTObservingToken *classDataIsUpdatingObservanceToken;
    DVTNotificationToken *_documentViewFrameChangeToken;
    DVTNotificationToken *_scrollViewFrameChangeToken;
}

- (void).cxx_destruct;
- (id)findIndicatorContentViewForInspectedKeyPath:(id)arg1 withContext:(id)arg2;
- (void)setContent:(id)arg1;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)loadView;
- (id)layoutView;
- (id)statusAreaView;
- (id)scrollView;
- (void)viewDidInstall;
- (void)scrollViewDocumentViewFrameChanged:(id)arg1;
- (void)stackClippingViewFrameChanged:(id)arg1;
- (void)setInspectedEndPoint:(id)arg1;
- (void)setScrolledDocumentView:(id)arg1;
- (void)updateLastDisclosureViewBorderColor;

@end

