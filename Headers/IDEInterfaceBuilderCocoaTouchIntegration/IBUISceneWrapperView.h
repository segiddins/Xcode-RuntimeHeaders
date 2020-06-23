//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIInstantiatedView-Protocol.h>

@class IBUIView, NSImage, NSNumber, NSString;

@interface IBUISceneWrapperView : NSView <IBUIInstantiatedView>
{
    NSNumber *_currentScaleFactor;
    long long _interfaceStyle;
    IBUIView *_wrappedView;
    NSImage *_cachedImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(readonly, nonatomic) IBUIView *wrappedView; // @synthesize wrappedView=_wrappedView;
@property(readonly, nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
- (void)drawRect:(struct CGRect)arg1;
- (void)ibDidInstantiateView;
- (id)ibUnderlyingViewInstance;
- (id)initWithWrappedView:(id)arg1 interfaceStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

