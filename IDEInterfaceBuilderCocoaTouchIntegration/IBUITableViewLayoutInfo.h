//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class NSDictionary;

@interface IBUITableViewLayoutInfo : NSObject <NSCoding>
{
    NSDictionary *_sectionFrames;
    NSDictionary *_headerFrames;
    NSDictionary *_footerFrames;
    NSDictionary *_cellFrames;
}

- (void).cxx_destruct;
- (id)frameForSection:(id)arg1;
- (id)footerFrameForSection:(id)arg1;
- (id)headerFrameForSection:(id)arg1;
- (id)frameForCell:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTableLayoutInfo:(id)arg1 andSections:(id)arg2;

@end

