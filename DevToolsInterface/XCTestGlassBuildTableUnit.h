//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementObjectUnit.h>

@class NSMutableArray, NSMutableDictionary, NSOutlineView, NSSearchField, NSString, XCPropertyConditionSet, XCPropertyDefinition, XCPropertyInfoContext;

@interface XCTestGlassBuildTableUnit : XCElementObjectUnit
{
    NSString *_title;
    XCPropertyInfoContext *_propertyInfoContext;
    BOOL _showInternalNames;
    BOOL _showDefinitions;
    NSOutlineView *_outlineView;
    NSSearchField *_searchField;
    NSString *_searchString;
    NSMutableDictionary *_adapterForUIType;
    BOOL _needsCompleteUpdate;
    BOOL _processingCompleteUpdate;
    NSString *_selectedConfiguration;
    NSString *_preselectedName;
    XCPropertyDefinition *_preselectedDefinition;
    XCPropertyConditionSet *_preselectedConditionSet;
    NSString *_preselectedEditColumnId;
    NSMutableArray *_retainingObjects;
}

@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property BOOL showDefinitions; // @synthesize showDefinitions=_showDefinitions;
@property BOOL showInternalNames; // @synthesize showInternalNames=_showInternalNames;
@property(copy) NSString *selectedConfiguration; // @synthesize selectedConfiguration=_selectedConfiguration;
@property(copy) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (void)finalize;
- (void)anchor:(struct NSObject *)arg1 createLayoutWithinFace:(id)arg2;
- (void)addSearchFieldWithinFace:(id)arg1;
- (void)searchAction;
- (id)obtainFace;
- (void)addCondition:(id)arg1;
- (void)addUserDefinedSetting:(id)arg1;
- (void)selectAnyPreselection;
- (void)preselectBuildSettingNamed:(id)arg1 withDefinition:(id)arg2 conditionSet:(id)arg3 editColumnId:(id)arg4;
- (void)removeLocalAssignment:(id)arg1;
- (void)processCompleteUpdate;
- (void)rebuildOutline;
- (id)rootsFromBuildable;
- (id)userDefinedNamesBySubstractingDomains:(id)arg1;
- (BOOL)propertyNameIsValidForNewSetting:(id)arg1;
- (id)allPropertyNamesMutable;
- (id)window;
- (id)targets;
- (id)project;
- (id)buildableObject;
- (id)inspectedBuildable;
- (struct NSObject *)adapterForUIType:(id)arg1;
- (void)setPropertyInfoContext:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)invokeCompleteUpdate:(id)arg1;
- (id)propertyInfoContext;
- (void)callSetNeedsCompleteUpdate:(id)arg1;
- (void)callSetNeedsDisplay:(id)arg1;
- (void)callSetNeedsDisplay;
- (id)titleForDisclosure;

@end

