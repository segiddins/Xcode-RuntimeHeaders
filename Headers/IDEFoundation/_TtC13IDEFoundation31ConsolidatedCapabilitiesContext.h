//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDESigningEditorCapabilityItemEditingConsolidatedContextSource-Protocol.h>
#import <IDEFoundation/IDESigningEditorCapabilityItemLibraryConsolidatedContextSource-Protocol.h>

@class MISSING_TYPE, NSDictionary;
@protocol IDESigningEditorCapabilityItemEditingConsolidatedContextSourceDelegate, IDESigningEditorCapabilityItemLibraryConsolidatedContextSourceDelegate;

@interface _TtC13IDEFoundation31ConsolidatedCapabilitiesContext : NSObject <IDESigningEditorCapabilityItemLibraryConsolidatedContextSource, IDESigningEditorCapabilityItemEditingConsolidatedContextSource>
{
    MISSING_TYPE *source;
    MISSING_TYPE *editingDelegate;
    MISSING_TYPE *libraryDelegate;
    MISSING_TYPE *isCachedConfigurationToContextInvalidated;
    MISSING_TYPE *cachedConfigurationToContext;
    MISSING_TYPE *isCachedConfigurationToEnabledItemsInvalidated;
    MISSING_TYPE *cachedConfigurationToEnabledItems;
    MISSING_TYPE *isCachedConfigurationToIdentifierToDisabledItem;
    MISSING_TYPE *cachedConfigurationToIdentifierToDisabledItem;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithSource:(id)arg1;
@property(nonatomic, readonly) NSDictionary *configurationToIdentifierToDisabledItem;
@property(nonatomic, readonly) NSDictionary *configurationToEnabledItems;
@property(nonatomic, readonly) NSDictionary *configurationToContext;
@property(nonatomic) __weak id <IDESigningEditorCapabilityItemLibraryConsolidatedContextSourceDelegate> libraryDelegate; // @synthesize libraryDelegate;
@property(nonatomic) __weak id <IDESigningEditorCapabilityItemEditingConsolidatedContextSourceDelegate> editingDelegate; // @synthesize editingDelegate;

@end

