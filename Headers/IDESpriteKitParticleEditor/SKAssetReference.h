//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESpriteKitParticleEditor/DVTCancellable-Protocol.h>
#import <IDESpriteKitParticleEditor/NSCopying-Protocol.h>

@class DVTFileDataType, NSString, SKEditorDocument, SKWorkspace;
@protocol SKAssetReferenceDelegate;

@interface SKAssetReference : NSObject <NSCopying, DVTCancellable>
{
    SKWorkspace *_registeredWorkspace;
    BOOL _registered;
    NSString *_name;
    DVTFileDataType *_type;
    SKEditorDocument *_document;
    id <SKAssetReferenceDelegate> _delegate;
}

+ (id)assetWithName:(id)arg1 ofType:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SKAssetReferenceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SKEditorDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) DVTFileDataType *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)_verifyAssetInWorkspace;
- (void)_invalidateAssetReference;
- (void)_verifyAssetValidityForDocument:(id)arg1;
- (void)_handleAssetUpdateInDocument:(id)arg1;
- (void)dealloc;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithName:(id)arg1 ofType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

