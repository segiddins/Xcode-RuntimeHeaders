//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEIntentBuilderEditor/DVTDiffTextFilter-Protocol.h>

@class NSString;

@interface IDEIntentBuilderModelTextConversionProvider : NSObject <DVTDiffTextFilter>
{
}

+ (BOOL)filterInputFilePath:(id)arg1 toOutputFilePath:(id)arg2 error:(id *)arg3;
+ (id)textFileDataTypeForInputFilePath:(id)arg1;
+ (BOOL)pathRequiresFilter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
