//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardAbstractTriggeredSegue.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBCocoaTouchStoryboardAbstractModalSegue-Protocol.h>

@class NSNumber, NSString;

@interface IBCocoaTouchStoryboardModalSegue : IBUIStoryboardAbstractTriggeredSegue <IBCocoaTouchStoryboardAbstractModalSegue>
{
    NSNumber *_modalPresentationStyle;
    NSNumber *_modalTransitionStyle;
}

+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)keyPathsForValuesAffectingIbImageForNavigationRepresentation;
+ (id)classIdentifier;
+ (BOOL)wantsDefaultAnimatesCompatibilityWarning;
+ (double)displayOrderPriority;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property(copy, nonatomic) NSNumber *modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
- (BOOL)isFlowTerminatingSegue;
- (id)effectiveConnectionForEnablingConfigurationsInDocument:(id)arg1 segueReachabilityContext:(id)arg2 error:(id *)arg3;
- (id)badgeImage;
- (id)metricChainSucceedingMetric:(id)arg1;
- (void)copyCommonInstanceStateToTriggeredSegue:(id)arg1;
- (id)instantiateSegueTemplate;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL animates;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

