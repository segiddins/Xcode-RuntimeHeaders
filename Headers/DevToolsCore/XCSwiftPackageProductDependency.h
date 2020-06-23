//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/PBXProductDependency.h>

#import <DevToolsCore/XCCompatibilityChecking-Protocol.h>

@class NSString, PBXTarget, XCSwiftPackageReference;

@interface XCSwiftPackageProductDependency : PBXProductDependency <XCCompatibilityChecking>
{
    PBXTarget *_owner;
    XCSwiftPackageReference *_packageReference;
    NSString *_productName;
}

+ (id)archiveNameForKey:(id)arg1;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) XCSwiftPackageReference *packageReference; // @synthesize packageReference=_packageReference;
@property(retain, nonatomic) PBXTarget *owner; // @synthesize owner=_owner;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)gidCommentForArchive;
- (BOOL)shouldArchivePackageReference;
- (void)findFeaturesInUseAndAddToSet:(id)arg1 usingPathPrefix:(id)arg2;
- (id)container;
- (void)dealloc;
- (id)initWithProductName:(id)arg1 packageReference:(id)arg2;
- (id)init;

@end

