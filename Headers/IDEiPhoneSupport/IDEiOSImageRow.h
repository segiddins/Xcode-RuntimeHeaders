//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEiPhoneSupport/DVTInvalidation-Protocol.h>
#import <IDEiPhoneSupport/Xcode3TargetEditorImageModel-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, DVTVersion, NSArray, NSImage, NSString;

@interface IDEiOSImageRow : NSObject <DVTInvalidation, Xcode3TargetEditorImageModel>
{
    BOOL _hidden;
    BOOL _foundCandidateImageFileWithWrongSize;
    int _sectionType;
    NSString *_title;
    NSString *_device;
    NSString *_subtitle;
    DVTFilePath *_imageFilePath;
    DVTVersion *_minimumOSVersion;
    DVTVersion *_maximumDeploymentOS;
    NSString *_nameSuffix;
    NSArray *_alternateNameSuffixes;
    NSString *_scale;
    NSString *_orientation;
    NSString *_tooltip;
    struct CGSize _imageSize;
    struct CGSize _statusBarHiddenImageSize;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingStatusMessage;
+ (id)keyPathsForValuesAffectingStatusImage;
+ (id)rowForDictionary:(id)arg1 withSectionType:(int)arg2;
@property(copy, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property BOOL foundCandidateImageFileWithWrongSize; // @synthesize foundCandidateImageFileWithWrongSize=_foundCandidateImageFileWithWrongSize;
@property(copy, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property(copy, nonatomic) NSString *scale; // @synthesize scale=_scale;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) struct CGSize statusBarHiddenImageSize; // @synthesize statusBarHiddenImageSize=_statusBarHiddenImageSize;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSArray *alternateNameSuffixes; // @synthesize alternateNameSuffixes=_alternateNameSuffixes;
@property(copy, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(copy, nonatomic) DVTVersion *maximumDeploymentOS; // @synthesize maximumDeploymentOS=_maximumDeploymentOS;
@property(copy, nonatomic) DVTVersion *minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property(retain, nonatomic) DVTFilePath *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *device; // @synthesize device=_device;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) struct CGSize imageSizeInPoints;
- (int)imageType;
@property(readonly, copy, nonatomic) NSString *statusMessage;
@property(readonly, nonatomic) NSImage *statusImage;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

