//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESourceKitVariantDictionaryWrapper.h>

#import <IDEFoundation/IDESourceKitRefactoringEdit-Protocol.h>

@class IDESourceKitResponseArray, NSArray, NSString;

@interface IDESourceKitResponseEdit : IDESourceKitVariantDictionaryWrapper <IDESourceKitRefactoringEdit>
{
}

@property(readonly) IDESourceKitResponseArray *rawRanges;
@property(readonly) NSString *sourceText;
@property(readonly) long long endColumn;
@property(readonly) long long endLine;
@property(readonly) long long column;
@property(readonly) long long line;
@property(readonly) struct _sourcekit_uid_s *rawKind;
@property(readonly) NSArray *renameRanges;

@end

