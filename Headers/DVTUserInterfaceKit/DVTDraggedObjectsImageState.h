//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTDraggedImageState.h>

@class NSArray, NSDictionary, NSImage, NSString;

@interface DVTDraggedObjectsImageState : DVTDraggedImageState
{
    NSDictionary *_framesByIdentifier;
    NSDictionary *_secondaryFramesByIdentifier;
    NSDictionary *_viewsByIdentifier;
    NSDictionary *_imagesByIdentifier;
    NSImage *_image;
    struct CGPoint _frameOffset;
    BOOL _forcesImageScaling;
    NSArray *_identifiers;
    NSString *_name;
}

+ (id)stateWithName:(id)arg1 identifiers:(id)arg2 views:(id)arg3;
+ (id)stateWithName:(id)arg1 identifiers:(id)arg2 images:(id)arg3 frames:(id)arg4;
+ (id)stateWithName:(id)arg1 identifiers:(id)arg2 images:(id)arg3 frames:(id)arg4 secondaryFrames:(id)arg5;
- (void).cxx_destruct;
@property BOOL forcesImageScaling; // @synthesize forcesImageScaling=_forcesImageScaling;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)synthesizedAnchorPoint:(struct CGPoint *)arg1 forSubsequentState:(id)arg2;
- (id)identifierForPoint:(struct CGPoint)arg1;
- (BOOL)containsIdentifier:(id)arg1;
- (id)image;
- (id)imageForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (struct CGRect)_offsettedFrameFromValue:(id)arg1;
- (struct CGRect)secondaryFrameForIdentifier:(id)arg1;
- (struct CGRect)frameForIdentifier:(id)arg1;
- (struct CGRect)originalFrameForIdentifier:(id)arg1;
- (void)remapIdentifiers:(id)arg1;
- (id)initWithName:(id)arg1 identifiers:(id)arg2 views:(id)arg3;
- (id)initWithName:(id)arg1 identifiers:(id)arg2 images:(id)arg3 frames:(id)arg4 secondaryFrames:(id)arg5;
- (id)initWithName:(id)arg1 identifiers:(id)arg2;

@end
