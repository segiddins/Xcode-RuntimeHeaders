//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESourceKitVariantDictionaryWrapper.h>

@class IDESourceKitResponseArray, NSString;

@interface IDESourceKitNotificationRefactoringProgressUpdated : IDESourceKitVariantDictionaryWrapper
{
}

@property(readonly) IDESourceKitResponseArray *diagnostics;
@property(readonly) IDESourceKitResponseArray *edits;
@property(readonly) double percentCompleted;
@property(readonly) NSString *message;

@end

