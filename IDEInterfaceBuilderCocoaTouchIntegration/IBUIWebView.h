//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class NSString;

@interface IBUIWebView : IBUIView <IBDocumentArchiving, NSCoding>
{
    BOOL scalesPageToFit;
    BOOL allowsInlineMediaPlayback;
    BOOL mediaPlaybackRequiresUserAction;
    BOOL mediaPlaybackAllowsAirPlay;
    BOOL suppressesIncrementalRendering;
    BOOL keyboardDisplayRequiresUserAction;
    unsigned long long dataDetectorTypes;
    long long paginationMode;
    long long paginationBreakingMode;
    double pageLength;
    double gapBetweenPages;
}

+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL keyboardDisplayRequiresUserAction; // @synthesize keyboardDisplayRequiresUserAction;
@property(nonatomic) BOOL suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering;
@property(nonatomic) BOOL mediaPlaybackAllowsAirPlay; // @synthesize mediaPlaybackAllowsAirPlay;
@property(nonatomic) BOOL mediaPlaybackRequiresUserAction; // @synthesize mediaPlaybackRequiresUserAction;
@property(nonatomic) BOOL allowsInlineMediaPlayback; // @synthesize allowsInlineMediaPlayback;
@property(nonatomic) double gapBetweenPages; // @synthesize gapBetweenPages;
@property(nonatomic) double pageLength; // @synthesize pageLength;
@property(nonatomic) long long paginationBreakingMode; // @synthesize paginationBreakingMode;
@property(nonatomic) long long paginationMode; // @synthesize paginationMode;
@property(nonatomic) BOOL scalesPageToFit; // @synthesize scalesPageToFit;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes;
- (void)backportDetectsPhoneNumbers:(id)arg1;
- (void)upgradeDetectsPhoneNumbers:(id)arg1;
- (id)defaultBackgroundColor;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldDrawAsPlaceholder;
- (BOOL)prefersCachedImageBasedDrawing;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibSizesToFillViewControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

