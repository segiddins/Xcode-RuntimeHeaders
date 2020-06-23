//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/DBGMapDataAndAnnotationProvider-Protocol.h>
#import <DebuggerUI/MKMapViewDelegate-Protocol.h>

@class DBGMapBasedQuickLookProvider, NSArray, NSString;
@protocol DBGLocationLabelAndExpressionPairProvider;

@interface DBGLocationMapAndDataAnnotationProvider : NSObject <MKMapViewDelegate, DBGMapDataAndAnnotationProvider>
{
    DBGMapBasedQuickLookProvider *_mapQuickLookProvider;
    id <DBGLocationLabelAndExpressionPairProvider> _labelExpressionPairProvider;
    NSArray *_labelExpressionEntries;
}

- (void).cxx_destruct;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)cancel;
- (double)_longitudeValue;
- (double)_latitudeValue;
- (void)provideMapAnnotations:(id)arg1;
- (void)_evaluateExpressionStartingAtIndex:(unsigned long long)arg1 useFallbackExpression:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)provideMapData:(CDUnknownBlockType)arg1;
- (id)initWithQuickLookProvider:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

