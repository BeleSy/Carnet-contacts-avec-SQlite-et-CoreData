//
//  PersonneDTO.m
//  33-MySQL
//
//  Created by Sonnarinh Syhaphom (Étudiant) on 17-02-23.
//  Copyright © 2017 Sonnarinh Syhaphom. All rights reserved.
//

#import "PersonneDTO.h"

@implementation PersonneDTO

#pragma mark - Méthode d'initialisation
- (instancetype) initAvecPrenom:(NSString*)unPrenom nom:(NSString*)unNom etAge:(NSNumber*)unAge{
    
    if (self = [super init]) {
        [self setPrenom:unPrenom];
        [self setNom:unNom];
        [self setAge:unAge];
    }
    return self;
}

@end