//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTDelayedInvocation, DVTObservingToken, NSDictionaryController, NSObject, NSString;
@protocol DVTInvalidation, IDEInfoPlistCoordination;

@interface IDETargetEditorAppCategorySelectionViewController : IDEViewController
{
    NSObject<IDEInfoPlistCoordination> *_coordinator;
    DVTDelayedInvocation *_delayedInvocation;
    id <DVTInvalidation> _infoPlistCoordinatorDidChangeObserver;
    DVTObservingToken *_coordinatorObservation;
    NSDictionaryController *_appCategoriesController;
    NSObject<IDEInfoPlistCoordination> *_lastCoordinator;
    NSString *_lastSelectedAppCategory;
}

@property(retain, nonatomic) NSString *lastSelectedAppCategory; // @synthesize lastSelectedAppCategory=_lastSelectedAppCategory;
@property(retain, nonatomic) NSObject<IDEInfoPlistCoordination> *lastCoordinator; // @synthesize lastCoordinator=_lastCoordinator;
@property(retain, nonatomic) NSDictionaryController *appCategoriesController; // @synthesize appCategoriesController=_appCategoriesController;
@property(retain, nonatomic) DVTObservingToken *coordinatorObservation; // @synthesize coordinatorObservation=_coordinatorObservation;
@property(retain) id <DVTInvalidation> infoPlistCoordinatorDidChangeObserver; // @synthesize infoPlistCoordinatorDidChangeObserver=_infoPlistCoordinatorDidChangeObserver;
@property(retain, nonatomic) DVTDelayedInvocation *delayedInvocation; // @synthesize delayedInvocation=_delayedInvocation;
@property(retain, nonatomic) NSObject<IDEInfoPlistCoordination> *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setSelectedAppCategory:(id)arg1;
- (id)selectedAppCategory;
- (void)loadAppCategories;
- (void)didUpdateInfoPlist;
- (void)setUpDelayedInvocation;
- (void)setUpObservations;
- (void)setUp;
- (id)initWithInfoPlistCoordinator:(id)arg1 usingDefaultNib:(BOOL)arg2;

@end

