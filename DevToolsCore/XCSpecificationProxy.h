//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString, TSPropertyListDictionary, XCSpecification, XCSpecificationCache;

@interface XCSpecificationProxy : NSObject
{
    Class _specTypeBaseClass;
    TSPropertyListDictionary *_propertyList;
    XCSpecification *_loadedSpecification;
    NSError *_loadError;
    XCSpecificationCache *_cache;
    struct _NSRange _cacheByteRange;
    NSString *_identifier;
    NSString *_proxyDomain;
}

+ (id)localizedSpecificationTypeName;
- (id)domain;
- (id)objectOrNilForKey:(id)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (long long)nameCompare:(id)arg1;
- (long long)identifierCompare:(id)arg1;
- (BOOL)isMissingSpecificationProxy;
- (id)loadedSpecification;
- (BOOL)isNotYetLoadedSpecificationProxy;
- (Class)specificationTypeBaseClass;
- (id)specificationType;
- (id)localizedDescription;
- (id)name;
- (id)properties;
- (id)identifier;
- (void)dealloc;
- (id)initWithSpecificationTypeBaseClass:(Class)arg1 identifier:(id)arg2 cache:(id)arg3 byteRange:(struct _NSRange)arg4 inDomain:(id)arg5;
- (id)initWithSpecificationTypeBaseClass:(Class)arg1 propertyList:(id)arg2 inDomain:(id)arg3;

@end

