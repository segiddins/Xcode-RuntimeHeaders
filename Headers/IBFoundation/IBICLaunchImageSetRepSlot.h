//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICImageSlot.h>

@class IBICDeviceOrientation, IBICExtent, IBICIdiom, IBICScale, IBICSubtype, IBICSystemVersion;

@interface IBICLaunchImageSetRepSlot : IBICImageSlot
{
    IBICIdiom *_idiom;
    IBICDeviceOrientation *_deviceOrientation;
    IBICSubtype *_subtype;
    IBICScale *_scale;
    IBICSystemVersion *_minimumSystemVersion;
    IBICExtent *_extent;
}

+ (id)detailAreaGroupPathForVersion:(id)arg1 idiom:(id)arg2 orientation:(id)arg3 extent:(id)arg4;
+ (id)orderedComponentClasses;
+ (id)slotWithIdiom:(id)arg1 subtype:(id)arg2 scale:(id)arg3 deviceOrientation:(id)arg4 extent:(id)arg5 minimumSystemVersion:(id)arg6;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
@property(readonly) IBICExtent *extent; // @synthesize extent=_extent;
@property(readonly) IBICSystemVersion *minimumSystemVersion; // @synthesize minimumSystemVersion=_minimumSystemVersion;
@property(readonly) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly) IBICSubtype *subtype; // @synthesize subtype=_subtype;
@property(readonly) IBICDeviceOrientation *deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)requiredPixelSize;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)baseFileNameForVersionedInfoPlistEntryForSlottedAssetSetName:(id)arg1;
- (id)pixelSize;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (void)captureComponents;

@end

