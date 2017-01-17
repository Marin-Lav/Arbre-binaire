/*

    Copyright (c) 2015 Nicolas Bisson

    L'autorisation est accord�e, gracieusement, � toute personne acqu�rant une
    copie de cette biblioth�que et des fichiers de documentation associ�s
    (la "Biblioth�que"), de commercialiser la Biblioth�que sans restriction,
    notamment les droits d'utiliser, de copier, de modifier, de fusionner, de
    publier, de distribuer, de sous-licencier et / ou de vendre des copies de
    la Biblioth�que, ainsi que d'autoriser les personnes auxquelles la
    Biblioth�que est fournie � le faire, sous r�serve des conditions suivantes:

    La d�claration de copyright ci-dessus et la pr�sente autorisation doivent
    �tre incluses dans toutes copies ou parties substantielles de la
    Biblioth�que.

    LA BIBLIOTH�QUE EST FOURNIE "TELLE QUELLE", SANS GARANTIE D'AUCUNE SORTE,
    EXPLICITE OU IMPLICITE, NOTAMMENT SANS GARANTIE DE QUALIT� MARCHANDE,
    D�AD�QUATION � UN USAGE PARTICULIER ET D'ABSENCE DE CONTREFA�ON. EN AUCUN
    CAS, LES AUTEURS OU TITULAIRES DU DROIT D'AUTEUR NE SERONT RESPONSABLES DE
    TOUT DOMMAGE, R�CLAMATION OU AUTRE RESPONSABILIT�, QUE CE SOIT DANS LE
    CADRE D'UN CONTRAT, D'UN D�LIT OU AUTRE, EN PROVENANCE DE, CONS�CUTIF � OU
    EN RELATION AVEC LA BIBLIOTH�QUE OU SON UTILISATION, OU AVEC D'AUTRES
    �L�MENTS DE LA BIBLIOTH�QUE.

*/

/**
 *  \file arbre_binaire.h
 *
 *  Fichier d'ent�te contenant la structure de donn�es 'arbre_binaire'.
 *  Un Arbre binaire est une liste hi�rarchique de donn�es qui ont
 *  au plus 2 "enfants".
 *
 */


#ifndef ARBRE_BINAIRE_H_INCLUDED
#define ARBRE_BINAIRE_H_INCLUDED

#include <stdbool.h>

#define ERREUR_TAILLE 255

/**
 *  \brief Une liste impl�ment� � l'aide d'un arbre binaire.
 */
typedef struct arbre_binaire_struct arbre_binaire;

/**
 *  \brief Alloue un espace m�moire pour y placer l'arbre binaire et y placer
 *         l'�l�ment racine.
 *
 *  \param valeur : La valeur de la racine de l'arbre.
 *
 *  \return L'arbre binaire avec la valeur de la racine.
 */
arbre_binaire* creer_arbre_binaire(int valeur);

/**
 *  \brief R�cup�re les donn�es d'un fichier pour cr�er un arbre binaire.
 *
 *  \param nom_fichier : Le nom du fichier qui contient les donn�es.
 *
 *  \return Un nouvel arbre binaire cr�� � l'aide des donn�es d'un fichier.
 */
arbre_binaire* charger_arbre_binaire(char *nom_fichier);

/**
 *  \brief Lib�re l'espace m�moire d'un arbre binaire.
 *
 *  \param arbre : L'arbre binaire � supprimer.
 */
void detruire_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Sauvegarde les donn�es d'un arbre binaire dans un fichier.
 *
 *  \param arbre        : L'arbre � enregistrer dans le fichier.
 *  \param nom_fichier  : Le fichier dans lequel sauvergarder les donn�es.
 */
void sauvegarder_arbre_binaire(arbre_binaire* arbre, char * nom_fichier);

/**
 *  \brief Indique le nombre d'�l�ments que contient l'arbre binaire.
 *
 *  \param arbre : L'arbre � trouver son nombre d'�l�ments.
 *
 *  \return Le nombre d'�l�ment qu'il y a dans l'arbre.
 */
int nombre_elements_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Indique le nombre de feuilles que contient l'arbre binaire.
 *
 *  \param arbre : L'arbre � trouver son nombre de feuilles.
 *
 *  \return Le nombre de feuilles qu'il y a dans l'arbre.
 */
int nombre_feuilles_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Indique la hauteur de l'arbre binaire.
 *
 *  \param arbre : L'arbre � trouver sa hauteur.
 *
 *  \return La hauteur de l'arbre binaire.
 */
int hauteur_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Indique l'�l�ment se trouvant � la racine de l'arbre binaire.
 *
 *  \param arbre : L'arbre dans lequel trouver l'�l�ment de la racine.
 *
 *  \return L'�l�ment se trouvant � la racine.
 */
int element_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Modifie la valeur de la racine de l'arbre binaire.
 *
 *  \param arbre  : L'arbre dans lequel faire la modification.
 *  \param valeur : La nouvelle valeur de la racine.
 */
void modifier_element_arbre_binaire(arbre_binaire* arbre, int valeur);

/**
 *  \brief Indique si un �l�ment � la m�me valeur que celle entrer en argument.
 *
 *  \param arbre  : L'arbre binaire dans lequel chercher la valeur.
 *  \param valeur : La valeur � chercher dans l'arbre.
 *
 *  \return Vrai si un des �l�ments �quivaut l'argument valeur.
 */
bool contient_element_arbre_binaire(arbre_binaire* arbre, int valeur);

/**
 *  \brief Renvoie le premier sous-arbre enfant de l'arbre binaire, s'l
 *         n'y a pas d'enfant retourne NULL.
 *
 *  \param arbre : L'arbre binaire dans lequel chercher le premier sous-arbre.
 *
 *  \return Le premier sous-arbre enfant de l'arbre binaire.
 */
arbre_binaire* premier_enfant_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Ajoute un premier enfant � l'arbre binaire, s'il y a un premier
 *         enfant ajoute une erreur.
 *
 *  \param arbre  : L'arbre binaire dans lequel cr�er un premier enfant.
 *  \param valeur : La valeur � placer dans le premier enfant.
 */
void creer_premier_enfant_arbre_binaire(arbre_binaire* arbre, int valeur);

/**
 *  \brief Supprime le premier enfant d'un arbre binaire.
 *
 *  \param arbre : L'arbre duquel on supprime le premier enfant.
 */
void retirer_premier_enfant_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Renvoie le second sous-arbre enfant de l'arbre binaire, s'l
 *         n'y a pas d'enfant retourne NULL.
 *
 *  \param arbre : L'arbre binaire dans lequel chercher le second sous-arbre.
 *
 *  \return Le second sous-arbre enfant de l'arbre binaire.
 */
arbre_binaire* second_enfant_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Ajoute un second enfant � l'arbre binaire, s'il y a un second
 *         enfant ajoute une erreur.
 *
 *  \param arbre  : L'arbre binaire dans lequel cr�er un second enfant.
 *  \param valeur : La valeur � placer dans le second enfant.
 */
void creer_second_enfant_arbre_binaire(arbre_binaire* arbre, int valeur);

/**
 *  \brief Supprime le second enfant d'un arbre binaire.
 *
 *  \param arbre : L'arbre duquel on supprime le second enfant.
 */
void retirer_second_enfant_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Cherche s'il y a une erreur dans l'arbre binaire et retourne
 *         la r�ponse (Vrai/Faux).
 *
 *  \param arbre : l'arbre binaire � v�rifier.
 *
 *  \return Vrai s'il y a erreur et Faux en cas inverse.
 */
bool a_erreur_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Indique le texte de l'erreur qui est dans l'arbre binaire.
 *
 *  \param arbre : L'arbre binaire � v�rifier.
 *
 *  \return Le texte de l'erreur.
 */
char* erreur_arbre_binaire(arbre_binaire* arbre);

/**
 *  \brief Place le message d'erreur dans l'arbre binaire et conserve
 *         celle-ci dans la librairie. Mets "a_erreur_arbre_binaire" � Vrai.
 *
 *  \param arbre : L'arbre binaire qui a �t� v�rifi�.
 *  \param erreur : La description de l'erreur.
 */
void inscrire_erreur_arbre_binaire(arbre_binaire* arbre, const char* erreur);

/**
 *  \brief Retire l'erreur en mettant "a_erreur_arbre_binaire" � Faux.
 *
 *  \param arbre : L'arbre binaire qui a �t� v�rifi�.
 */
void retirer_erreur_arbre_binaire(arbre_binaire* arbre);

#endif // ARBRE_BINAIRE_H_INCLUDED

/* vi: set ts=4 sw=4 expandtab: */
