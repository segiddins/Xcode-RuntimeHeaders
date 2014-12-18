//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewTracker.h>

@interface IBMatrixTracker : IBNSViewTracker
{
    BOOL stretch;
}

- (void)trackWithEvent:(id)arg1;
- (void)placeSubviewInFrame:(struct CGRect)arg1 event:(id)arg2;
- (struct CGRect)snapToGuidedLayoutFrame:(struct CGRect)arg1 originalLayoutFrame:(struct CGRect)arg2;
- (void)growMatrixToFrame:(struct CGRect)arg1;
- (void)syncChildren;
- (void)stretchMatrixToFrame:(struct CGRect)arg1;
- (struct CGSize)bestSize;
- (id)trackedMatrix;

@end

