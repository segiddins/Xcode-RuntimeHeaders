//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/NSObject-Protocol.h>

@class IBICCatalogCompilerOptions, IBICCatalogCompilerResult, NSString;

@protocol IBICCompilableSticker <NSObject>
- (NSString *)itemName;
- (BOOL)compileToPath:(NSString *)arg1 options:(IBICCatalogCompilerOptions *)arg2 results:(IBICCatalogCompilerResult *)arg3;
@end

