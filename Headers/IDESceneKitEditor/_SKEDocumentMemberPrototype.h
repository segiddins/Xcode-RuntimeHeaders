//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _SKEDocumentMemberPrototype : NSObject
{
}

+ (id)ske_attributeClassesOfInterestInEditorWithAvailability:(unsigned long long)arg1;
+ (unsigned long long)ske_availability;
+ (id)keyPathsForValuesAffectingSke_overridesMembers;
+ (id)ske_image;
+ (id)keyPathsForValuesAffectingSke_extendedName;
+ (id)ske_memberClassDescriptionWithPlurality:(BOOL)arg1;
+ (id)keyPathsForValuesAffectingSke_name;
+ (BOOL)ske_isScene;
+ (BOOL)ske_isAction;
+ (BOOL)ske_isAnimation;
+ (BOOL)ske_isNodeAttribute;
+ (BOOL)ske_isParticleSystem;
+ (BOOL)ske_isPhysicsField;
+ (BOOL)ske_isPhysicsBody;
+ (BOOL)ske_isMaterial;
+ (BOOL)ske_isGeometryElement;
+ (BOOL)ske_isGeometry;
+ (BOOL)ske_isMorpher;
+ (BOOL)ske_isSkinner;
+ (BOOL)ske_isCamera;
+ (BOOL)ske_isLight;
+ (BOOL)ske_isNode;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
- (id)ideModelObjectTypeIdentifier;
- (id)humanReadableNameForInspectorKeyPath:(id)arg1;
- (void)document:(id)arg1 didReplaceChildMember:(id)arg2 ofMember:(id)arg3 byChildMember:(id)arg4;
- (void)document:(id)arg1 willReplaceChildMember:(id)arg2 ofMember:(id)arg3 byChildMember:(id)arg4;
- (void)document:(id)arg1 didRemoveChildMember:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 willRemoveChildMember:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 didAddChildMember:(id)arg2 toMember:(id)arg3;
- (void)document:(id)arg1 willAddChildMember:(id)arg2 toMember:(id)arg3;
- (id)navigableItem_name;
- (id)ske_childMembers;
- (void)setChildMembers:(id)arg1;
- (void)ske_rebuildChildMembers;
- (void)ske_setAttribute:(id)arg1 ofClass:(Class)arg2;
- (id)ske_attributeOfClass:(Class)arg1;
- (id)ske_overridesMembers;
- (id)ske_hierarchyAttributesStatusIconNames;
- (id)ske_attributesMembers;
- (void)__ske_putAttributesMembersInArray:(id)arg1 summary:(unsigned long long *)arg2;
- (id)ske_entityIdentifier;
- (void)setSke_entityIdentifier:(id)arg1;
- (id)ske_navigableDocumentLocation;
- (id)ske_image;
- (id)ske_extendedName;
- (id)ske_name;
- (id)ske_referencePath;
- (id)ske_modelPath;
- (id)ske_identifier;
- (id)ske_shadableMember;
- (id)ske_particleSystemMember;
- (id)ske_materialMember;
- (id)ske_lightMember;
- (id)ske_geometryMember;
- (id)ske_physicsFieldMember;
- (id)ske_physicsBodyMember;
- (id)ske_morpherMember;
- (id)ske_skinnerMember;
- (id)ske_cameraMember;
- (id)ske_animationMember;
- (id)ske_nodeMember;
- (BOOL)ske_isEditable;
- (BOOL)ske_isShadable;
- (BOOL)ske_isScene;
- (BOOL)ske_isAction;
- (BOOL)ske_isAnimation;
- (BOOL)ske_isNodeAttribute;
- (BOOL)ske_isParticleSystem;
- (BOOL)ske_isPhysicsField;
- (BOOL)ske_isPhysicsBody;
- (BOOL)ske_isMaterial;
- (BOOL)ske_isGeometryElement;
- (BOOL)ske_isGeometry;
- (BOOL)ske_isMorpher;
- (BOOL)ske_isSkinner;
- (BOOL)ske_isCamera;
- (BOOL)ske_isLight;
- (BOOL)ske_isNode;
- (id)ske_document;
- (void)setSke_document:(id)arg1;

@end

