//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEFontAndColorItem-Protocol.h>

@class DVTSyntaxTypeSpecification;

@interface IDESourceCodeFontAndColorItem : NSObject <IDEFontAndColorItem>
{
    DVTSyntaxTypeSpecification *_syntaxSpec;
}

- (void).cxx_destruct;
@property(readonly) DVTSyntaxTypeSpecification *syntaxSpec; // @synthesize syntaxSpec=_syntaxSpec;
- (void)setFont:(id)arg1 forTheme:(id)arg2;
- (void)setColor:(id)arg1 forTheme:(id)arg2;
- (id)fontForTheme:(id)arg1;
- (id)colorForTheme:(id)arg1;
- (id)displayName;
@property(readonly) short nodeType;
- (id)initWithSyntaxSpec:(id)arg1;

@end

