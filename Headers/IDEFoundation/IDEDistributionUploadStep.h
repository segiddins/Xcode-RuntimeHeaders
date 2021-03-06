//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEDistributionStep.h>

@class DVTFilePath, NSString;

@interface IDEDistributionUploadStep : IDEDistributionStep
{
    BOOL _cancelled;
    CDUnknownBlockType _uploadWillBeginCallback;
    CDUnknownBlockType _updateUploadPercentageCallback;
    CDUnknownBlockType _updateUploadMessageCallback;
    double _progress;
    NSString *_message;
}

+ (id)propertyListForContext:(id)arg1;
+ (id)availableOptionsForPropertyList;
- (void).cxx_destruct;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(copy) NSString *message; // @synthesize message=_message;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType updateUploadMessageCallback; // @synthesize updateUploadMessageCallback=_updateUploadMessageCallback;
@property(copy, nonatomic) CDUnknownBlockType updateUploadPercentageCallback; // @synthesize updateUploadPercentageCallback=_updateUploadPercentageCallback;
@property(copy, nonatomic) CDUnknownBlockType uploadWillBeginCallback; // @synthesize uploadWillBeginCallback=_uploadWillBeginCallback;
- (void)cancelUpload:(CDUnknownBlockType)arg1;
- (id)archiveSubmissionInfoWithIdentifier:(id)arg1 issues:(id)arg2;
- (long long)destination;
- (void)uploadWithDeviceToken:(id)arg1;
@property(readonly, nonatomic) DVTFilePath *uploadFilePath;
- (BOOL)loadFromExportOptions:(id)arg1 error:(id *)arg2;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;

@end

