//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTMutableOrderedDictionary, IDEDistributionItemSigningInfo;

@interface IDEDistributionProvisioningSnapshot : NSObject
{
    DVTMutableOrderedDictionary *_itemToSigningInfoMap;
    IDEDistributionItemSigningInfo *_installerSigningInfo;
}

@property(readonly) IDEDistributionItemSigningInfo *installerSigningInfo; // @synthesize installerSigningInfo=_installerSigningInfo;
@property(readonly) DVTMutableOrderedDictionary *itemToSigningInfoMap; // @synthesize itemToSigningInfoMap=_itemToSigningInfoMap;
- (void).cxx_destruct;
- (id)description;
- (id)initWithItemToSigningInfoMap:(id)arg1 installerSigningInfo:(id)arg2;
- (id)init;

@end

