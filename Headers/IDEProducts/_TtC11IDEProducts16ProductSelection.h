//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;
@protocol IDESelectableProduct, _TtP11IDEProducts24ProductSelectionDelegate_, _TtP11IDEProducts31ProductSelectionContentDelegate_;

@interface _TtC11IDEProducts16ProductSelection : NSObject
{
    MISSING_TYPE *productSelectionDelegate;
    MISSING_TYPE *productSelectionContentDelegate;
    MISSING_TYPE *disambiguator;
    MISSING_TYPE *products;
    MISSING_TYPE *productsByCategory;
    MISSING_TYPE *productManager;
    MISSING_TYPE *productsChangeSubscription;
    MISSING_TYPE *hasCompletedInitialLoadingSubscription;
    MISSING_TYPE *logAspect;
    MISSING_TYPE *isSelectionStateRestoring;
    MISSING_TYPE *selectedStateRestorationKey;
    MISSING_TYPE *selected;
    MISSING_TYPE *hasCompletedInitialLoading;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithProductManager:(id)arg1 selectedStateRestorationKey:(id)arg2;
@property(nonatomic) BOOL hasCompletedInitialLoading; // @synthesize hasCompletedInitialLoading;
- (id)productWithIdentifier:(id)arg1 error:(id *)arg2;
@property(nonatomic, retain) id <IDESelectableProduct> selected; // @synthesize selected;
@property(nonatomic, copy) NSDictionary *productsByCategory;
@property(nonatomic) __weak id <_TtP11IDEProducts31ProductSelectionContentDelegate_> productSelectionContentDelegate; // @synthesize productSelectionContentDelegate;
@property(nonatomic) __weak id <_TtP11IDEProducts24ProductSelectionDelegate_> productSelectionDelegate; // @synthesize productSelectionDelegate;

@end

