//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDEActivityLogSection, NSArray, NSString;

@protocol IDESourcePackagePreflightResolutionDelegate
- (void)preflightResolutionDidCompleteWithPackageName:(NSString *)arg1 products:(NSArray *)arg2 logSection:(IDEActivityLogSection *)arg3 success:(BOOL)arg4;
- (void)preflightResolutionDidUpdateStatus:(NSString *)arg1 progress:(long long)arg2;
@end

