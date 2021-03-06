/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>
#import "ML3Entity.h"
#import "MusicLibrary-Structs.h"

@class ML3MusicLibrary;

@interface ML3Entity : NSObject {
@private
	ML3MusicLibrary* _library;
	long long _persistentID;
}
@property(readonly, assign) ML3MusicLibrary* library;
@property(readonly, assign) long long persistentID;
+(id)subselectStatementForProperty:(id)property;
+(id)subselectPropertyForProperty:(id)property;
+(void)performValueRequestsForLibrary:(id)library;
+(id)newWithPersistentID:(long long)persistentID inLibrary:(id)library;
+(id)collatedSQLForProperty:(id)property;
+(id)disambiguatedSQLForProperty:(id)property;
+(id)disambiguatedAndCollatedSQLForProperty:(id)property;
+(id)indexableSQLForProperties:(id)properties;
+(id)orderingSQLForProperties:(id)properties directionality:(id)directionality;
-(id)initWithPersistentID:(long long)persistentID inLibrary:(id)library;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(BOOL)matchesPredicate:(id)predicate;
-(id)cachedValueForProperty:(id)property;
-(void)requestValueForProperty:(id)property;
-(void)performRequestsForPropertyValues;
-(id)newSelectSQLForProperties:(id*)properties count:(unsigned)count predicate:(id)predicate;
-(void)getValues:(id*)values forProperties:(id*)properties count:(unsigned)count;
-(id)valueForProperty:(id)property;
-(void)setValue:(id)value forProperty:(id)property;
@end

@interface ML3Entity (ML3QueryAdditions)
+(id)queryWithLibrary:(id)library predicate:(id)predicate;
+(id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties;
+(id)queryWithLibrary:(id)library predicate:(id)predicate usingSections:(BOOL)sections;
+(id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections;
+(id)representativeEntityOfEntity:(id)entity persistentIDProperty:(id)property foreignPersistentIDProperty:(id)property3;
+(id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery predicate:(id)predicate usingSections:(BOOL)sections;
@end

@interface ML3Entity (ML3AggregateQueryAdditions)
+(id)aggregateQueryWithUnitQuery:(id)unitQuery foreignPersistentIDProperty:(id)property;
@end

