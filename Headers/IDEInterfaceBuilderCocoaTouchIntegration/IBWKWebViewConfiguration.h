//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class IBWKPreferences, NSString;

@interface IBWKWebViewConfiguration : NSObject <IBDocumentArchiving, NSCoding, NSCopying>
{
    BOOL _suppressesIncrementalRendering;
    BOOL _allowsAirPlayForMediaPlayback;
    BOOL _allowsInlineMediaPlayback;
    BOOL _allowsPictureInPictureMediaPlayback;
    BOOL _ignoresViewportScaleLimits;
    NSString *_applicationNameForUserAgent;
    long long _selectionGranularity;
    unsigned long long _dataDetectorTypes;
    unsigned long long _mediaTypesRequiringUserActionForPlayback;
    IBWKPreferences *_preferences;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IBWKPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) unsigned long long mediaTypesRequiringUserActionForPlayback; // @synthesize mediaTypesRequiringUserActionForPlayback=_mediaTypesRequiringUserActionForPlayback;
@property(nonatomic) BOOL ignoresViewportScaleLimits; // @synthesize ignoresViewportScaleLimits=_ignoresViewportScaleLimits;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) BOOL allowsPictureInPictureMediaPlayback; // @synthesize allowsPictureInPictureMediaPlayback=_allowsPictureInPictureMediaPlayback;
@property(nonatomic) long long selectionGranularity; // @synthesize selectionGranularity=_selectionGranularity;
@property(nonatomic) BOOL allowsInlineMediaPlayback; // @synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback;
@property(nonatomic) BOOL allowsAirPlayForMediaPlayback; // @synthesize allowsAirPlayForMediaPlayback=_allowsAirPlayForMediaPlayback;
@property(copy, nonatomic) NSString *applicationNameForUserAgent; // @synthesize applicationNameForUserAgent=_applicationNameForUserAgent;
@property(nonatomic) BOOL suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setIbInspectedSupportIncrementalRendering:(BOOL)arg1;
- (BOOL)ibInspectedSupportIncrementalRendering;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

