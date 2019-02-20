//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

#import <IDEInterfaceBuilderKit/IBICCatalogItemObserver-Protocol.h>

@class NSArrayController, NSString;
@protocol IBInvalidation, IDEInspectorContentController;

@interface IBICCatalogItemInspector : IDEInspectorViewController <IBICCatalogItemObserver>
{
    NSArrayController *_localContentController;
    id <IBInvalidation> _rootObservationToken;
}

+ (id)inspectedArrayControllerKeys;
@property(readonly) id <IDEInspectorContentController> localContentController; // @synthesize localContentController=_localContentController;
- (void).cxx_destruct;
- (BOOL)showSuggestionSets;
- (id)generateSlotSlivers:(id)arg1;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)setContent:(id)arg1;
- (id)localContentForInput:(id)arg1;
- (id)itemsForResourceName;
- (Class)localContentClass;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
