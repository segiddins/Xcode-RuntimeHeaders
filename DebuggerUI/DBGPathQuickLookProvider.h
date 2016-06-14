//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerKit/DBGAbstractQuickLookProvider.h>

@class DVTObservingToken, DVTPathView;
@protocol DBGCGPathProvider;

@interface DBGPathQuickLookProvider : DBGAbstractQuickLookProvider
{
    id <DBGCGPathProvider> _cgPathProvider;
    DVTObservingToken *_nsBezierPathProviderObserver;
    int _loadedState;
    DVTPathView *_pathDrawingView;
}

@property __weak DVTPathView *pathDrawingView; // @synthesize pathDrawingView=_pathDrawingView;
- (void)setLoadedState:(int)arg1;
- (int)loadedState;
- (void).cxx_destruct;
- (void)cancelLoading;
- (void)_updateFromCGPathProvider;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

@end

