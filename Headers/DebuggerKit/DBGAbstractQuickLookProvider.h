//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DebuggerKit/IDEVariablesViewQuickLookProvider-Protocol.h>

@class DBGDataValue, NSString, NSURL, NSView;

@interface DBGAbstractQuickLookProvider : NSViewController <IDEVariablesViewQuickLookProvider>
{
    BOOL _wasCancelled;
    int _loadedState;
    DBGDataValue *_dbgDataValue;
}

+ (id)substituteDataValueNameUsingDataValue:(id)arg1 inExpression:(id)arg2;
- (void).cxx_destruct;
@property BOOL wasCancelled; // @synthesize wasCancelled=_wasCancelled;
@property int loadedState; // @synthesize loadedState=_loadedState;
@property(readonly) DBGDataValue *dbgDataValue; // @synthesize dbgDataValue=_dbgDataValue;
- (void)evaluateExpression:(id)arg1 failureHandler:(CDUnknownBlockType)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (id)initWithDataValue:(id)arg1 options:(id)arg2 nibName:(id)arg3;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

