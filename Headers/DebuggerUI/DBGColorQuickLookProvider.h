//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DebuggerUI/IDEVariablesViewQuickLookProvider-Protocol.h>

@class DBGDataValue, DBGNSColorProviderCGColorRefExpression, DVTColorSwatchWithComponentsView, DVTObservingToken, NSString, NSURL, NSView;

@interface DBGColorQuickLookProvider : NSViewController <IDEVariablesViewQuickLookProvider>
{
    DBGDataValue *_dataValue;
    BOOL _wasCancelled;
    NSString *_cgColorExpression;
    DBGNSColorProviderCGColorRefExpression *_colorProvider;
    DVTObservingToken *_colorProviderObserver;
    int _loadedState;
    DVTColorSwatchWithComponentsView *_colorSwatchWithComponentsView;
}

- (void).cxx_destruct;
@property __weak DVTColorSwatchWithComponentsView *colorSwatchWithComponentsView; // @synthesize colorSwatchWithComponentsView=_colorSwatchWithComponentsView;
@property int loadedState; // @synthesize loadedState=_loadedState;
- (void)_updateView;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)loadView;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

