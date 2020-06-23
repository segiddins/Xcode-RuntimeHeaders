//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDebugGaugeReportDocument.h>

__attribute__((visibility("hidden")))
@interface GPUGaugeDocument : IDEDebugGaugeReportDocument
{
}

+ (BOOL)shouldTrackFileSystemChanges;
+ (BOOL)preservesVersions;
+ (BOOL)autosavesInPlace;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)backupFileURL;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (BOOL)canExportDocument;
- (id)traceSession;

@end
