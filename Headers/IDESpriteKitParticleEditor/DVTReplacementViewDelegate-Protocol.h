//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESpriteKitParticleEditor/NSObject-Protocol.h>

@class DVTReplacementView, NSViewController;

@protocol DVTReplacementViewDelegate <NSObject>

@optional
- (void)replacementView:(DVTReplacementView *)arg1 willDisplayInRect:(struct CGRect)arg2;
- (void)replacementView:(DVTReplacementView *)arg1 willCloseViewController:(NSViewController *)arg2;
- (void)replacementView:(DVTReplacementView *)arg1 didInstallViewController:(NSViewController *)arg2;
- (void)replacementView:(DVTReplacementView *)arg1 willInstallViewController:(NSViewController *)arg2;
@end

