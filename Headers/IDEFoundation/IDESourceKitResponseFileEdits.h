//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceKitVariantDictionaryWrapper.h>

#import <IDEFoundation/IDESourceKitRefactoringFileEdits-Protocol.h>

@class IDESourceKitResponseArray, NSArray, NSString;

@interface IDESourceKitResponseFileEdits : IDESourceKitVariantDictionaryWrapper <IDESourceKitRefactoringFileEdits>
{
}

@property(readonly) IDESourceKitResponseArray *rawEdits;
@property(readonly) NSString *newName;
@property(readonly) NSString *filePath;
@property(readonly) NSArray *edits;

@end

