//
//  PersonneFacade.h
//  33-MySQL
//
//  Created by Sonnarinh Syhaphom (Étudiant) on 17-02-23.
//  Copyright © 2017 Sonnarinh Syhaphom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "PersonneDTO.h"

@interface PersonneFacade : NSObject

//Propriétés visibles mais en lecture seule (pas de setter disponible ; mot-clef, readonly)
@property (strong, nonatomic, readonly) NSManagedObjectContext* managedObjectContext;
@property (strong, nonatomic, readonly) NSManagedObjectModel* managedObjectModel;
@property (strong, nonatomic, readonly) NSPersistentStoreCoordinator* persistentStoreCoordinator;


#pragma mark - Méthodes métier
+ (PersonneFacade*)personneFacade;

#pragma mark - Core Data Stack (public)
- (NSURL*)applicationDocumentsDirectory;

#pragma mark - Core Data Saving Support (public)
- (PersonneDTO)createPersonne;

- (PersonneDTO*)readPersonne:(NSManagedObjectID*)idPersonne;

- (void)saveContext;

- (int)deletePersonne:(PersonneDTO*)personneDTO;

- (NSMutableArray*)getAllPersonnes;


@end
