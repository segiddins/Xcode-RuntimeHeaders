//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUTraceDebuggerUI/NSObject-Protocol.h>

@class DVTReplacementView, NSViewController;

@protocol DVTReplacementViewDelegate <NSObject>

@optional
- (void)replacementView:(DVTReplacementView *)arg1 willDisplayInRect:(struct CGRect)arg2;
- (void)replacementView:(DVTReplacementView *)arg1 willCloseViewController:(NSViewController *)arg2;
- (void)replacementView:(DVTReplacementView *)arg1 didInstallViewController:(NSViewController *)arg2;
- (void)replacementView:(DVTReplacementView *)arg1 willInstallViewController:(NSViewController *)arg2;
@end

