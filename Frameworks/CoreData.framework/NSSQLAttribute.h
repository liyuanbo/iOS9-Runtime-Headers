/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLAttribute : NSSQLColumn {
    BOOL  _unique;
}

- (unsigned int)_sqlTypeForAttributeType:(unsigned int)arg1 flags:(unsigned int)arg2;
- (id)attributeDescription;
- (id)initForReadOnlyFetchWithExpression:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (BOOL)isUnique;
- (BOOL)shouldIndex;

@end
