//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDEActivityLogSection, IDEBuilder, NSString;

@protocol IDEBuilderCallbacks <NSObject>
- (void)builder:(IDEBuilder *)arg1 didUpdateBuildStatusWithStateDescription:(NSString *)arg2 fileProgressString:(NSString *)arg3 builderProgress:(double)arg4;
- (void)builderDidFinishExecuting:(IDEBuilder *)arg1;
- (void)builderDidStartExecuting:(IDEBuilder *)arg1;
- (void)builder:(IDEBuilder *)arg1 resultDidChange:(int)arg2;
- (void)builder:(IDEBuilder *)arg1 activityLogSectionDidChange:(IDEActivityLogSection *)arg2;
@end

