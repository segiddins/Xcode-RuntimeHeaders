//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBLayoutGuideGenerator;

@protocol IBLayoutGuideGeneratorSnappingDelegate <NSObject>
- (id)feedbackTokenForLayoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 ifShouldSnapDefaultY:(double)arg2 toAlignedY:(double)arg3 forCenter:(BOOL)arg4;
- (id)feedbackTokenForLayoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 ifShouldSnapDefaultX:(double)arg2 toAlignedX:(double)arg3 forCenter:(BOOL)arg4;
@end
