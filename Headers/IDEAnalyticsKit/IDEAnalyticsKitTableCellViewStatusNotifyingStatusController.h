//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEAnalyticsKit/IDEAnalyticsKitTableCellViewStatusController.h>

@class NSView;
@protocol DVTCancellable, IDEAnalyticsKitTableCellViewStatusView;

@interface IDEAnalyticsKitTableCellViewStatusNotifyingStatusController : IDEAnalyticsKitTableCellViewStatusController
{
    id <DVTCancellable> _hasDisplayableStatusToken;
    NSView<IDEAnalyticsKitTableCellViewStatusView> *_view;
}

- (void).cxx_destruct;
@property(readonly) NSView<IDEAnalyticsKitTableCellViewStatusView> *view; // @synthesize view=_view;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

