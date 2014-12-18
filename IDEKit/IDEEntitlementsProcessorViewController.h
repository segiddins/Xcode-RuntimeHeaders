//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEDistributionMethod, NSDictionary;

@interface IDEEntitlementsProcessorViewController : IDEViewController
{
    IDEDistributionMethod *_distributionMethod;
    NSDictionary *_itemToProcessorMap;
}

+ (Class)viewControllerClassForEntitlementsProcessorClass:(Class)arg1;
@property(readonly, nonatomic) NSDictionary *itemToProcessorMap; // @synthesize itemToProcessorMap=_itemToProcessorMap;
@property(readonly, nonatomic) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
- (void).cxx_destruct;
- (id)initWithDistributionMethod:(id)arg1 itemToProcessorMap:(id)arg2;

@end

