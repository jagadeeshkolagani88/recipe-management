This project is a menu-driven Recipe Management System implemented in C.
It allows users to store and manage recipes along with their ingredients using arrays and structures.

🧩 Program Details
🔹 Data Structure Used

The program uses a struct to represent each recipe:

struct Recipe {
    char name[50];
    int ingredientCount;
    char ingredients[10][50];
};
name → Stores recipe name
ingredientCount → Number of ingredients
ingredients → List of ingredient names
⚙️ Functionalities
➕ 
1. Add Recipe (addRecipe)
Adds a new recipe to the system
Takes recipe name and ingredients as input
Stores data in a global array
<img width="346" height="316" alt="image" src="https://github.com/user-attachments/assets/0fd1cd18-fccd-4207-a8b2-45a084065486" />

📖 2. View Recipes (viewRecipes)
Displays all stored recipes
Shows recipe name and ingredients
<img width="336" height="299" alt="image" src="https://github.com/user-attachments/assets/edaa9746-90a7-47d4-aad2-fc473900e807" />

🔍 3. Search Recipe (searchRecipe)
Searches for a recipe by name
Uses strcmp() for comparison
Displays recipe details if found
<img width="1078" height="700" alt="image" src="https://github.com/user-attachments/assets/30caaf98-3a82-45a7-9f4c-5731e270f902" />

🗑️ 4. Delete Recipe (deleteRecipe)
Deletes a recipe by name
Shifts remaining recipes to maintain array order
<img width="332" height="212" alt="image" src="https://github.com/user-attachments/assets/8dafc0b3-1967-472e-9865-1f9398780082" />

🔄 5. Menu System (main)
Provides user interface using a loop
Executes functions based on user choice
<img width="439" height="148" alt="image" src="https://github.com/user-attachments/assets/a55f7ddb-492b-4e50-8eb2-16975090ee9c" />
