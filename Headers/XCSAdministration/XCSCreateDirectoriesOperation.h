//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@class NSString;

@interface XCSCreateDirectoriesOperation : XCSInitializationOperation
{
    NSString *_sharedDataPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sharedDataPath; // @synthesize sharedDataPath=_sharedDataPath;
- (void)undo;
- (id)undoStatusDescription;
- (void)run;
- (BOOL)sharedDataSymlinkNeeded;
- (BOOL)dataExistsAtPreviousLocation;
- (id)statusDescription;

@end

