//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSString;

@protocol DVTDownloadableInstallationHelper <NSObject>
- (void)downloadableNamed:(NSString *)arg1 needsTerminationOfAppsWithBundleIdentifier:(NSString *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
@end

