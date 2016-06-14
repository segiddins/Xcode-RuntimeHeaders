//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTProducts/DVTProductManager.h>

@class DVTArchiveProductSource, NSString;

@interface DVTMockProductManager : DVTProductManager
{
    NSString *_containingDirectory;
    DVTArchiveProductSource *_mockArchiveProductSource;
}

+ (id)buildVersionedProductTreeBottomUp:(id)arg1 mockDirectory:(id)arg2;
- (void).cxx_destruct;
- (id)archiveProductSource;
- (void)setMockArchiveProductSource:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithPlist:(id)arg1;

@end

