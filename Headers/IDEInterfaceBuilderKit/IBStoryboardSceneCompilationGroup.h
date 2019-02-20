//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBStoryboardDocument, IBStoryboardDocumentCompiler, IBStoryboardSceneRootCompilationUnit, NSArray, NSDictionary;
@protocol IBPrimarySceneObject;

@interface IBStoryboardSceneCompilationGroup : NSObject
{
    IBStoryboardDocument *_storyboard;
    NSDictionary *_storyboardObjectsToTriggeredSegues;
    BOOL _rootUnitRequiresIdependentInstantiation;
    IBStoryboardDocumentCompiler *_compiler;
    NSObject<IBPrimarySceneObject> *_storyboardViewController;
    IBStoryboardSceneRootCompilationUnit *_rootCompilationUnit;
    NSArray *_childCompilationUnits;
}

@property(readonly) NSArray *childCompilationUnits; // @synthesize childCompilationUnits=_childCompilationUnits;
@property(readonly) IBStoryboardSceneRootCompilationUnit *rootCompilationUnit; // @synthesize rootCompilationUnit=_rootCompilationUnit;
@property(readonly) NSObject<IBPrimarySceneObject> *storyboardViewController; // @synthesize storyboardViewController=_storyboardViewController;
- (void).cxx_destruct;
- (id)description;
- (BOOL)generateCompilationUnitsReturningErrors:(id *)arg1;
- (id)makeRootViewControllerUnit;
- (void)capturePlaceholderTables;
- (void)setupSegueTriggerForObject:(id)arg1 fromCompilationUnitIfNeeded:(id)arg2;
- (void)patchConnectionsForCompilationUnit:(id)arg1 separationType:(int)arg2 errors:(id)arg3;
@property(readonly) NSArray *allCompilationUnits;
- (id)compilationResultsForCompilationUnits:(id)arg1 options:(id)arg2 returningErrors:(id *)arg3;
- (id)orderCompilationUnitsForCompilation:(id)arg1;
- (id)initWithCompiler:(id)arg1 viewController:(id)arg2 storyboard:(id)arg3 triggeredSegues:(id)arg4 rootUnitRequiresIdependentInstantiation:(BOOL)arg5;

@end
