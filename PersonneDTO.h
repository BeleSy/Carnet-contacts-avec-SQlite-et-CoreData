//
//  PersonneDTO.h
//  33-MySQL
//
//  Created by Sonnarinh Syhaphom (Étudiant) on 17-02-23.
//  Copyright © 2017 Sonnarinh Syhaphom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface PersonneDTO : NSManagedObject

#pragma mark - Méthode d'initialisation

- (instancetype)initAvecPrenom:(NSString*)unPrenom nom:(NSString*)unNom etAge:(NSNumber*)unAge;


@end


NS_ASSUME_NONNULL_BEGIN

@import "PersonneDTO+CoreDataProperties.h"
