//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICImageSlot.h>

@class IBICIdiom, IBICLocus, IBICScale, IBICSize, IBICSubtype, NSValue;

@interface IBICAppIconSetRepSlot : IBICImageSlot
{
    IBICIdiom *_idiom;
    IBICSize *_size;
    IBICScale *_scale;
    IBICLocus *_locus;
    IBICSubtype *_subtype;
}

+ (id)orderedComponentClasses;
+ (id)slotWithIdiom:(id)arg1 size:(id)arg2 locus:(id)arg3 subtype:(id)arg4 scale:(id)arg5;
+ (id)slotWithIdiom:(id)arg1 size:(id)arg2 scale:(id)arg3 locus:(id)arg4;
@property(readonly) IBICSubtype *subtype; // @synthesize subtype=_subtype;
@property(readonly) IBICLocus *locus; // @synthesize locus=_locus;
@property(readonly) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly) IBICSize *size; // @synthesize size=_size;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)requiredPixelSize;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaKey;
@property(readonly) NSValue *pixelSize;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayName;
- (void)captureComponents;

@end

