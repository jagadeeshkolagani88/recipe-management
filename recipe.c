#include <stdio.h>
#include <string.h>

#define MAX_RECIPES 10
#define MAX_INGREDIENTS 10

// Structure for Recipe
struct Recipe {
    char name[50];
    int ingredientCount;
    char ingredients[MAX_INGREDIENTS][50];
};

// Global array
struct Recipe recipes[MAX_RECIPES];
int recipeCount = 0;

// ➤ Add Recipe
void addRecipe() {
    if (recipeCount >= MAX_RECIPES) {
        printf("Recipe limit reached!\n");
        return;
    }

    printf("Enter recipe name: ");
    scanf(" %[^\n]", recipes[recipeCount].name);

    printf("Enter number of ingredients: ");
    scanf("%d", &recipes[recipeCount].ingredientCount);

    for (int i = 0; i < recipes[recipeCount].ingredientCount; i++) {
        printf("Enter ingredient %d: ", i + 1);
        scanf(" %[^\n]", recipes[recipeCount].ingredients[i]);
    }

    recipeCount++;
    printf("✅ Recipe added successfully!\n");
}

// ➤ View Recipes
void viewRecipes() {
    if (recipeCount == 0) {
        printf("No recipes available.\n");
        return;
    }

    for (int i = 0; i < recipeCount; i++) {
        printf("\n🍲 Recipe %d: %s\n", i + 1, recipes[i].name);
        printf("Ingredients:\n");

        for (int j = 0; j < recipes[i].ingredientCount; j++) {
            printf(" - %s\n", recipes[i].ingredients[j]);
        }
    }
}

// ➤ Search Recipe
void searchRecipe() {
    char name[50];
    printf("Enter recipe name to search: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < recipeCount; i++) {
        if (strcmp(recipes[i].name, name) == 0) {
            printf("\n✅ Recipe Found: %s\n", recipes[i].name);
            printf("Ingredients:\n");

            for (int j = 0; j < recipes[i].ingredientCount; j++) {
                printf(" - %s\n", recipes[i].ingredients[j]);
            }
            return;
        }
    }

    printf("❌ Recipe not found.\n");
}

// ➤ Delete Recipe
void deleteRecipe() {
    char name[50];
    printf("Enter recipe name to delete: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < recipeCount; i++) {
        if (strcmp(recipes[i].name, name) == 0) {

            for (int j = i; j < recipeCount - 1; j++) {
                recipes[j] = recipes[j + 1];
            }

            recipeCount--;
            printf("🗑️ Recipe deleted successfully!\n");
            return;
        }
    }

    printf("❌ Recipe not found.\n");
}

// ➤ Main Menu
int main() {
    int choice;

    while (1) {
        printf("\n===== Recipe Management System =====\n");
        printf("1. Add Recipe\n");
        printf("2. View Recipes\n");
        printf("3. Search Recipe\n");
        printf("4. Delete Recipe\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addRecipe(); break;
            case 2: viewRecipes(); break;
            case 3: searchRecipe(); break;
            case 4: deleteRecipe(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
