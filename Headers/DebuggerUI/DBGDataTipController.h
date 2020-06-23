//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/DVTInvalidation-Protocol.h>

@class DBGDataTipPopoverViewController, DVTNotificationToken, DVTObservingToken, DVTSourceExpression, DVTStackBacktrace, IDEDebugSession, IDEViewController, NSString, NSWindow;
@protocol IDESourceExpressionSource;

@interface DBGDataTipController : NSObject <DVTInvalidation>
{
    DBGDataTipPopoverViewController *_dataTipPopoverViewController;
    IDEDebugSession *_debugSession;
    struct CGPoint _lastHandledMouseLocation;
    struct CGPoint _lastDataTipedMouseLocation;
    DVTSourceExpression *_currentMousedOverExpression;
    NSWindow *_contextWindow;
    id _mouseMonitor;
    id _scrollMonitor;
    id _keyDownMonitor;
    BOOL _dataTipFromSidebar;
    BOOL _inMouseoverExpressionChanged;
    DVTSourceExpression *_pendingExpression;
    DVTObservingToken *_mouseOverExpressionObserver;
    DVTObservingToken *_expressionValidObserver;
    DVTNotificationToken *_popoverWillCloseNotificationObserver;
    id _expressionUnderMouseDidChangeObserver;
    IDEViewController<IDESourceExpressionSource> *_expressionSource;
}

+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
+ (BOOL)mouseOverDataTipContext;
+ (BOOL)mouseOverDataTipInWindow:(id)arg1 includeBuffer:(BOOL)arg2;
+ (BOOL)_mouseOverDataTipInWindow:(id)arg1 includeBuffer:(BOOL)arg2 mouseLocation:(struct CGPoint)arg3;
+ (BOOL)mouseOverWindow:(id)arg1;
+ (id)_indexSymbolForDVTSourceExpression:(id)arg1 contents:(id)arg2 index:(id)arg3;
- (void).cxx_destruct;
@property(retain) DVTSourceExpression *pendingExpression; // @synthesize pendingExpression=_pendingExpression;
@property(retain) DVTSourceExpression *currentMousedOverExpression; // @synthesize currentMousedOverExpression=_currentMousedOverExpression;
@property(retain, nonatomic) IDEViewController<IDESourceExpressionSource> *expressionSource; // @synthesize expressionSource=_expressionSource;
@property(readonly) IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
- (void)primitiveInvalidate;
- (BOOL)mouseOverDataTip:(BOOL)arg1;
- (void)_monitorMouseEvents;
- (BOOL)_isMouseOverDataTipOrChildPopoverWindow:(id)arg1;
- (void)_dataValueDidUpdate:(id)arg1 forExpression:(id)arg2 atFrame:(struct CGRect)arg3 indexSymbol:(id)arg4;
- (id)_iconForIndexSymbol:(id)arg1;
- (void)_handleDataTip:(id)arg1 atFrame:(struct CGRect)arg2;
- (void)_handleDataTipWindowWillClose;
- (void)_closeDataTipWindow;
- (void)_mouseoverExpressionChanged;
- (BOOL)_currentExpressionIsEqualTo:(id)arg1;
- (void)mouseExitedSidebarLineArea;
- (void)mouseOverSidebarAtLocation:(id)arg1 withinBlockAtRange:(struct _NSRange)arg2 withScreenFrame:(struct CGRect)arg3;
@property(readonly) BOOL showingDataTip;
- (void)_handleExpressionUnderMouseDidChangeNotification:(id)arg1;
- (id)initWithDebugSession:(id)arg1 workspace:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

