//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardAbstractTriggeredSegue.h>

@interface IBCocoaTouchStoryboardCustomSegue : IBUIStoryboardAbstractTriggeredSegue
{
}

+ (void)populatePrototypes:(id)arg1 inStoryboard:(id)arg2 forSegueFromObject:(id)arg3 toObject:(id)arg4 withTrigger:(id)arg5;
+ (id)prototypeTriggeredSeguesForDestination:(id)arg1 inStoryboard:(id)arg2;
+ (id)qualifiedSegueClassSymbolsForDocument:(id)arg1;
+ (id)customSegueSubclassesForDocument:(id)arg1;
+ (id)builtInSegueClasses;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)classIdentifier;
+ (id)menuLabelForConnection:(id)arg1;
+ (BOOL)wantsDefaultCustomClassCompatibilityWarning;
+ (double)displayOrderPriority;
- (id)missingComponents;
- (id)badgeImage;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)metricChainSucceedingMetric:(id)arg1;
- (id)instantiateSegueTemplate;
- (BOOL)isPrototypeFor:(id)arg1;
- (BOOL)isEqualToPrototype:(id)arg1;

@end

