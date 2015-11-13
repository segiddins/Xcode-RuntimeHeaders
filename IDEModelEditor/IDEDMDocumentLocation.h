//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class IDEDMSelection, NSString;

@interface IDEDMDocumentLocation : DVTDocumentLocation
{
    IDEDMSelection *_modelSelection;
}

+ (id)siblingForModelObject:(id)arg1 next:(BOOL)arg2;
+ (id)adjacentModelObjectToModelObject:(id)arg1 next:(BOOL)arg2;
+ (id)lastModelObjectWithRoot:(id)arg1;
+ (id)firstModelObjectWithRoot:(id)arg1;
+ (id)arrayByTraversingModelInLocationOrderWithRoot:(id)arg1;
+ (id)documentLocationWithURL:(id)arg1 modelObject:(id)arg2;
@property(readonly) IDEDMSelection *modelSelection; // @synthesize modelSelection=_modelSelection;
- (void).cxx_destruct;
@property(readonly) NSString *stringRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNearLocation:(id)arg1 inModel:(id)arg2;
- (long long)compare:(id)arg1;
- (id)previousLocationWithURL:(id)arg1 model:(id)arg2;
- (id)nextLocationWithURL:(id)arg1 model:(id)arg2;
- (id)modelObjectFromModel:(id)arg1;
- (id)copyWithURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithStringRepresentation:(id)arg1 url:(id)arg2;
- (id)initWithURL:(id)arg1 modelObject:(id)arg2;
- (id)initWithURL:(id)arg1 modelSelection:(id)arg2;

@end

