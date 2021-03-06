//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class IBObjectLibraryAssetProvider, IBTargetRuntime, NSArray, NSImage, NSString;

@interface IBObjectLibraryAsset : NSView <NSCoding>
{
    NSArray *_cachedPasteboardObjects;
    BOOL _hasCreatedContent;
    NSArray *_searchStrings;
    NSString *_nibName;
    NSString *_representedObjectClassName;
    NSString *_label;
    NSString *_subtitle;
    NSString *_briefDescription;
    NSString *_fullDescription;
    NSString *_initialCategoryPath;
    NSArray *_filterableNames;
    long long _animationScalingMode;
    NSString *_assetIdentifier;
    NSImage *_explicitImage;
    NSString *_imageName;
    NSString *_imageGroupName;
    IBObjectLibraryAssetProvider *_assetProvider;
    IBTargetRuntime *_targetRuntime;
    Class _documentClass;
    long long _minimumRequiredRuntimeOSVersion;
    long long _instantiationMode;
    id _representedObject;
    NSView *_draggedView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSView *draggedView; // @synthesize draggedView=_draggedView;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) long long instantiationMode; // @synthesize instantiationMode=_instantiationMode;
@property long long minimumRequiredRuntimeOSVersion; // @synthesize minimumRequiredRuntimeOSVersion=_minimumRequiredRuntimeOSVersion;
@property(retain) Class documentClass; // @synthesize documentClass=_documentClass;
@property(retain) IBTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(retain, nonatomic) IBObjectLibraryAssetProvider *assetProvider; // @synthesize assetProvider=_assetProvider;
@property(copy) NSString *imageGroupName; // @synthesize imageGroupName=_imageGroupName;
@property(copy) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSImage *explicitImage; // @synthesize explicitImage=_explicitImage;
@property(copy) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property long long animationScalingMode; // @synthesize animationScalingMode=_animationScalingMode;
@property(copy, nonatomic) NSArray *filterableNames; // @synthesize filterableNames=_filterableNames;
@property(copy) NSString *initialCategoryPath; // @synthesize initialCategoryPath=_initialCategoryPath;
@property(copy, nonatomic) NSString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(copy) NSString *briefDescription; // @synthesize briefDescription=_briefDescription;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) NSString *representedObjectClassName; // @synthesize representedObjectClassName=_representedObjectClassName;
@property(copy) NSString *nibName; // @synthesize nibName=_nibName;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_appearanceIsLight;
- (void)_inferInstantiationModeForUnarchiver:(id)arg1;
- (void)_inferInstantiationMode;
- (id)searchStrings;
- (id)objectContainerCopyViaSerialization;
- (id)objectContainer;
- (id)pasteboardObjects;
- (id)description;
@property(readonly) NSView *effectiveDraggedView;
@property(readonly) NSView *effectiveDraggableView;
@property(readonly) id effectiveRepresentedObject;
@property(readonly) NSString *effectiveAssetIdentifier;
- (BOOL)inspectorShouldShowMinimumRequiredRuntimeOSVersion;
- (void)createContentIfNeeded;
- (id)instantiateObjectForRole:(long long)arg1;
@property(readonly) NSImage *effectiveStaticImageForDisplayingInLibrary;
- (void)didCreateContent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

