//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPegasusPlaygroundEditor/NSObject-Protocol.h>

@class DVTDocumentLocation, IDEToy, IDEToybox;

@protocol IDEToyboxDelegate <NSObject>
- (void)toybox:(IDEToybox *)arg1 didRemoveToy:(IDEToy *)arg2;
- (void)toybox:(IDEToybox *)arg1 didAddToy:(IDEToy *)arg2;
- (void)toyboxArchivableStateDidChange:(IDEToybox *)arg1;
- (DVTDocumentLocation *)updatedLocationFromLocation:(DVTDocumentLocation *)arg1 toTimestamp:(double)arg2;
@end

