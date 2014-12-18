//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class DVTFilePath, IDEDistributionItem, NSDictionary, NSString;

@interface IDEDistributionItemProcessingResults : NSObject <NSCopying>
{
    IDEDistributionItem *_item;
    NSDictionary *_entitlements;
    DVTFilePath *_path;
    NSString *_codesignCommandline;
}

+ (id)itemResultsForItem:(id)arg1 entitlements:(id)arg2 destinationPath:(id)arg3 andCommandline:(id)arg4;
@property(readonly, nonatomic) NSString *codesignCommandline; // @synthesize codesignCommandline=_codesignCommandline;
@property(readonly, nonatomic) DVTFilePath *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) IDEDistributionItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

