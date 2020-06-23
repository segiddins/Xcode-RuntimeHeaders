//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/IDEVariablesViewQuickLookProvider-Protocol.h>

@class DBGDataValue, DVTRangeViewController, NSString, NSURL, NSView;

@interface DBGRangeQuickLookProvider : NSObject <IDEVariablesViewQuickLookProvider>
{
    DBGDataValue *_dataValue;
    DVTRangeViewController *_rangeViewController;
    int _loadedState;
}

- (void).cxx_destruct;
@property int loadedState; // @synthesize loadedState=_loadedState;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)_startRetrieval;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

