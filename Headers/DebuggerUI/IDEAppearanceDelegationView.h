//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol IDEAppearanceDelegationViewDelegate;

@interface IDEAppearanceDelegationView : NSView
{
    id <IDEAppearanceDelegationViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IDEAppearanceDelegationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidChangeEffectiveAppearance;

@end

