//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerKit/DBGAbstractQuickLookProvider.h>

#import <DebuggerUI/IDEVariablesViewQuickLookProvider-Protocol.h>

@class MKMapView, NSString, NSURL, NSView;
@protocol DBGMapDataAndAnnotationProvider;

@interface DBGMapBasedQuickLookProvider : DBGAbstractQuickLookProvider <IDEVariablesViewQuickLookProvider>
{
    id <DBGMapDataAndAnnotationProvider> _mapDataAndAnnotationProvider;
    MKMapView *_mapView;
    NSView *_valuesContainerView;
    NSView *_valuesView;
}

@property(retain) NSView *valuesView; // @synthesize valuesView=_valuesView;
@property(retain) NSView *valuesContainerView; // @synthesize valuesContainerView=_valuesContainerView;
@property(retain) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (id)_createLabel:(id)arg1 bold:(BOOL)arg2 selectable:(BOOL)arg3;
- (void)_addLabelsAndValues:(id)arg1;
- (void)_updateUI:(id)arg1;
- (void)_forgetAboutMapDataAndAnnotationProvider;
- (void)cancelLoading;
- (void)loadView;
- (void)dealloc;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) int loadedState;
@property(readonly) NSView *quickLookView;
@property(readonly) Class superclass;

@end

