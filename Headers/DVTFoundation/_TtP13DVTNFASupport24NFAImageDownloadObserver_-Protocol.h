//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSProgress, NSString, NSURL, _TtC13DVTNFASupport18NFAImageDownloader;

@protocol _TtP13DVTNFASupport24NFAImageDownloadObserver_
- (void)nfaImageDownloader:(_TtC13DVTNFASupport18NFAImageDownloader *)arg1 didFinishDownloading:(NSString *)arg2 trainUpdate:(NSString *)arg3 destination:(NSURL *)arg4 error:(NSError *)arg5;
- (void)nfaImageDownloader:(_TtC13DVTNFASupport18NFAImageDownloader *)arg1 updatedProgress:(NSProgress *)arg2 image:(NSString *)arg3 trainUpdate:(NSString *)arg4 destination:(NSURL *)arg5;
- (void)nfaImageDownloader:(_TtC13DVTNFASupport18NFAImageDownloader *)arg1 willStartDownloading:(NSString *)arg2 trainUpdate:(NSString *)arg3 destination:(NSURL *)arg4;
@end

