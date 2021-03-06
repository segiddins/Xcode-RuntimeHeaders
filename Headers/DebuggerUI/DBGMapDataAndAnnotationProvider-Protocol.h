//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerUI/NSObject-Protocol.h>

@class DBGMapBasedQuickLookProvider, MKMapView, NSDictionary;

@protocol DBGMapDataAndAnnotationProvider <NSObject>
- (void)cancel;
- (void)provideMapAnnotations:(MKMapView *)arg1;
- (void)provideMapData:(void (^)(DVTMutableOrderedDictionary *))arg1;
- (id)initWithQuickLookProvider:(DBGMapBasedQuickLookProvider *)arg1 options:(NSDictionary *)arg2;
@end

