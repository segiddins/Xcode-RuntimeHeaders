//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface IBDocumentPluginLiberator : NSObject
{
    NSURL *_fileURL;
}

@property(readonly) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)liberationPreflight:(id)arg1;
- (id)errorForMissingIB3PluginIdentifiers:(id)arg1;
- (void)liberationErrorAlert:(id)arg1 wasPresentedWithResult:(long long)arg2 inContext:(void *)arg3;
- (void)handleLiberationError:(id)arg1 result:(long long)arg2 window:(id)arg3;
- (void)liberationLocatePluginErrorAlert:(id)arg1 wasPresentedWithResult:(long long)arg2 inContext:(void *)arg3;
- (id)gatherPluginsFromPaths:(id)arg1;
- (void)gatherPluginsFromPaths:(id)arg1 parent:(id)arg2 into:(id)arg3;
- (id)buildLiberationResultsString:(id)arg1;
- (id)liberationListAttributes;
- (id)liberationSubtitleAttributes;
- (id)liberationTitleAttributes;
- (BOOL)isLiberating;
- (void)removeFromLiberatingDocuments;
- (void)addToLiberatingDocuments;
- (id)initWithFileURL:(id)arg1;

@end

