//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/NSObject-Protocol.h>

@class IBICAbstractCatalogItem, IBICIssueGenerationContext, NSMutableArray;

@protocol IBICCatalogItemIssueProvider <NSObject>
- (void)populateIssues:(NSMutableArray *)arg1 forCatalogItem:(IBICAbstractCatalogItem *)arg2 withContext:(IBICIssueGenerationContext *)arg3;
@end

