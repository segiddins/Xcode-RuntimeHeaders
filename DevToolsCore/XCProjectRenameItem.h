//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSError, NSImage, NSMutableArray, NSString, PBXProject, PBXTarget;

@interface XCProjectRenameItem : NSObject
{
    XCProjectRenameItem *_parent;
    id _representedObject;
    PBXProject *_project;
    PBXTarget *_target;
    NSMutableArray *_buildConfigurations;
    NSString *_type;
    NSString *_currentName;
    NSString *_proposedName;
    NSAttributedString *_attributedCurrentName;
    NSAttributedString *_attributedProposedName;
    NSImage *_image;
    NSMutableArray *_children;
    NSError *_error;
    BOOL _enabled;
    BOOL _shouldRename;
    BOOL _requiresUniqueChildNames;
}

@property(retain) NSMutableArray *buildConfigurations; // @synthesize buildConfigurations=_buildConfigurations;
@property PBXTarget *target; // @synthesize target=_target;
@property id representedObject; // @synthesize representedObject=_representedObject;
@property BOOL shouldRename; // @synthesize shouldRename=_shouldRename;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSMutableArray *children; // @synthesize children=_children;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(retain) NSAttributedString *attributedProposedName; // @synthesize attributedProposedName=_attributedProposedName;
@property(retain) NSAttributedString *attributedCurrentName; // @synthesize attributedCurrentName=_attributedCurrentName;
@property(copy) NSString *proposedName; // @synthesize proposedName=_proposedName;
@property(copy) NSString *currentName; // @synthesize currentName=_currentName;
@property(copy) NSString *type; // @synthesize type=_type;
@property PBXProject *project; // @synthesize project=_project;
@property XCProjectRenameItem *parent; // @synthesize parent=_parent;
- (void)validate;
- (void)rename;
- (void)removeBuildConfiguration:(id)arg1;
- (void)addBuildConfigurations:(id)arg1;
- (void)addBuildConfiguration:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)dealloc;
- (id)init;

@end

