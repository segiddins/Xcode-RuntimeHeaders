//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTLayoutViewFrameChangeStack : NSObject
{
    struct CGRect _previousFrames[5];
}

- (BOOL)registeredRectsHaveNoNonIntegralChangeCyclesAfterRegisteringRect:(struct CGRect)arg1;

@end
