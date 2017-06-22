//
//  PersonneDTO+CoreDataProperties.h
//  35 - SQLite avec CoreData
//
//  Created by Gilles Bénichou on 2016-01-28.
//  Last modified by Gilles Bénichou on 2017-01-28.
//  Copyright © 2016-2017 Gilles Bénichou. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass..." from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "PersonneDTO.h"

NS_ASSUME_NONNULL_BEGIN

@interface PersonneDTO (CoreDataProperties)

@property (retain, nonatomic) NSNumber* age;
@property (retain, nonatomic) NSString* nom;
@property (retain, nonatomic) NSString* prenom;

@end

NS_ASSUME_NONNULL_END
