//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class NSString, NSWindow;
@protocol IDEOperationViewDelegate;

@protocol IDEOperationViewController <NSObject>
- (void)tearDownAction;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic) __weak id <IDEOperationViewDelegate> delegate;

@optional
- (void)blockingTearDownAction;
- (void)willBeginSheet;
- (void)preflightSheetOnWindow:(NSWindow *)arg1;
@property(nonatomic, copy) CDUnknownBlockType preflightCompletion;
@property(nonatomic, readonly) BOOL showIcon;
- (void)primaryAction;
@property(nonatomic, readonly) double preferredViewWidth;
@property(nonatomic, copy) id context;
@end
