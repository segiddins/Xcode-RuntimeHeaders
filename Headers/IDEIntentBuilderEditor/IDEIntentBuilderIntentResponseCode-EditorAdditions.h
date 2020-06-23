//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderIntentResponseCode.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderLocalizableStringProvider-Protocol.h>

@class NSArray, NSDictionary;

@interface IDEIntentBuilderIntentResponseCode (EditorAdditions) <IDEIntentBuilderLocalizableStringProvider>
+ (id)responseCodeFromPasteboardWithIntentResponse:(id)arg1;
+ (BOOL)canPasteFromPasteboardWithIntentResponse:(id)arg1;
- (void)copyToPasteboard;
@property(readonly, copy, nonatomic) NSArray *properties;
@property(readonly, copy, nonatomic) NSDictionary *localizableStringsDictionary;
@property(readonly, getter=isEnabled) BOOL enabled;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, nonatomic, getter=isRemovable) BOOL removable;
@end

