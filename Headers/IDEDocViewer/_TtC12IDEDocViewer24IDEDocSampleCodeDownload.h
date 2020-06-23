//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSError, NSImage, NSProgress, NSString, NSURL;

@interface _TtC12IDEDocViewer24IDEDocSampleCodeDownload : NSObject
{
    MISSING_TYPE *sampleCodeName;
    MISSING_TYPE *iconImage;
    MISSING_TYPE *downloadStage;
    MISSING_TYPE *progressFractionCompleted;
    MISSING_TYPE *progressLocalizedAdditionalDescription;
    MISSING_TYPE *_progress;
    MISSING_TYPE *_fractionCompletedObservingToken;
    MISSING_TYPE *_localizedAdditionalDescriptionObservingToken;
    MISSING_TYPE *downloadError;
    MISSING_TYPE *downloadsDirectoryURL;
    MISSING_TYPE *_entityIdentifier;
    MISSING_TYPE *_future;
}

+ (id)keyPathsForValuesAffectingCanRevealDownloadedFileInFinder;
+ (id)keyPathsForValuesAffectingStatus;
- (void).cxx_destruct;
- (id)init;
- (void)beginDownload;
- (void)dealloc;
- (id)initWithSampleCodeName:(id)arg1 request:(id)arg2 language:(int)arg3;
@property(nonatomic, readonly) NSURL *extractDestinationDirectoryURL;
@property(nonatomic, copy) NSURL *downloadsDirectoryURL;
@property(nonatomic, readonly) NSURL *archiveFileURL;
@property(nonatomic, readonly) BOOL canRevealDownloadedFileInFinder;
@property(nonatomic, readonly) NSString *status;
@property(nonatomic, copy) NSError *downloadError;
@property(nonatomic, retain) NSProgress *_progress; // @synthesize _progress;
@property(nonatomic, copy) NSString *progressLocalizedAdditionalDescription;
@property(nonatomic) double progressFractionCompleted; // @synthesize progressFractionCompleted;
@property(nonatomic) long long downloadStage; // @synthesize downloadStage;
@property(nonatomic, readonly) NSImage *iconImage; // @synthesize iconImage;
@property(nonatomic, readonly) NSString *sampleCodeName;

@end
