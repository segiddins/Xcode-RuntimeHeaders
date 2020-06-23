//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUICollectionReusableViewTracker.h>

@interface IBUICollectionViewCellTracker : IBUICollectionReusableViewTracker
{
    struct CGRect initialFrame;
    struct CGSize initialCellSize;
    struct CGSize initialCollectionViewFlowLayoutCellSize;
    BOOL startedWithCustomCellSize;
}

- (struct CGRect)constrainCellFrameToSection:(struct CGRect)arg1;
- (void)trackWithEvent:(id)arg1;
- (void)placeSubviewInFrame:(struct CGRect)arg1 event:(id)arg2 originalFrame:(struct CGRect)arg3 isFinalFrame:(BOOL)arg4;
- (BOOL)shouldSetCollectionViewFlowLayoutItemSize;
- (id)collectionView;
- (id)trackedCollectionViewCell;

@end

