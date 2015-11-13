//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSMapTable, UXCollectionViewLayout;
@protocol UXCollectionViewLayoutProxyDelegate;

__attribute__((visibility("hidden")))
@interface _UXCollectionViewLayoutProxy : NSProxy
{
    id <UXCollectionViewLayoutProxyDelegate> _delegate;
    UXCollectionViewLayout *_layout;
    NSMapTable *_methodSignituresBySelector;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
+ (Class)class;
@property(retain, nonatomic) NSMapTable *methodSignituresBySelector; // @synthesize methodSignituresBySelector=_methodSignituresBySelector;
@property(readonly, nonatomic) UXCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) id <UXCollectionViewLayoutProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (Class)class;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;

@end

