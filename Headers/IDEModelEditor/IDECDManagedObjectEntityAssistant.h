//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class NSArray, NSSet;

@interface IDECDManagedObjectEntityAssistant : IDEAssistant
{
    NSArray *_availableEntities;
    NSSet *_selectedEntityItems;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
@property(retain) NSSet *selectedEntityItems; // @synthesize selectedEntityItems=_selectedEntityItems;
@property(retain) NSArray *availableEntities; // @synthesize availableEntities=_availableEntities;
- (void).cxx_destruct;
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
