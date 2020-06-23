//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSourceControl/NSCopying-Protocol.h>
#import <XCSourceControl/NSSecureCoding-Protocol.h>

@class NSString;

@interface XCSourceControlHostRenderableContent : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_markdown;
    NSString *_html;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *html; // @synthesize html=_html;
@property(readonly, copy, nonatomic) NSString *markdown; // @synthesize markdown=_markdown;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithMarkdown:(id)arg1 html:(id)arg2;

@end

