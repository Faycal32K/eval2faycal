# Top 10 en DAX – Power BI

Faire un **Top 10** à partir d'une donnée numérique (de 0 à +∞) et l'afficher
dans un **graphique en bâtons**, avec le **nom** de chaque élément.

Tout le code DAX est dans [`dax/top10.dax`](dax/top10.dax).

## 1. Adapter les noms

Le code suppose une table `Donnees` avec :

| Colonne  | Rôle                                  |
|----------|---------------------------------------|
| `Nom`    | le nom spécifique à afficher          |
| `Valeur` | la donnée numérique (0 à +∞)          |

Remplace `'Donnees'`, `[Nom]` et `[Valeur]` par les vrais noms de ta base.

## 2. Créer les mesures

Dans Power BI Desktop : **Accueil > Nouvelle mesure**, et crée une par une :

1. `Total Valeur` – la somme de la valeur par nom
2. `Rang` – le classement (1 = le plus grand, égalités départagées par le nom)
3. `Top 10 Valeur` – la valeur uniquement si le rang est ≤ 10

## 3. Construire le graphique en bâtons

1. Visualisations > **Graphique à barres groupées** (horizontal) ou
   **Histogramme groupé** (vertical).
2. **Axe Y / Axe X (catégorie)** : `Donnees[Nom]`
3. **Valeurs** : la mesure `Top 10 Valeur`
4. Clique sur **⋯ > Trier l'axe > Top 10 Valeur**, puis **Ordre décroissant**.
5. Format > **Étiquettes de données : Activé** pour afficher la valeur sur chaque bâton.

Les noms hors du top 10 ont une valeur vide (`BLANK`), donc Power BI ne les
affiche pas : il reste exactement **10 bâtons**, chacun avec son nom.

## Alternative sans DAX

Dans le volet **Filtres** du visuel : `Nom` > Type de filtre **N premiers** >
Afficher les éléments **Haut 10** > Par valeur : `Valeur`.
Le DAX ci-dessus reste plus pratique car le rang est réutilisable et
s'adapte aux segments (slicers) grâce à `ALLSELECTED`.
