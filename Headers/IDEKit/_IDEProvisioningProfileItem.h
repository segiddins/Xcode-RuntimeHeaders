//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface _IDEProvisioningProfileItem : NSObject
{
    BOOL _success;
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
    unsigned long long _rowHeight;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(nonatomic) unsigned long long rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (id)description;

@end

