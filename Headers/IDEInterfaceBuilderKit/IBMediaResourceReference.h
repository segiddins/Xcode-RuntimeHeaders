//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBResourceValueTransformer, IDEMediaResourceVariantSet;

@interface IBMediaResourceReference : NSObject
{
    IDEMediaResourceVariantSet *_variantSet;
    IBResourceValueTransformer *_transformer;
    id _originalValue;
    id _documentObject;
}

@property(retain) id documentObject; // @synthesize documentObject=_documentObject;
@property(retain) id originalValue; // @synthesize originalValue=_originalValue;
@property(readonly) IBResourceValueTransformer *transformer; // @synthesize transformer=_transformer;
@property(readonly) IDEMediaResourceVariantSet *variantSet; // @synthesize variantSet=_variantSet;
- (void).cxx_destruct;
- (BOOL)updateValueFromResourceValueIfNeeded:(id)arg1 inDocument:(id)arg2;
- (id)initWithVariantSet:(id)arg1 documentObject:(id)arg2 originalValue:(id)arg3 transformer:(id)arg4;

@end

