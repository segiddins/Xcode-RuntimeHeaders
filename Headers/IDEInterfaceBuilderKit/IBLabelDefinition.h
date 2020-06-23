//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSGradient, NSString;

@interface IBLabelDefinition : NSObject
{
    NSColor *_color;
    NSString *_identifier;
    NSString *_name;
    NSGradient *_gradient;
}

+ (id)labelDefinitionWithIdentifier:(id)arg1 name:(id)arg2 color:(id)arg3 andGradient:(id)arg4;
+ (id)standardLabelDefinitionForIdentifier:(id)arg1;
+ (id)standardLabelDefinitions;
- (void).cxx_destruct;
@property(readonly) NSGradient *gradient; // @synthesize gradient=_gradient;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSColor *color; // @synthesize color=_color;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 color:(id)arg3 andGradient:(id)arg4;

@end

