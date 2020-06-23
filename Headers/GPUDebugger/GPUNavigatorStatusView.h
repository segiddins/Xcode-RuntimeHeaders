//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <GPUDebugger/DVTStructuredLayoutView-Protocol.h>

@class DVTStructuredLayoutViewState;

__attribute__((visibility("hidden")))
@interface GPUNavigatorStatusView : NSControl <DVTStructuredLayoutView>
{
    id previousRepresentedObject;
    DVTStructuredLayoutViewState *dvt_layoutState;
}

@property(readonly) DVTStructuredLayoutViewState *dvt_layoutState; // @synthesize dvt_layoutState;
- (void).cxx_destruct;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (void)_shaderProfilerDataUpdated:(id)arg1;
- (void)refresh:(BOOL)arg1;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

