//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface XCLibraryDescriptor : NSObject
{
    NSString *_path;
    NSString *_displayName;
    NSString *_sourceTree;
    NSNumber *_supportsiOSMac;
    NSNumber *_supportsiOS;
}

@property(readonly) NSString *sourceTree; // @synthesize sourceTree=_sourceTree;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
@property(readonly) BOOL supportsiOS;
@property(readonly) BOOL supportsiOSMac;
- (id)_pathForLibraryIniOSSupportFolder:(id)arg1;
- (BOOL)_supportsiOSMac:(id)arg1;
- (void)setPath:(id)arg1;
- (id)path;
- (id)initWithPath:(id)arg1 sourceTree:(id)arg2;

@end

