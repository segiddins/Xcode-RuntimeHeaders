//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDBase/XDDevPropertyMapping.h>

@interface XDDevRelationshipMapping : XDDevPropertyMapping
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)initialize;
- (id)possibleNames;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (BOOL)destinationHasChildren;
- (id)valueExpressionAsString;
- (void)setSourceMappingName:(id)arg1;
- (id)possibleSourceExpressions;
- (id)sourceMappingName;
- (void)setSourceKeyPath:(id)arg1;
- (id)sourceKeyPath;
- (id)shortPropertyType;
- (Class)propertyClassType;
- (void)setAutoGenerateExpression:(id)arg1;
- (id)autoGenerateExpression;

@end
