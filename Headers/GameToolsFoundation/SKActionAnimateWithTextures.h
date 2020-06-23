//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameToolsFoundation/GTFActionModel.h>

@class NSArray;

@interface SKActionAnimateWithTextures : GTFActionModel
{
    BOOL _resize;
    BOOL _restore;
}

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingInspectorTextureFileNames;
+ (id)keyPathsForValuesAffectingInspectorRestore;
+ (id)keyPathsForValuesAffectingInspectorResize;
@property BOOL restore; // @synthesize restore=_restore;
@property BOOL resize; // @synthesize resize=_resize;
- (id)_recursivePathsForResourcesNamed:(id)arg1 inDirectory:(id)arg2;
- (id)findAbsolutePathForResourceNamed:(id)arg1;
- (id)_textureForFilename:(id)arg1;
- (void)reverse;
- (id)getSKAction;
- (id)actionInfoString;
- (id)actionColor;
- (id)actionName;
- (long long)actionType;
@property(retain) NSArray *textureFileNames;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextures:(id)arg1 resize:(BOOL)arg2 restore:(BOOL)arg3;
@property(retain, nonatomic) NSArray *inspectorTextureFileNames;
@property(nonatomic) BOOL inspectorRestore;
@property(nonatomic) BOOL inspectorResize;

@end

