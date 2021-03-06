//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class NSArray, NSSet;

@interface IDECDManagedObjectEntityAssistant : IDEAssistant
{
    NSArray *_availableEntities;
    NSSet *_selectedEntityItems;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
- (void).cxx_destruct;
@property(retain) NSSet *selectedEntityItems; // @synthesize selectedEntityItems=_selectedEntityItems;
@property(retain) NSArray *availableEntities; // @synthesize availableEntities=_availableEntities;
- (id)nextAssistantIdentifier;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)canFinish;
- (void)viewDidInstall;
- (void)setupAvailableEntities;
- (void)entitiesChanged:(id)arg1;
- (void)setContextForTemplateInstantiation;
- (id)nibBundle;
- (id)nibName;

@end

